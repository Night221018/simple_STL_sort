/*************************************************************************
	> File Name: compare.h
	> Author: Luzelin 
 ************************************************************************/

#ifndef _COMPARE_H
#define _COMPARE_H

class greater {
    public:
    bool operator()(int &a, int &b) {
        return a > b;
    }
};

class less {
    public:
    bool operator()(int &a, int &b) {
        return a < b;
    }
};

#endif

