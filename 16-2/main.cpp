#include <iostream>
#include "operator.h"
using namespace std;

int main()
{
    //main����ʹ���� ������������ʵ�� ֻ��Ҫʹ��.h
    Operator op;
    op.setOperator('*');
    op.setParameter(9,8);
    double r;
    op.result(r);
    printf("%f",r);
    return 0;
}
