#include <iostream>

using namespace std;

class A
{
public:
    A() {printf("A()\n");}
    ~A() {printf("~A()\n");}
};

class B{
private:
    A a1;
    A a2;
public:
    B() {printf("B()\n");}
    ~B() {printf("~B()\n");}
};

B b1;
//�������Ĺ���˳�� b1��b2����
//������˳���෴  b2����b1����

int main()
{

    B b2;
    //���󴴽�ʱ�Ĺ��캯������˳��:
    //1.��Ա���� a1 a2�Ĺ��캯�� 2.��������Ĺ��캯��

    //������˳��͹����˳���෴ ��������������
    return 0;
}
