#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i) {this->i=i;}
    operator int (){
        return i;
    }

    int toInt(){
        return i;
    }
    //�������� Type toType()����ͨ������ɹ���
    //������ʽ����ת��
};

int main()
{
    Test t0(0);
    int i=t0;
    //int i=t0.operator int
    //��ʽ����ת�� Test->int

    t0.toInt();
    //ʵ��ʹ��
    return 0;
}
