#include <iostream>

using namespace std;

class A{


public:
    int a;
    void Print(){printf("%p\n",this);}
};


int main()
{
    A a;
    a.a=3;
    A b;
    b.a=5;
    //ͬһ��������ж����ж����ĳ�Ա����

    printf("a=%p\n",&a);
    a.Print();
    printf("b=%p\n",&b);
    b.Print();
    //ͬһ������ж�����һ����ĳ�Ա����
    //��ĳ�Ա��������Ӱ�ص�thisָ����� ָ��ǰ���õĶ��� �������ĸ�������ø㶨��Ա����


    return 0;
}
