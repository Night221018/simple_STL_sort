/*************************************************************************
	> File Name: test.cpp
	> Author: Luzelin 
 ************************************************************************/

#include "head.h"

void output(vector &vec, const char *str) {
    cout << str;
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return ;
}

#define N 20 

int main() {
    srand(time(NULL));
    vector nums;
    for (int i = 0; i < N; ++i)  nums.push_back(rand() % (N + 5));
    output(nums, "init    ");

    sort(nums.begin(), nums.end());
    output(nums, "default  ");
    
    sort(nums.begin(), nums.end(), greater());
    output(nums, "greater  ");

    sort(nums.begin(), nums.end(), less());
    output(nums, "less     ");
    return 0;
}
