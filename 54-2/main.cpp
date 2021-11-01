#include <iostream>

using namespace std;

class Parent{
protected:
    int m_p;
public:
     Parent(int i) {m_p=i;}
     int Get() {return m_p;}
     bool equal(Parent* p) {return this==p;}
};

class Interface1
{
public:
    virtual void add(int i)=0;
};

class Interface2
{
public:
    virtual void minus(int i)=0;
};

class Child:public Parent,public Interface1,public Interface2{
public:
    Child(int i):Parent(i) {}

    void add(int i){
        m_p+=i;
    }

    void minus(int i){
        m_p-=i;
    }

};
//���̳ж�ʵ�ֽӿ�

int main()
{
    Child c(5);
    Interface1* p1=&c;
    Interface2* p2=&c;

    p1->add(10);
    p2->minus(5);

    cout<<c.Get()<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    //��̳�ͬһ����ָ��ֵ��ͬ

    cout<<c.equal(dynamic_cast<Parent*>(p1))<<endl;
    cout<<c.equal(dynamic_cast<Parent*>(p2))<<endl;
    //�����ṩequal����ʵ�� �ж��Ƿ�ָ��ͬһ����
    return 0;
}
