#include <iostream>
#include <string>
#include <sstream>
//��׼�����ַ�������ͷ�ļ� �ṩ���ַ���������֮���ת��
using namespace std;

#define String_To_Number(s,n) istringstream(s)>>n
#define Number_To_String(n) (((ostringstream&)(ostringstream()<<n)).str())
//istringsteam �ַ���������
//ostringsteam �ַ��������

int main()
{

    int i;
    String_To_Number("1234",i);
    cout<<i<<endl;

    string str=Number_To_String(1234);
    cout<<str<<endl;

    string str1="abcd";
    string str2="";
    str2=str1;
    cout<<str2<<endl;

    return 0;
}
