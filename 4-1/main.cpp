#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    bool b=true;
    //bool������C++�������� ֻռ��1 byte ��ȡ��ֵֻ��true��false
    //true�ڱ������ڲ�ֵΪ1  falseֵΪ0

    printf("sizeof(b)=%d,b=%d\n",sizeof(b),b);

    bool c=10;
    //�������ڲ�trueֵΪ1��flaseΪ0
    //�������Ὣ0ֵת��Ϊfalse����0ת��Ϊtrue

    printf("c=%d",c);

    return 0;
}
