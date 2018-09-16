//
//  main.cpp
//  testxq
//
//  Created by 李应鹏 on 2018/8/14.
//  Copyright © 2018年 李应鹏. All rights reserved.
//



// Test.cpp

#include <iostream>
#include "Header.h"
#include <vector>
using std::cout;
using std::endl;
class Foo
{
public:
    Foo(int a);
    
};
int main()
{
    #if 0
    myClass<int,int> class1(3,5);
    
    class1.show();
    
    myClass<int,char> class2(3,'a');
    class2.show();
    
    myClass<double,int> class3(2.9,10);
    class3.show();
    
    system("PAUSE");
    #endif
    
    vector<int> vecIntA(3);
    //打印vectorA,此处也可以用下面注释内的代码来输出vector中的数据
    for(int i=0;i<vecIntA.size();i++)
    {
        cout<<vecIntA[i]<<"     ";
    }
    vector<Foo> f(2);
    
}

