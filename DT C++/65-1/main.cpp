#include <iostream>

using namespace std;
void func(int i){
    if(i<0)
        throw 0;
    if(i==0)
        throw -1;
    if(i>0)
        throw 1;
}
//��������func �����׳�int�͵��쳣
//0 �ǲ����쳣
//1 �������쳣
//-1 �ǳ�ʱ�쳣


void myfunc(int i){
    try{
        func(i);
    }catch(int i){
        if(i==0)
            throw "invalid error";
        if(i==-1)
            throw "timeout error";

        if(i==1)
            throw "runout error";

    }

}
//����catch�������쳣 �ﵽͳһ�쳣����
int main()
{

    try{
        myfunc(1);
    }catch(const char* i){
        cout<<i<<endl;
    }

    return 0;
}
