//
//  main.cpp
//  BubbleSort
//
//  Created by yxwang on 2017/9/7.
//  Copyright © 2017年 yxwang. All rights reserved.
//

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

void printNum(int *p , size_t length){
    for(size_t i = 0;i <length ; i++){
        cout<< p[i] << " ";
    }
}

void bubbleSort(int *p , size_t length){
    for(size_t j = 1; j< length ;j++){
        for (size_t i = 0 ; i < length-j ; i++){
            if(p[i] < p[i+1]){
                swap(p[i],p[i+1]);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int buf[10] = { 12, 4, 34, 6, 8, 65, 3, 2, 988, 45 };
    cout << "排序前:" << endl;
    printNum(buf,sizeof(buf)/sizeof(int));
    
    bubbleSort(buf, sizeof(buf) / sizeof(int));
    
    cout << "\n\n\n排序后：" << endl;
    printNum(buf, sizeof(buf) / sizeof(int));
    getchar();
}
