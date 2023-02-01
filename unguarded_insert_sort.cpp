/*************************************************************************
	> File Name: unguarded_insert_sort.cpp
	> Author: Luzelin 
 ************************************************************************/

#include "head.h"

void unguarded_insert_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point) {
    RandomIter ind = head;
    for (RandomIter i = head + 1; i != tail; ++i) {
        if (point(*i, *ind))  ind = i;
    }
    swap(*head, *ind);
    for (RandomIter i = head + 2; i != tail; ++i) {
        for (RandomIter j = i; point(*j, *(j - 1)); --j) {
            swap(*j, *(j - 1));
        }
    }
    return ;
}
