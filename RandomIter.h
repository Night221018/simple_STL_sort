/*************************************************************************
	> File Name: RandomIter.h
	> Author: Luzelin 
 ************************************************************************/

#ifndef _RANDOMITER
#define _RANDOMITER

class RandomIter {
public:
    RandomIter(int *p) : data(p) {}
    RandomIter(const RandomIter &iter) : data(iter.data) {}
    bool operator==(const RandomIter &iter) { return data == iter.data; }
    bool operator!=(const RandomIter &iter) { return !(data == iter.data); }
    bool operator<(const RandomIter &iter) const {
        return data < iter.data;
    }
    bool operator>(const RandomIter &iter) const {
        //return data > iter.data;   //OK
        return iter < *this;
    }
    bool operator<=(const RandomIter &iter) const {
        //return data <= iter.data;  //OK
        return !(iter < *this);
    }
    bool operator>=(const RandomIter &iter) const {
        //return data >= iter.data;  //OK
        return !(*this < iter);
    }
    RandomIter& operator++() { ++data; return *this; }
    RandomIter& operator--() { --data; return *this; }
    RandomIter operator++(int) {
        RandomIter t(*this);
        ++data;
        return t;
    }
    RandomIter operator--(int) {
        RandomIter t(*this);
        --data;
        return t;
    }
    int operator-(const RandomIter &iter) { return data - iter.data; }
    RandomIter operator+(int step) { return RandomIter(data + step); }
    RandomIter operator-(int step) { return RandomIter(data - step); }
    int& operator*() { return *data; }
    int& operator[](int step) { return *(data + step); }
private:
    int *data;
};

#endif
