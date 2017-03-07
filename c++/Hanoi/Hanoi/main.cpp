//
//  main.cpp
//  Hanoi
//
//  Created by yxwang on 17/3/7.
//  Copyright © 2017年 yxwang. All rights reserved.
//

#include <iostream>
#include <stack>
#include <map>
using namespace std;

map<stack<int>*,string> names;
void swap_hanoi(stack<int> from,stack<int> to);
void hanio(int num, stack<int> from,
           stack<int> temp,
           stack<int> to);
int main(int argc, const char * argv[]) {
    // insert code here...
    stack<int> from;
    stack<int> temp;
    stack<int> to;

    //names.insert(map<stack<int>,string>::value_type(from,"from"));
//    names.insert(pair<stack<int>*,string>(&from,"from"));
//    names.insert(pair<stack<int>*,string>(&temp,"temp"));
//    names.insert(pair<stack<int>*,string>(&to,"to"));
    int num;
    while(true){
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout << "请输入数字"<<endl;
        }else{
            break;
        }
    }
    for(int i = num;i>0;i--){
        from.push(i);
    }
//    auto size = from.size();
//    for(int i = 0;i<size ;i++){
//        cout << from.top()<<endl;
//        from.pop();
//    }
    hanio(num,from,temp,to);
    return 0;
}

void hanio(int num, stack<int> from,
           stack<int> temp,
           stack<int> to){
    if(num>1){
        hanio(num-1, from, to, temp);
        swap_hanoi(from,to);
        hanio(num-1, temp, from, to);
    }else{
        swap_hanoi(from,to);
    }
}

void swap_hanoi(stack<int> from,stack<int> to){
    to.push(from.top());
    //cout << "move " <<from.top()<< " from "<<names.at(&from)<<" to "<<names.at(&to)<<endl;
    cout << "move " <<from.top()<<endl;
    from.pop();
}
