#include <iostream>

using namespace std;

template <typename T1 , typename T2>
class A
{
public:
    void add(T1 a, T2 b){
        cout<<"void add(T1 a, T2 b)"<<endl;
    }
};
//������ģ��==>�ػ�

template <typename T>
class A <T , T>
{
public:
    void add(T a, T b){
        cout<<"void add(T a, T b)"<<endl;
    }
};
//�����ػ�

template < >
class A <int , int>
{
public:
    void add(int a, int b){
        cout<<"void add(int a, int b)"<<endl;
    }
};
//��ȫ�ػ�

int main()
{
    A<int, float> a;
    A<float, float> b;
    A<int, int> c;
    //����ָ����Ϣ ѡ��ģ����
    a.add(3,6.0);
    b.add(5.0,6.0);
    c.add(1,5);

    return 0;
}
