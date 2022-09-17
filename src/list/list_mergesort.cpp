#include "list.h"

template <typename T> //�б�Ĺ鲢�����㷨������ʼ��λ��p��n��Ԫ������
void List<T>::mergeSort ( ListNodePosi(T) & p, int n ) { //valid(p) && rank(p) + n <= size
    if ( n < 2 ) return; //��������Χ���㹻С����ֱ�ӷ��أ�����...
    int m = n >> 1; //���е�Ϊ��
    ListNodePosi(T) q = p; for ( int i = 0; i < m; i++ ) q = q->succ; //�����б�
    mergeSort ( p, m ); mergeSort ( q, n - m ); //��ǰ�������б�ֱ�����
    merge ( p, m, *this, q, n - m ); //�鲢
} //ע�⣺�����p��Ȼָ��鲢������ģ��£����