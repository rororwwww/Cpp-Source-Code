#include <iostream>

using namespace std;

class cTest{
    int i;
    char c;
    double b;
    //class�ı����������strcut
    //���ڴ������г�Ա������������ �� strcut��ͬ�ڴ����
public:
    cTest(int vi,char vc, double vb):i(vi),c(vc),b(vb) {cout<<this<<endl;}
    void print() {
        cout<<"i="<<i<<endl;
        cout<<"c="<<c<<endl;
        cout<<"b="<<b<<endl;
        cout<<this<<endl;
    }
    //��Ա����λ�ڴ���� ���ж�����
    //�ڵ���ʱ ͨ�����ص�thisָ�봫�ݳ�Ա�����ĵ�ַ
    //��Ա����ͨ����Ա�����ĵ�ַ��������
};

struct sTest
{
   int i;
   char c;
   double b;
};


int main()
{
    cout<<sizeof(sTest)<<endl;
    cout<<sizeof(cTest)<<endl;
    //��ĳ�Ա�����ͽṹ���������ڴ���һ��

    cTest c(1,'c',3.0);

    c.print();

    sTest* p = reinterpret_cast<sTest*>(&c);
    //ͨ���ṹ��ָ��ٿ��ڴ� ����ֱ�ӷ�����ĳ�Ա����
    //��ĳ�Ա�������ڴ��кͽṹ���Ų�һ��

    p->b=5.0;
    p->i=100;
    p->c='a';

    c.print();

    cout<<"&c="<<&c<<endl;


    return 0;

}
