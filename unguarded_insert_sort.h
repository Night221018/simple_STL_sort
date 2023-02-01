/*************************************************************************
	> File Name: unguarded_insert_sort.h
	> Author: Luzelin 
 ************************************************************************/

#ifndef _UNGUARDED_INSERT_SORT_H
#define _UNGUARDED_INSERT_SORT_H

void unguarded_insert_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point);

#endif
