#include <iostream>

using namespace std;

class A{
public:
    A() {cout<<"A������"<<endl;}
    A(const A& a) {cout<<"A�Ŀ�������"<<endl;}
    A& operator = (const A& a) {cout<<"A�ĸ�ֵ=����"<<endl;}
};

class B{
    A a;
public:
    B(A& obj):a(obj) {}
};


class C{
    A a;
public:
    C(A& obj) {a=obj;}
};
//C��B��һ�� a����Ĭ�Ϲ��촴���Ĺ���

int main()
{
    A a;

    cout<<endl;

    B b(a);

    cout<<endl;

    C c(a);

    return 0;
}
