#include <iostream>

using namespace std;

class A{
public:
    int a_i;
    void print(){
        cout<<"I'm A class"<<endl;
    }

};


class B:public A{
public:
    int b_i;
    void print(){
        cout<<"I'm B class"<<endl;
    }

};

void print(A& a){
    a.print();
}
//���ݸ���ָ�����ָ������
//�������ÿ������������ԭ��
//��ƿ������ุ�๲�õĺ���
//(������д��Ҫ�麯��֧�ֲ�������)

int main()
{
    B b;
    A a=b;
    //�������ֵ���� ����ֱ�ӵ��������ʹ��

    a.print();
    //�����˻�Ϊ�������  ��ԭ����ĳ�Ա

    A& a2=b;
    //�����˻�Ϊ�������  ��ԭ����ĳ�Ա

    a2.print();

    print(b);

    return 0;
}
