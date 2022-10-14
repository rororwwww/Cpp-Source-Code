#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void print() {cout<<"Parent::print()"<<endl;}
    void test() {cout<<"Parent::test()"<<endl;}
};

class Child:public Parent
{
public:
    void print() override {cout<<"Child::print()"<<endl;}
    //��������д�麯��ʱ Ҳ�Զ�Ϊ�麯��
    //һ���������麯�������麯������麯�����ָ��

    void test() {cout<<"Child::test()"<<endl;}
};

int main()
{
    Child c;

    c.print();

    cout<<sizeof(c)<<endl;

    Parent* p=&c;

    p->print();

    p->test();
    //testû�н��麯���� ͨ��pָ����ʵ���Parent test()
    return 0;
}
