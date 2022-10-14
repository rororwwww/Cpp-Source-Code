#include <iostream>
#include <memory>
#include <string>
using namespace std;

class A
{
    string str;
public:
    A(string s) {cout<<"A������"<<endl;str=s;}

    void print(){
        cout<<str<<endl;
    }

    ~A() {cout<<"A������"<<endl;}
};

int main()
{
    auto_ptr<A> p(new A("hAPPY"));

    p->print();

    cout<<p.get()<<endl;

    return 0;
}
