#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
    int b; //�����鲿
    int a; //����ʵ��
public:
    Complex(int a=0, int b=0);
    int GetA();
    int GetB();
    double getModulus();
    void print();
    Complex operator + (Complex c);
    Complex operator - (Complex c);
    Complex operator * (Complex c);
    Complex operator / (Complex c);
    bool operator == (Complex c);
    bool operator != (Complex c);
    Complex operator = (Complex c);
    Complex& operator ++ ();
    Complex operator ++ (int);


};
#endif // COMPLEX_H
