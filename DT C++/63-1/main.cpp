#include <iostream>
using namespace std;

double divide(double a, double , int* value){
    const double delta = 0.0000000000001;
    if(b<delta && b>-delta){
        *value=0;
        //���쳣 value��ֵΪ0
        return 0;
    }
    else{
        *value=1;
        return a/b;
    }
    //C�����м򵥵� if-else�����쳣
}
//����ж��Ƿ�����쳣 ����value���ֵ�ж�
//C���Ա������쳣�ĸ���

int main()
{
    int* p=new int ;
    double r=divide(3,0,p);
    if(p!=0)
        cout<<r<<endl;

    return 0;
}
