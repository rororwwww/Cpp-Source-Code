#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i) {
        cout<<"Test���󱻹���"<<endl;
        this->i=i;
    }

    ~Test() {
        cout<<"Test��������"<<endl;

    }

    Test& operator ++ (){
        ++i;
        return *this;
    }//ǰ��++���� ���ص��Ǹı��˵�Test���� �������

    Test operator ++ (int){
        Test m_t=Test(i);
        i++;
        return m_t;
    }
    //����++���� ���ص��ǻ�δ�ı��Test���� ��intռλ����ʾ�Ǻ���++
};


int main()
{
    int i=0;
    i++;
    ++i;
    /*
        8 [1]	    i++;
0x40163e  <+0x000e>        83 44 24 0c 01  addl   $0x1,0xc(%esp)
        9 [1]	    ++i;
0x401643  <+0x0013>        83 44 24 0c 01  addl   $0x1,0xc(%esp)
    */

    //������������ ����ʹ�÷���ֵʱ  �������Ż���  ++i��i++�Ļ�������ͬ

    cout<<i++<<endl;
    cout<<++i<<endl;
    //ʹ�÷���ֵʱ ++i ��������ȡֵ i++��ȡֵ������



    Test t0(0);

    t0++;
    ++t0;
    //������ ����++�� ����++���ж������Ĺ������������
    //����ʹ�÷���ֵʱ ʹ��ǰ��++Ч�ʸ���

    return 0;
}
