#include <iostream>

using namespace std;

class A{
    int m_a;
public:
    void print() {cout<<"print"<<endl;}
};

class B:public A{
    int m_b;
};

class C:public A{
    int m_c;
};

class D:public B,public C{

};
//��̳еı��ʾ��Ǽ̳еĵ���

int main()
{
    D d;
    B* p1=&d;
    C* p2=&d;
    cout<<p1<<endl;
    cout<<p2<<endl;
    //��̳�ԭ��1 ���� ͬһ�����ָ�벻ͬ��ַ


    //���ؼ̳�ԭ��2 ���μ̳�

    d.B::print();
    //D�������ݲ�ͬA ��Ҫָ������ ���������Ա
    //��Ҫͨ����̳н�� ����̳б���������

    return 0;
}
