#include <iostream>

using namespace std;
class A{
public:
    A(){printf("A()\n");}
    ~A(){printf("~A()\n");}
    A(const A& t){printf("A(const A& t)\n");}

};
int main()
{
    A();
    //ֱ�ӵ����������� �õ�һ����������ʱ����
    //��ʱ��������������������ֻ��12��һ�����

    printf("end");

    A a=A();
    //�ִ�C++������Ҳ�Ż��ܿ���ʱ���� ���������½�

    return 0;
}
