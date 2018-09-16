//
//  main.cpp
//  test1c++
//
//  Created by 李应鹏 on 2018/9/16.
//  Copyright © 2018年 李应鹏. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
/*
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
*/


class Mystring
{
    public:
    //    Mystring()=default;
    Mystring(string pData="null")
    {
        m_pData=new string;
        *m_pData=pData;
    }
    Mystring(const Mystring &str)
    {
        m_pData=new string;
        *m_pData=*str.m_pData;
    }
    ~Mystring(void){delete m_pData;}
    Mystring& operator=(const Mystring &ptr)
    {
        if(this==&ptr)
        return *this;
        delete m_pData;
        m_pData=NULL;
        m_pData=new string;
        *m_pData=*ptr.m_pData;
        return *this;
    }
    string print(){return *m_pData;}
    private:
    string *m_pData;
};

int main()
{
    Mystring a("hello");
    Mystring b,c;
    b=c=a;
    //  (b=c)=a;
    cout<<a.print()<<b.print()<<c.print()<<endl;
    return 0;
}


