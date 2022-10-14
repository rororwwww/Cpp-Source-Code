#include <iostream>

using namespace std;

class Pointer{
    int* m_p;
public:
    Pointer(int* p=NULL){
        m_p=p;
        cout<<"m_pָ��ѿռ�"<<endl;
    }
    ~Pointer(){
        delete m_p;
        cout<<"m_p��ָ���ݱ�delete"<<endl;
    }
    int operator * (){
        return *m_p;
    }

    Pointer(Pointer& obj){
        delete m_p;
        m_p=obj.m_p;
        obj.m_p=NULL;
    }

    Pointer& operator = (Pointer& obj){
        if(this!=&obj){
            delete m_p;
            m_p=obj.m_p;
            obj.m_p=NULL;
        }
    }

    bool isNull(){
        return (this->m_p == NULL);
    }

};
int main()
{

    Pointer p(new int(10));
    cout<<*p<<endl;
    //����ָ��ʹ��


    Pointer p2=p;

    if(p.isNull())
        cout<<*p2<<endl;
    //һƬ�ѿռ�ֻ����һ��ָ��ָ��

    return 0;
}
