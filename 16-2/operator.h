#ifndef OPERATOR_H
#define OPERATOR_H
class Operator
{
public:
    bool setOperator(char op);
    void setParameter(double a,double b);
    bool result(double& r);

private:
    double mp1;
    double mp2;
    char mop;


};

//.h�ļ�����������
#endif // OPERATOR_H
