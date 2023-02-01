/*************************************************************************
	> File Name: unguarded_quick_sort.h
	> Author: Luzelin 
 ************************************************************************/

#ifndef _UNGUARDED_QUICK_SORT_H
#define _UNGUARDED_QUICK_SORT_H

void unguarded_quick_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point, int depth_limit);

#endif
