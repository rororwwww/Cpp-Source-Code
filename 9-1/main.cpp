#include <iostream>

#include "add.h"
// C++ֱ�ӵ���C���Ժ��� �������뷽ʽ��ͬ ����ʧ��

using namespace std;

extern "C"{

    #include "add.h"
    //��ͬ���뷽ʽ�󣬺����ĺ�������ͬ
    //C���뺯����ֻ�������� C++������������Ͳ����б�
    //C++ʹ��C���� �ͱ���ָ��������C��ʽ����

}


int main()
{
    int c=add(1,2);
    printf("c=%d",c);
    return 0;
}
