#include <iostream>
#include <string>
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
  void TrunOn() {cout<<"Trun On"<<endl;}
};


class MacBook:public Computer{
    string system="MacOS";
public:
    void SetSystem(string s){system=s;}
    string ShowSystem() {return system;}
};
//����̳��˸�����������Ժ���Ϊ
//������һ������ĸ���
//���������Ӹ�����û�еķ���������


int main()
{
    MacBook mb1;
    cout<<mb1.ShowSystem()<<endl;
    mb1.TrunOn();

    Computer c1=mb1;
    //�������ֱ�ӳ�ʼ������
    c1.TrunOn();

    return 0;
}
