#include <iostream>

using namespace std;

class A{
public:
    A(){printf("A()\n");}
    ~A(){printf("~A()\n");}
    //�빹�캯���෴ ��������ǰ�Զ�������������
};

int main()
{
    A a;
	
    A* p=new A;

    delete p;

    return 0;
}
