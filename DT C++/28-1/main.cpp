#include <iostream>

using namespace std;

class A{
    int i;
public:
    A(int v){i=v;}
    friend class B;
    friend void f(A& a);
};

class B{
    A a=5;
    int b=a.i;
    //��ԪBֱ�ӷ���a��private����
public:
    void f(int v){a.i=v;}

};

void f(A& a){
    printf("%d",a.i);
}
//��Ԫ�������һ���� ����f��A����Ԫ

int main()
{
    A a=100;
    f(a);
    //��Ԫ�������з��ʼ�����ƣ�ֱ�ӷ����������г�Ա

    B b;
    b.f(200);

    return 0;
}
