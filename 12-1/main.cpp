#include <iostream>

using namespace std;

int main()
{
    //const���ε� ʲôʱ���Ǳ��� ʲôʱ���ǳ���

    int* p;

    const int a=3;
    p=(int*)&a;
    *p=5;
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);
    //����������ʼ�� �����ڼ���ֱ��ȷ��ֵ���ǳ��� ������ű�

    int b=3;
    const int c=b;
    p=(int*)&c;
    *p=5;
    printf("c=%d\n",c);
    printf("*p=%d\n",*p);
    //�ñ�����ʼ�� �����ڼ䲻��ȷ��ֵ������ͨ��ֻ������

    volatile const int d=5;
    //volatile���ε�const�������������ű�
    p=(int*)&d;
    *p=5;
    printf("d=%d\n",d);
    printf("*p=%d\n",*p);


    return 0;
}
