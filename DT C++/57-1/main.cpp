#include <iostream>

using namespace std;
template <typename T>
void Swap(T& a, T&b){
    T c=a;
    a=b;
    b=c;
}

template <typename T>
void add(T a, T b){
    cout<<a+b<<endl;
}


int main()
{
    void(*p)(int&,int&)=Swap;
    void(*p2)(string&,string&)=Swap;
    //����ʱ�����������ݵ��ò�������������ĺ���

    cout<<p<<endl;
    cout<<p2<<endl;


    add(1,1.1);
    //�Զ��Ƶ����ͱ����ϸ�ƥ��

    add<int>(1,1.1);
    //��ʽ���ÿ��Խ�������ת��
    
    return 0;
}
