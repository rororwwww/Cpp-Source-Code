#include <iostream>

using namespace std;

class Test{
    int i;
public:
     explicit Test(int i){
        cout<<"Test����"<<endl;
        this->i=i;
    }
    //explicit�ž���ʽ����ת�� ֻ���ֶ�����

    Test& operator = (const Test& obj){
        i=obj.i;
        cout<<"��ֵ������"<<endl;
    }

};

int main()
{
    Test i(6);
    i=7;
    //����������ת�����캯�� ��ʽ����ת��
    //i=(Test)7;
    return 0;
}
