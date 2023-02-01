/*************************************************************************
	> File Name: sort.cpp
	> Author: Luzelin 
 ************************************************************************/

#include "head.h"

void sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> point) {
    if (head >= tail)  return ;
    unguarded_quick_sort(head, tail - 1, point, threshold);
    unguarded_insert_sort(head, tail, point);
    return ;
}
