#include <iostream>

using namespace std;

class A{
public:
    virtual void print() {cout<<"A::print();"<<endl;}
    void print(int i) {cout<<"print(int i)"<<endl;}
    void print(int i, int v) {cout<<"print(int i, int v)"<<endl;}
};

class B:public A{
public:
    void print() {cout<<"B::print()"<<endl;}
};

class C:public A{

};

void print(A* a){
    a->print();
}

int main()
{
    A* b=new B;
    A* a=new A;

    C* c=new C;
    c->print();

    B f;
    A a2 = f;
    a2.print();
    cout << sizeof(f) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a) << endl;
    print(a);
    print(b);

    //c++�麯����������ָ��(����)����ʱ ʹ�ú�����д������ ����ʵ�ʶ������;�����������
    //�����ʱ���޷�֪��a����ָ��ʲô���� ֻ��һ����ַ ��֪�������ĸ����� ֻ֪��Ҫ���� print()
    //�������е�ʱ�����֪��ָ������� ���ڶ�̬����


    a->print(3);
    a->print(3,5);
    //����ʱ�� Ҫ����print(int i) �� print(int i,int v) ȷ���˵��õĺ���
    //���ھ�̬����

    return 0;
}
