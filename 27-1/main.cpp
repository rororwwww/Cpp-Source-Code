#include <iostream>

using namespace std;

class A{
    int i;
    int* p;
    A(int v){i=v;}
    //�������Դ�޹صĳ�ʼ��
    bool B(){
        bool ret=true;
        p=new int;
        if(p)
            *p=i;
        else
            ret=false;
        return ret;
    }
    //��ϵͳ��Դ�йصĳ�ʼ��

public:
    static A* newA(int i){
        A* ret=new A(i);
        //һ�׹���
        if(!(ret&&ret->B())){
        //���׹���ʧ��

            delete ret;
            ret = NULL;
            //ɾ�����Ʒ
        }
        return ret;
        //���׹���ɹ� ������ȷָ��
    }
};

int main()
{
    A* a=A::newA(5);

    printf("%p",a);


    return 0;
}
