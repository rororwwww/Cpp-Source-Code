#include <iostream>

using namespace std;

int main()
{
    //const�����Ƿ������µ�ֻ������

    int a=4;
    const int b=a;
    //const���������������ͬ���������µı���

    printf("b=%d\n",b);
    a=5;
    printf("b=%d\n",b);


    char c='c';
    const int d=c;
    //const������������Ͳ���ͬ�������µı���


    printf("d=%c\n",d);
    c='a';
    printf("d=%c\n",d);

    return 0;
}
