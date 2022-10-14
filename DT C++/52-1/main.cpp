#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    //���麯�� area() ����ԭ�� ��ʵ��
};
//������Shape ֻ�ܼ̳� ���ܴ�������

class Rect:public Shape{
    int ma;
    int mb;
public:
    Rect(int ma,int mb){
        this->ma=ma;
        this->mb=mb;
    }
    double area(){
        return ma*mb/2;
    }
};

class Channel{
public:
    virtual boool open()=0;
    virtual void  close()=0;
    virtual boool send(char* buf,int len)=0;
    virtual int  receive(char* buf,int len)=0;
};
//�ӿ���һ�麯����ԭ��
//C++��������ĳ�����ʵ��

class Circle:public Shape{
    int r;
public:
    Circle(int i){
        i=r;
    }
    double area(){
        return 3.14*r*r;
    }
};

double erea(Shape *p){
    p->area();
}
//ʵ�ֶ�̬  ���ݲ�ͬ������ò�ͬ��aear()����

int main()
{
    Rect r(3,4);
    Circle c(10);
    cout<<erea(&r)<<endl;
    cout<<erea(&c)<<endl;
    return 0;
}
