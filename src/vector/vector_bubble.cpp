#include "vector.h"

template <typename T> bool Vector<T>::bubble ( Rank lo, Rank hi ) { //һ��ɨ�轻��
    bool sorted = true; //���������־
    while ( ++lo < hi ) //�������ң���һ����������Ԫ��
        if ( _elem[lo - 1] > _elem[lo] ) { //��������
            sorted = false; //��ζ����δ�������򣬲���Ҫ
            swap ( _elem[lo - 1], _elem[lo] ); //ͨ������ʹ�ֲ�����
        }
    return sorted; //���������־
}