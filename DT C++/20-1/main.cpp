#include <iostream>

using namespace std;

class Test{
private:
    const int i;
public:
    Test()
    {
        i=10;
        //ֻ���������ܳ����ڵȺ���� ��ֵ �Ѿ����ڵ�����ֵ
    }
};


class Test2{
private:
    const int i;
public:
    Test2():i(10)
    //ͨ����ʼ���б� ��ʼ�� ����i��ʱ������ֵ
    {

    }
};

class A
{
public:
    A(int i) {}
};

class B{
    A a1;
    A a2;
public:
    B() {
        a1=A(3);
        a2=A(4);
        //��ֵ ���Ѿ�����a1 a2����ֵ
        //A�в������޲ι��캯�� �ʲ��ܴ���a1 a2
    }

};

int main()
{

    return 0;
}
