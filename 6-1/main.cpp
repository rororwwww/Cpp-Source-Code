#include <iostream>

using namespace std;

#define FUNC(a,b) (a)>(b)?(a):(b)
//������ �޵��ÿ��� �޲������ �޷�������

__attribute__((always_inlne)) inline int func(int a,int b){
    return (a)>(b)?(a):(b);
}
//inline �������� �޵��ÿ��� �в������ �з�������
//�ִ������� ����ͨ����չ�﷨ ǿ������

int main()
{
    int a=3;
    int b=2;
    int c=FUNC(a++,b);
    //�򵥵��ı��滻
    printf("c=%d\n",c);
	
    a=3;
    b=2;
    c=func(a++,b);
    //�������������β�ʵ�� �������
    //0x4016cf  <+0x0076>        e8 c4 63 00 00           call   0x407a98 <func(int, int)>
    //ͨ�����ɼ� inline��������ֻ�������������� ��һ���ɹ�

    printf("c=%d\n",c);

    return 0;
}
