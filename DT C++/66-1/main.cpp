#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Base
{
public:
    virtual string type() {return "Base";}
};

class Derived:public Base
{
public:
    virtual string type() {return "Derivied";}
};

class Child:public Base
{
public:
    virtual string type() {return "Child";}
};

class A
{
public:
    A() {}
};

class B:public A
{
public:
    B() {}
};

void printtype(Base* b){
    cout<<b->type()<<endl;
}

int main()
{
    Base* b=new Child;
    Base* b2=new Derived;

    A* a=new B;

    printtype(b);
    printtype(b2);


    const type_info& tiv=typeid(b);
    const type_info& tii=typeid(Child);
    //�����Ǳ��� ���麯�� ���ض�̬��Ϣ
    cout<<tiv.name()<<endl;
    cout<<tii.name()<<endl;

    const type_info& tiv2=typeid(a);
    const type_info& tii2=typeid(B);
    //�����Ǳ��� ���麯�� ���ؾ�̬��Ϣ
    cout<<tiv2.name()<<endl;
    cout<<tii2.name()<<endl;


    return 0;
}
