#include <iostream>
#include "singalton.h"
using namespace std;

class A
{
    friend singalton<A>;
    A() {}
public:
    void print() {cout<<this<<endl;}
};

//Aʵ�ֵ�����ģ�� ��ɵ���ģʽ

int main()
{
    A* p=singalton<A>::GetInstance();
    A* p2=singalton<A>::GetInstance();

    p->print();
    p2->print();

    return 0;
}
