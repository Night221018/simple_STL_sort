/*************************************************************************
	> File Name: sort.h
	> Author: Luzelin 
 ************************************************************************/

#ifndef _SORT_H
#define _SORT_H

void sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> point = less());

#endif
