/*************************************************************************
	> File Name: unguarded_quick_sort.cpp
	> Author: Luzelin 
 ************************************************************************/

#include "head.h"

int Get_val(RandomIter l, RandomIter r) {
    int a = *l, b = *r, c = *(l + ((r - l) / 2));
    if (a > b)  swap(a, b);
    if (a > c)  swap(a, c);
    if (b > c)  swap(b, c);
    return b;
}

void unguarded_quick_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point, int depth_limit) {
    if (depth_limit == 0) {
        heap_sort(head, tail - head, point);
        return ;
    }
    while (tail - head >= threshold) {
        RandomIter l = head, r = tail;
        int mid = Get_val(l, r);
        do {
            while (point(*l, mid))  ++l;
            while (point(mid, *r))  --r;
            if (l <= r)  swap(*l++, *r--);
        } while (l <= r);
        unguarded_quick_sort(head, r, point, depth_limit - 1);
        head = l;
        
    }
    return ;
}
