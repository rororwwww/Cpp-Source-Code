#include <iostream>

using namespace std;

struct Student
{
    char* name;
    int id;
};

f(){

    cout<<"f() test"<<endl;

    return 1;
}

int main()
{
    Student s1;
    //C++��struct���Դ��������ͣ�����C����typedef+struct
    cout << "Hello World!" << endl;

    int a;
    //C++�ı�����������λ�ö���
    //C���Ա�����������ʼʱ����

    f(1,2);
    //C++��д�������ǲ����ܲ�������f(void)
    //C���Բ�д�������ڽ����������

    return 0;
}
