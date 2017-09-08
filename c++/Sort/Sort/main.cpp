//
//  main.cpp
//  Sort
//
//  Created by yxwang on 2017/9/8.
//  Copyright © 2017年 yxwang. All rights reserved.
//

#include <iostream>
#include "BubbleSort.hpp"
#include "StraightInsertionSort.hpp"
#include "ShellSort.hpp"
using namespace std;


void printNum(int *p , size_t length){
    for(size_t i = 0;i <length ; i++){
        cout<< p[i] << " ";
    }
    cout<<endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int buf[10] = { 12, 4, 34, 6, 8, 65, 3, 2, 988, 45 };
    cout << "排序前:" << endl;
    printNum(buf,sizeof(buf)/sizeof(int));
    
    shellSort(buf, sizeof(buf) / sizeof(int));
    
    cout << "\n\n\n排序后：" << endl;
    printNum(buf, sizeof(buf) / sizeof(int));
    getchar();
}
