#include <iostream>

using namespace std;

class A{
public:
    virtual void print() {cout<<"A"<<endl;}
};

class B:public A{
public:
    virtual void print() {cout<<"B"<<endl;}
};

int main()
{
    B b;
    A* a=new B;
    a->print();

    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    //��̬��ʵ����ͨ���麯����
    //���л�����һ���麯���� ����麯���ĵ�ַ
    //ͬʱ���л���һ�����ص� ָ�� ָ�������麯����
    //��������ʱ ͨ��ָ��Ѱ�Ҹ�����麯���� ���ﵽ��̬����
    return 0;
}
