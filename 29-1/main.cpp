 #include <iostream>

using namespace std;

class A{
public:
    static void f(int i){printf("static void f()");}
    void f(){printf("A::f()");}
    //static��Ա�����ͳ�Ա������ͬһ�������������
};

void f(){printf("f()");}

//�������ط�����ͬһ������
//ȫ�ֺ���f��A�ĳ�Ա����f����������

int main()
{
    f();
    A::f(5); //����������ͨ�������Ͷ��������ö�Ӧ�ĺ��� 
    A a;
    a.f(6);
    a.f();
    return 0;
}
