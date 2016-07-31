//
//  main.cpp
//  git_test
//
//  Created by 松岡正 on 2016/07/31.
//  Copyright © 2016年 松岡正. All rights reserved.
//

#include <iostream>
using namespace std;

class myclass{
    int a;
    public:
    myclass(int x);
    int get();
};

myclass::myclass(int x){
    a = x;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    
    return 0;
}
