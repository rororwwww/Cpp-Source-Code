
#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int& b=a;
    //C++�����ÿ��Կ����Ѿ�����ı����ı���
    b=5;
    //����b���ǲ���a
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",&b);
    //b,a��ͬһ���ڴ�ռ�ı���

    int& c;
    //����������ͬʱ������������ͬ�ı�����ʼ��

    return 0;
}
