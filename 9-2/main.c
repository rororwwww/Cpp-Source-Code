#include <stdio.h>

#ifdef __cplusplus
extern "C"{
#endif
    #include <../9-1/add.h>

    //��ͬ���뷽ʽ�󣬺����ĺ�������ͬ
    //C���뺯����ֻ�������� C++������������Ͳ����б�
    //C++ʹ��C���� �ͱ����ƶ�������C��ʽ����

#ifdef __cplusplus
}
#endif

//��__cplusplus�ؼ��� ��֤������C++����C��ʹ��C����

int main()
{
    printf("%d",add(1,2));
    return 0;
}
