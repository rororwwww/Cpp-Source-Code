#include <iostream>

using namespace std;

class CPU{
public:
    CPU() {cout<<"CPU������"<<endl;}
    ~CPU() {cout<<"CPU������"<<endl;}
};

class Computer{
  CPU m_CPU;
public:
  Computer() {cout<<"Computer������"<<endl;}
  ~Computer() {cout<<"Computer������"<<endl;}
};


//�����������֮��������벿�ֹ�ϵ һ����Ĵ��ڱ�������������
//�ڴ������� ��һ������Ϊ����һ����ĳ�Ա���� ���������ֹ�ϵ

int main()
{
    Computer c1;
    return 0;
}
