#include <iostream>

using namespace std;

class A{
    int m_i;
    int m_j;
};

class B:public A{
    int m_k;
};
//�̳��У������Ա�������ɸ����Ա�������ӵõ�
//������ǰ �����ں� �ڴ�������

struct Test
{
    int m_i;
    int m_j;
    int m_k;
};

int main()
{
    B b;
    Test* p=reinterpret_cast<Test*>(&p);

    p->m_i=10;
    p->m_j=100;
    p->m_j=1000;
    //ͨ���ڴ����

    return 0;
}
