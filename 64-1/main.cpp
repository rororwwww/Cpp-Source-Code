#include <iostream>
using namespace std;

double divide(double a, double b){
    const double delta = 0.0000000000001;
    if(b<delta && b>-delta){

        throw 0;
    }
    else{

        return a/b;
    }
}

void f(){
    try{
        throw "error";
    }
    catch(int i){
        cout<<"error int"<<endl;
    }
}

int main()
{

    try{
        double b=divide(1,0);
        //try������׳����쳣��catchƥ�䴦��
    }catch(short s){
        cout<<"error short"<<endl;
    }catch(int i){
        cout<<"error int "<<endl;
    }catch(...){
        cout<<"error ..."<<endl;
    }//...���Դ��������쳣


    try{
        f();
        //�쳣�Ĵ���  ��˳�ŵ���ջ˳�򴫲� ֱ��������
    }catch(...){
         cout<<"error ..."<<endl;
    }


    return 0;
}
