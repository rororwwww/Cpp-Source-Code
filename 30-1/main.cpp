#include <iostream>

using namespace std;

class  Complex
{
    int a;
    int b;

public:
     Complex(int a=0,int b=0) {
         this->a=a;
         this->b=b;
     }

     Complex operator + (Complex b){
         Complex ret;
         ret.a=this->a+b.a;
         ret.b=this->b+b.b;
         printf("Complex::operator +(Complex b)\n");
         return ret;
     }

     //��Ա������ɲ���������

     //���������صı�����ͨ������ĺ�����չ������(+)�Ĺ��� ���صĹ�����Ϻ������صĹ��� (+�Ĳ����б�ͬ)

     //��ͬʱ��Ա������ȫ�ֺ�����ɲ���������ʱ ����ʹ�ó�Ա�����Ĳ���������

     //��Ա�����Ĳ���������ֻ��Ҫ�Ҳ����� ��������Ƕ�����


     int GetA(){
         return a;
     }

     int GetB(){
         return b;
     }

     friend Complex operator +(Complex a, Complex b);

};

Complex operator +(Complex a, Complex b){
    Complex ret;
    ret.a=a.a+b.a;
    ret.b=a.b+b.b;
    printf("Complex operator +(Complex a, Complex b)\n");
    return ret;
}

//ȫ�ֺ�������������

int main()
{
    Complex c1(1,2);
    Complex c2(2,3);

    Complex c3 = c1.operator + (c2);

    printf("%d\n",c3.GetA());
    printf("%d\n",c3.GetB());
    

	Complex c4 = operator + (c1,c2); 

	printf("%d\n",c4.GetA());
    printf("%d\n",c4.GetB());

    return 0;
}
