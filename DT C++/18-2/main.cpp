#include <iostream>

using namespace std;

class Test{
private:
    int i;
public:
    
	Test(int v){
        i=v;
        printf("Test(int v)\n");
    }

    Test(){
        i=0;
        printf("Test()\n");
    }
    
    Test& operator=(const Test& other){
    	printf("Test& operator=(const Test& other)\n");
	} 
	
    void PrintI(){
        printf("i=%d\n",i);
    }
};

int main()
{
    Test t1;
    //���������Զ����ù��캯��
    t1=Test(5);
    //���滹���ֶ����ù��캯��
    
    return 0;
}
