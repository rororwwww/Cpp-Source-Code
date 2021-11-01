#include <iostream>
using namespace std;

template <typename T>
//���߱����� T��ָһ����������
void Swap(T& a, T&b){
    T c=a;
    a=b;
    b=c;
}

template <typename T>
void print(T a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<endl;
    }
}

int main()
{
    int a=5;
    int b=3;

    string s1="THIS is my life";
    string s2="RPG";
    Swap(s1,s2);
    //�Զ��Ƶ�
    Swap<int>(a,b);
    //�ֶ�����

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<b<<endl;
    cout<<a<<endl;

    string s[3]={"Hello","C++","World"};
    print(s,3);

    return 0;
}
