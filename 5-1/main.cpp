#include <iostream>

using namespace std;

int main()
{
    int a=5;

    const int& b=a;
    //const���� b����ӵ��ֻ������

    const int& c=5;
    //�������ܸ�ֵ����ͨ���� �����Գ�ʼ����������
    //C++����Ϊ���������ڴ�ռ�  �൱��������һ��ֻ������cֵΪ5

    a=7;
	printf("%d\n",b);

    printf("%d\n",c);
	
    printf("%p\n",&c);
	
    double* p=(double*)&c;
	*p=3;

    printf("%d\n",c);
	printf("%d\n",*p);

    constexpr int d = 3;
    int& dd = (int&)d;
    dd = 5;

    cout << d << dd << endl;

    if (dd==d)
        cout << "dd=d" <<endl;

    return 0;
}
