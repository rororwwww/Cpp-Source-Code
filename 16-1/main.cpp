#include <iostream>

using namespace std;

struct A
{
    int i;
};
//C++�ṩר�ŵ�class�ؼ������ڶ�����
class B
{
    int i;
};

//struct������Ĭ�ϳ�Աpublic
//class������Ĭ�ϳ�Աprivate
int main()
{
    B b;
    A a;
    a.i;
    b.i;
    //error

    return 0;
}
