#include <iostream>

using namespace std;

class Object{
    string str;
public:
    Object(string s){
        cout<<"Object()������"<<endl;
        str=s;
    }
    ~Object(){
        cout<<"~Object()������"<<endl;
    }
};

class A{
    int i;
public:
    A(int i){
        cout<<"A()������"<<endl;
        this->i=i;
    }
    ~A(){
        cout<<"~A()������"<<endl;
    }
};

class B:public Object{
    A a;
public:
    B(int i,string s):a(i),Object(s){
    //�ó�ʼ���б� �����Ա������ʼ�� ��ʽ���ø���Ĺ��캯���Լ̳еĳ�Ա������ʼ��

        cout<<"B(int i,string s)������"<<endl;
    }
    ~B() {cout<<"~B()������"<<endl;}
};



int main()
{
    B b(5,"Hello");
    //�������˳�� �ȸ�ĸ ����� ���Լ�
    //����˳���빹���෴
    return 0;
}
