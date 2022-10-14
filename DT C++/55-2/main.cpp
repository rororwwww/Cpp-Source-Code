#include <iostream>

using namespace std;

class Parent
{
public:
    Parent() {cout<<"Parent������"<<endl;}
    virtual void func() {cout<<" Parent::func()"<<endl;}
    void print() {func();}
    virtual ~Parent() {cout<<"~Parent������"<<endl;}
    //������������Ϊ�麯�� ��ɶ�̬
};

class Child : public Parent
{
public:
    Child() {cout<<"Child������"<<endl;}
    void func() {cout<<"Child::func()"<<endl;}   
    ~Child() {cout<<"~Child������"<<endl;}
};

int main()
{
    Parent* p = new Child;
    p->print();
    delete p;
    //����ָ��Child��ָ�� deleteӦ�õ���Chld����������
    //��������Ӧ�ñ�����Ϊ�麯��
    return 0;
}
