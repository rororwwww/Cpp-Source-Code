#include <iostream>

using namespace std;

#define c 5
//����Ԥ���������� û�������������ͼ��

int main()
{
    const int a=3;
    //const�����Ǳ��������� �����������ͼ��
    //C++��const�������ĳ��� �����ڼ�ʹ�ó���a��ֱ���ñ��е�ֵ3�滻

    printf("a=%d\n",a);
    int* p=(int*)&a;
    //C++Ϊ�˼���C���� ��ȻΪ����a�����ڴ�ռ� ��ʹ��aʱ��ʹ��a�ڴ�ռ��ֵ �ó�ʼ��ʱ�̶�������ֵ

    *p=5;
    printf("*p=%d\n",*p);
    printf("a=%d\n",a);

    int i=5;

    const int b=i;
    p=(int*)&b;
    *p=5;
    printf("*p=%d\n",*p);
    printf("b=%d\n",b);

    return 0;
}
