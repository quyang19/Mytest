//
//  main.cpp
//  basecplus
//
//  Created by 李应鹏 on 2018/11/25.
//  Copyright © 2018 李应鹏. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;
class A{
    int j;
    const int i;
 
public:
       char *m_pData;
    A():i(1)
    {
        j = 2;
        printf("hhh");
    }
    void print()
    {
        cout<<"i:"<<i<<",j:"<<j<<endl;
    }

    A& operator =(const A& str);//赋值运算符
    #if 0
    {
        #if 0
        cout << "operator =" << endl;
        if (this != &str)
        {
            if (name != NULL)
                delete name;
            this->id = str.id;
            int len = strlen(str.name);
            name = new char[len + 1];
            strcpy_s(name, strlen(str.name) + 1, str.name);
        }
        #endif
        return *this;
    }
#endif
};
#if 0
void operator + (const A& a, const A& b) {
    //return;
}
#endif
#if 0
void operator = (const A &str){
}
#endif

A& A::operator =(const A& str)//赋值运算符
{
    delete []m_pData;
    m_pData = NULL;
    m_pData = new char[strlen(str.m_pData)+1];
    strcpy(m_pData,str.m_pData);
    return *this;
}

class B:public A{
    
    
    
};
struct M
{

    M()
    {
        
    }
};
struct s1
{
    char a;
    double b;
    int c;
    char d;
};
enum weekday
{
    mon=1,
    tuse
};
union uni
{
    short sh;
};
char *GetMemory()
{
    char *p ="ff";
    return p;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    A a,a1;
    M *m=new M;
    union uni kk;
    enum weekday day;
    char *str = GetMemory();
    str[0]='a';
    s1 s={1,2};
    
    day = mon;
    a.m_pData = "123";
    a1=a;
   // B b;
   // a.print();
    std::cout << "Hello, World!\n"<<sizeof(kk)<<"\n"<<sizeof(s1)<<endl;

    return 0;
}
