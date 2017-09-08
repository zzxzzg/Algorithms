//
//  BubbleSort.cpp
//  Sort
//
//  Created by yxwang on 2017/9/8.
//  Copyright © 2017年 yxwang. All rights reserved.
//

#include "BubbleSort.hpp"
#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int c = a;
    a = b;
    b = c;
    //    a = a + b;
    //    b = a - b;
    //    a = a - b;
}

void bubbleSortDes(int *p , size_t length){
    for(size_t j = 1; j< length ;j++){
        for (size_t i = 0 ; i < length-j ; i++){
            if(p[i] < p[i+1]){
                swap(p[i],p[i+1]);
            }
        }
    }
}

void bubbleSort(int *p , size_t length){
    for(size_t j = 1; j< length ;j++){
        for (size_t i = 0 ; i < length-j ; i++){
            if(p[i] > p[i+1]){
                swap(p[i],p[i+1]);
            }
        }
    }
}


