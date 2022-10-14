#include <iostream>

using namespace std;

class A{
protected:
    string m_s;
public:
    A() {
      m_s="";
      cout<<"A()������"<<endl;
    }

    A(string s){
      m_s=s;
      cout<<"A(String s)������"<<endl;
    }

};

class B:public A{
public:
    B() {cout <<"B()������"<<endl;}
    B(string s): A(s) {cout<<"B(string s)������"<<endl;}
    //ͨ����ʼ���б����Ը���������Ĺ��캯������
    string Gets() {return m_s;}
};

int main()
{
    B b;
    //�Զ����ø����޲�������Ĭ��ֵ�Ĺ��캯�� �Լ̳����ĳ�Ա��ʼ��
    B b2("ss");
    //���ø����в����Ĺ��캯�� �Լ̳����ĳ�Ա��ʼ��
    cout<<b.Gets()<<endl;
    cout<<b2.Gets()<<endl;
    return 0;
}
