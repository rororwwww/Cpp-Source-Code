#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p="12345";
    string s="";


    for(int i=0;i<5;i++){
        s[i]=p[i];
        //������̵�˼��
    }
    //��ҪC���Ի��C++ BUG����Դ
    //�����������ķ�ʽд����

    for(int i=0;i<5;i++){
        cout<<s[i]<<endl;
    }

    cout<<s<<endl;
    //s is empty --WHY?
    //s.length=0;

    cout<<s.length()<<endl;

    s=p;
    //�������

    cout<<s<<endl;

    cout<<s.length()<<endl;


    return 0;
}
