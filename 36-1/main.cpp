#include <iostream>

using namespace std;

class Test{
public:
	int* p;
    Test(int v){p=new int;*p=v;}
	~Test(){
		delete p;
	}
};


class Test2{
public:
	int* p;
    Test2(int v){p=new int;*p=v;}
    Test2& operator = (Test2& t){
        if(this == &t){
            cout<<"�Ը�ֵ"<<endl;
            return *this;
        }
        p=new int;
        *p=*(t.p);
        return *this;
    }
    
    ~Test2(){
		delete p;
	}
    //�ֶ�����=������������
};

int main()
{
    Test t1(3);
    Test t2(1);
    t1=t2;
    //������Ĭ�����ص� = ��������ǳ����
    cout<<t1.p<<endl;
    cout<<t2.p<<endl;
    //����ǳ����

    Test2 t12(3);
    Test2 t22(1);
    Test2 t32(1);

    t12=t22=t32;

    cout<<t12.p<<endl;
    cout<<t22.p<<endl;
    cout<<t32.p<<endl;

    t22=t22;

    return 0;
}
