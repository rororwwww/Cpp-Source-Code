#include <iostream>

using namespace std;

void f(int a,int b){
    cout<<"f(int a,int b)"<<endl;
 }

template <typename T>
void f(T a, T b){
    cout<<"f(T a, T b)"<<endl;
}
//ģ����������

int main()
{
    int a=5;
    int b=6;

    f(a,b);
    //���ȿ�����ͨ����

    f<>(a,b);
    //ʹ��<>ǿ��ʹ�ú���ģ�����

    return 0;
}
