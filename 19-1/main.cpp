#include <iostream>

using namespace std;

class Test{
public:
    int* p;
    Test(int v){p=new int;*p=v;}
};


class Test2{
public:
    int* p;
    Test2(int v){p=new int;*p=v;}
    Test2(const Test2& t){p=new int;*p=*(t.p);}
};

int main()
{
    Test t1=Test(5);
    Test t2=t1;
    printf("%p\n",t1.p);
    printf("%p\n",t2.p);
    //�������Զ��ṩ�Ŀ������캯����ǳ����
    Test2 t21=Test2(5);
    Test2 t22=t21;
    printf("%p\n",t21.p);
    printf("%p\n",t22.p);
    //�ֶ���д�������캯��������


    //Tips: �����ڴ����Ķ�����г�ʼֵ���á���������ʼ���ŵ��ù��캯��

    Test t3=t1;
    //���ÿ������캯�����г�ʼ��

    t3=t1;
    //���ø�ֵ���غ���

    return 0;
}
