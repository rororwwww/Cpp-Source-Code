#include <iostream>
using namespace std;

int f(int i) throw(int){
    throw 1;
}
//�쳣˵�� ������׳�int�͵��쳣���ӿɶ���

int main()
{
    try{
        f(3);
    }catch(...){
        cout<<"exception"<<endl;
    }

    return 0;
}
