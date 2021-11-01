#ifndef INTARRAY_H
#define INTARRAY_H
class IntArray{
private:
    int m_length;
    int* m_pointer;
    IntArray(int length);
    //���һ�׹��� ��ϵͳ��Դ�޹صĳ�ʼ��
    bool construct();
    //��ɶ��׹��� ϵͳ��Դʹ�õĳ�ʼ��


public:
    int Getlength(void);
    bool SetArray(int index,int value);
    int GetArray(int index);
    void Free();
    static IntArray* NewArray(int length);
    //���׹���ģʽ ����NewArray��������
    ~IntArray();
    //����������ɶѿռ��ͷ�
    IntArray(const IntArray& i);
    //�ֶ�������
    int operator [] (int i);
    //����[] ������
};
#endif // INTARRAY_H
