#include <iostream>

using namespace std;

int main()
{
    int v=0x123456;
    int* p=(int*)v;
    //�ֱ������C����ǿ������ת�� �����������ж���ȷ��

    //C++�ṩ�������͵�ǿ������ת��������Ҫ ��Ӧ������� �й��򷽱���

    //static_cast ���ڻ�����������֮���ת��,���ܽ���ָ��֮���ת��
    char c='a';
    int i=static_cast<int>(c);

    //reinterpret_cast����ָ����ָ��֮���ǿ������ת��������������ָ��֮���ǿ������ת��

    char*cp=&c;
    p=&i;

    p=reinterpret_cast<int*>(cp);
    cp=reinterpret_cast<char*>(0);

    //const_cast����ȥ��������ֻ������ ǿ������ת����ָ���������
    const int a=3;

    int* p3=const_cast<int*>(&a);

    *p3=5;
 
    printf("a=%d",a);
    printf("*p3=%d",*p3);


    return 0;
}
