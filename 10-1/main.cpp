#include <iostream>

using namespace std;

int main()
{

    int* p=new int;
    printf("0x%p\n",p);

    *p=3;
    printf("%d\n",*p);

    delete p;

    p=new int[10]{1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++){

        printf("%d\n",p[i]);
    }

     delete[] p;
    //C++�Ķ�̬�ڴ���䰴���ͷ���  delete��new�ؼ���
	printf("0x%p\n",p);
	// delete �� free �� ָ�벻���ؿ� ��Ҫ�ֶ� ����ϰ�� 
	p=NULL; 
	
	
    return 0;
}
