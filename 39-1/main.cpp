#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i){this->i=i;}
    int GetI(){return i;}
};

Test& operator , (const Test& l, const Test& r) {
    return const_cast<Test&>(r);
}

Test func(Test i){

    cout<<"Test i="<<i.GetI()<<endl;

    return i;
}

int main()
{
    Test t0(0);
    Test t1(1);
    int i=(func(0).GetI(),func(1).GetI());
    //���������صı����Ǻ�������
    //fun(0),fun(1) ==> operator , (func(0),func(1))
    //��������ʱ �βζ�����ɼ��� �Ҽ���˳�򲻶�
    //, �������ƻ��˴����Ҽ����ԭ������  ��Ҫ����

    cout<<i<<endl;

    return 0;
}
