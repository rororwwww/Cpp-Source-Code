#ifndef COOP_H
#define COOP_H
typedef struct Parent Parent;
typedef struct Child Child;
typedef struct VirtualTable VirtualTable;

VirtualTable ParentVirtualTable;
VirtualTable ChildVirtualTable;

struct VirtualTable
{
    void (*Virtualp)(Parent*,int);
};

struct Parent
{
    VirtualTable* ptr;
    int m_i;
    int m_j;
};
//��C����ʵ���������
//1.class�ĳ�Ա�������ڴ���structһ��

Parent Parent_Creat(int i,int j);
int Parent_GetI(Parent* pthis);
int Parent_GetJ(Parent* pthis);
void Parent_Add(Parent* pthis,int value);
void Virtual_Parent_Add(Parent* pthis,int value);
//2.�ֶ����ó�Ա������Ҫ��thisָ��

//3.ʵ�ּ̳� �̳б��ʾ��Ǹ����Ա�����������Ա
struct Child
{
    Parent p;
    int m_k;
};

Child Child_Creat(int i,int j,int k);
void Child_Add(Child* pthis,int value);
int Child_GetK(Child* pthis);
void Virtual_Child_Add(Child* pthis,int value);
//3.ʵ�ֶ�̬ �麯���б�������ָ���麯�����ָ�����

#endif // COOP_H
