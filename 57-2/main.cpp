#include <iostream>

using namespace std;

template <typename T1,typename T2, typename T3>
T1 Add(T2 a, T3 b){
    return static_cast <T1>(a+b);
}
//���������ģ��

int main()
{
    cout<<Add<int>(6,8.5)<<endl;
    //����ֵ����һ��Ҫ�ֶ�����
    //�����Ĳ������Ϳ���ͨ���Զ�ƥ�� T2=int Te=double

    return 0;
}
