#include <iostream>

using namespace std;

struct test{
  char& c;
};


int main()
{

    int a=8;
    int& b=a;

    char p=4;
    char&c =p;

    printf("sizeof(test)=%d\n",sizeof(test));
    //����Ҳռ���ڴ��С  ��Ϊ���õı�����ͨ��ָ��ʵ�ֵ�

    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(p));

    printf("0x%p\n",&b);
    printf("0x%p\n",&a);
    //վ��ʹ�õĽǶȣ������Ǳ����ı�����C++���������ô洢�ռ��ϸ��

    return 0;
}
