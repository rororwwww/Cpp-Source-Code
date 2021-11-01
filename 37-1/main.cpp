#include <iostream>

using namespace std;

class Test{
  int i;
public:
  Test(int i){
      cout<<"Test������"<<endl;
      this->i=i;
  }
  int GetI(){
      return i;
  }
  ~Test(){
      cout<<"Test���ͷ�"<<endl;
  }
};

class Pointer{
    Test* mp;
public:
    Pointer(Test* p=NULL){
        mp=p;
    }

    Pointer( Pointer& obj){
        delete mp;
        mp=obj.mp;
        obj.mp=NULL;
    }

    Pointer& operator = ( Pointer& obj){
        if(this!=&obj){
            delete mp;
            mp=obj.mp;
            obj.mp=NULL;
        }
    }

    Test* operator -> (){
        return mp;
    }

    Test& operator * (){
        return *mp;
    }

    ~Pointer(){
        delete mp;
    }
};

int main(){
    Pointer p(new Test(8));
    //Pointer p(Test(8));
    //��Ϊ�ᱻfree��������ָ��һ��ָ��ѿռ�
    cout<< p->GetI() <<endl;

    Pointer p2=p;
    //ͨ�����ؿ������� ��ɲ�ָ��ͬһ����

    return 0;
}

