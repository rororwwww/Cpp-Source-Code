#include <iostream>

using namespace std;

class A{
public:
    A() {cout<<"A"<<endl; print();}

    ~A() {cout<<"~A"<<endl;}

};



int main()
{
    A* p=new A;
    //����ռ�ӳ�ʼ��
    A* p2=(A*)malloc(sizeof(A));
    //����ռ�

    free(p2);
    //���黹�ռ�
    delete p;
    //deleted�������������ݻٶ���ӹ黹�ռ�

    return 0;
}
