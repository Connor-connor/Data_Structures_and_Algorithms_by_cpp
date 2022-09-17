#include "vector.h"

template <typename T> //���������Ĺ鲢
void Vector<T>::merge ( Rank lo, Rank mi, Rank hi ) { //���������������[lo, mi)��[mi, hi)
    T* A = _elem + lo; //�ϲ��������A[0, hi - lo) = _elem[lo, hi)
    int lb = mi - lo; T* B = new T[lb]; //ǰ������B[0, lb) = _elem[lo, mi)
    for ( Rank i = 0; i < lb; B[i] = A[i++] ); //����ǰ������
    int lc = hi - mi; T* C = _elem + mi; //��������C[0, lc) = _elem[mi, hi)

//    for ( Rank i = 0, j = 0, k = 0; ( j < lb ) || ( k < lc ); ) { //B[j]��C[k]�е�С������Aĩβ
//        if ( ( j < lb ) && ( ( lc <= k ) || (B[j] <= C[k] ) ) ) A[i++] = B[j++];
//        if ( ( k < lc ) && ( ( lb <= j ) || (C[k] < B[j] ) ) ) A[i++] = C[k++];
//    }

    //ԭ����ʵ��������⡢����ֲ��ǿ������������鲢�������������Ż�����
    for ( Rank i = 0, j = 0, k = 0; j < lb; ) { //��B[j]��C[k]�е�С������Aĩβ
        if (               ( lc <= k ) || ( B[j] <= C[k] )   ) A[i++] = B[j++];
        if ( ( k < lc ) &&                ( C[k] <  B[j] )   ) A[i++] = C[k++];
    }
    //����ѭ����������Ĵ���ɾ�������߼�

    delete [] B; //�ͷ���ʱ�ռ�B
} //�鲢��õ���������������[lo, hi)