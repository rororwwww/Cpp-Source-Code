#include <iostream>

using namespace std;

class A
{
    int i;
public:
    int j;
    A() {}
    int GetI() const { i=5; return i;}
    //const��Ա�����������ں��������޸ı���ֵ 
    int GetJ() { j=5; return j;}
};
int main()
{
    const A a;
    //const������ֻ������

    a.j=3;
    //const����ĳ�Ա������ֻ����

    a.GetI();
    //const����ֻ�ܵ���const��Ա����

    a.GetJ();

    return 0;
}
