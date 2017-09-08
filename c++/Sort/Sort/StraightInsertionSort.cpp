//
//  StraightInsertionSort.cpp
//  Sort
//
//  Created by yxwang on 2017/9/8.
//  Copyright © 2017年 yxwang. All rights reserved.
//

#include "StraightInsertionSort.hpp"
using namespace std;


static void printNum(int *p , size_t length){
    for(size_t i = 0;i <length ; i++){
        cout<< p[i] << " ";
    }
    cout<<endl;
}

void straightInsertionSort(int *p ,size_t length){
    for(auto i = 1;i < length;i++){
        if(p[i] < p[i-1]){
            int x = p[i];
            p[i] = p[i-1];
            
            auto j = i-1;
            while( j-1 >= 0){
                if(x<p[j-1]){
                    p[j] = p[j-1];
                    j--;
                }else{
                    break;
                }
            }
            p[j] = x;
        }
        printNum(p,length);
    }
}

void straightInsertionSortDes(int *p ,size_t length){
    for(auto i = length-1;i >0;i--){
        if(p[i-1] < p[i]){
            int x = p[i-1];
            p[i-1] = p[i];
            
            auto j = i;
            while( j < length){
                if(x < p[j+1]){
                    p[j] = p[j+1];
                    j++;
                }else{
                    break;
                }
            }
            p[j] = x;
        }
        printNum(p,length);
    }
}
