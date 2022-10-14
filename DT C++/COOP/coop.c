#include "coop.h"

Parent Parent_Creat(int i,int j){
    Parent ret;
    ret.m_i=i;
    ret.m_j=j;
    ret.ptr=&ParentVirtualTable;
    return ret;
}

int Parent_GetI(Parent* pthis){
    return pthis->m_i;
}

int Parent_GetJ(Parent* pthis){
    return pthis->m_j;
}

void Parent_Add(Parent* pthis,int value){
     pthis->ptr->Virtualp(pthis,value);
}
//ͨ���麯�����ָ��
//��������  ���ø����麯������ĺ���
//��������  ���������麯������ĺ���


void Virtual_Parent_Add(Parent* pthis,int value){
    pthis->m_i+=value;
    pthis->m_j+=value;
}
//�麯�� Parent��Add

Child Child_Creat(int i,int j,int k){
    Child ret;
    ret.p.m_i=i;
    ret.p.m_j=j;
    ret.m_k=k;
    ret.p.ptr=&ChildVirtualTable;
    return ret;
}

void Child_Add(Child* pthis,int value){
    pthis->p.ptr->Virtualp(pthis,value);
}

void Virtual_Child_Add(Child* pthis,int value){
    pthis->p.m_i+=value;
    pthis->p.m_j+=value;
    pthis->m_k+=value;
}
//�麯�� Child��Add

int Child_GetK(Child* pthis){
    return pthis->m_k;
}


