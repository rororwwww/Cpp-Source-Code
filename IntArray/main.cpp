#include <iostream>
#include "intarray.h"
using namespace std;

int main()
{
    IntArray* array=IntArray::NewArray(6);
    //���ṹ��ģʽ��֤û�а��Ʒ����Ĳ���

    for(int i=0;i<array->Getlength();i++){
        array->SetArray(i,i);
    }

    for(int i=0;i<array->Getlength();i++){
        printf("%d\n",array->GetArray(i));
    }

    IntArray array2=*array;
    //���ñ�����Ĭ�ϵĿ������캯����ǳ����
    //�ֶ���д���

    for(int i=0;i<array2.Getlength();i++){
        printf("%d\n",array2.GetArray(i));
    }
    //�򵥵�ֵ����ʹ��array2��ָ���array��ָ��ָ��ͬһ��ջ�ռ�

    cout<<array2[3]<<endl;


    delete array;

    return 0;
}
