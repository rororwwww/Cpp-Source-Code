#include <iostream>
#include <string>
using namespace std;

string operator >>(string s,int n){
	
    string ret="";
    //�Ӵ����� �Ӵ���ȡ
    int pos= s.length()-n%s.length();

    ret=s.substr(pos);
    //�Ӵ���ȡ

    ret +=s.substr(0,pos);

    return ret;
}
// C++��ʽʵ��

int main()
{
    cout << "Hello World!" << endl;

    string str="ABCDEFGHIJK";

    cout<<(str>>1)<<endl;

    return 0;
}
