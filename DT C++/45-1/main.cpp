#include <iostream>

using namespace std;

class A{
private:
    int private_a;
protected:
    int protected_b;
public:
    int public_c;
    void print() {cout<<"Print()"<<endl;}
};

class B:public A{
//public�̳б��ָ���ķ��ʼ���

};

class C:protected A{
//protected�̳� public->protected ��������

};

class D:private A{
//private�̳� public��protected,private-> private

};

int main()
{
    B b;
    b.public_c;
    //public�̳� public����pulic �������ⲿ����
    b.print();

    C c;
    c.print();
    //protected�̳� public->protected �޷��ⲿ����
    return 0;


    //protected private�̳еĸ�����Զ����ʵ���� ������һ��ֻ��public�̳�

}
