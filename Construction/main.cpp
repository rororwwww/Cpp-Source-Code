#include <iostream>

using namespace std;

class A{
    int i;
public:
     A(int i) {
        cout<<"ת������"<<endl;
        this->i=i;
    }
    //ת�����캯�� ûд�������ṩ�յĹ��캯��

    A(const A& obj){
        cout<<"��������"<<endl;
        i=obj.i;
    }
    //�������캯�� ûд�������ṩĬ��

    A& operator = (const A& obj){
        cout<<"=������"<<endl;
        i=obj.i;
        return *this;
    }
    // =������  ûд�������ṩĬ��

};

int main()
{
    A t0(3);
    //��ʽ���� �ɹ�

    A t1=3;
    //��ʽ����ת�� t=(A)3;
    //�ܵ�explicit�Ŀ��� ֻ���ֶ�����

    A t2=A(7);
    //��ʽ����ת��
    //���������Ż� ������ʱ����
    //��������û������� ��������ĵ���

    t0=t1;
    //=������

    A t3=t1;
    //�������캯��

    return 0;
}
