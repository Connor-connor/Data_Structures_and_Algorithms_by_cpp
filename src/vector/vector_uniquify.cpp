#include "vector.h"

template <typename T> int Vector<T>::uniquify() { //���������ظ�Ԫ���޳��㷨����Ч�棩
    Rank i = 0, j = 0; //���Ի��조���ڡ�Ԫ�ص���
    while ( ++j < _size ) //��һɨ�裬ֱ��ĩԪ��
        if ( _elem[i] != _elem[j] ) //������ͬ��
            _elem[++i] = _elem[j]; //���ֲ�ͬԪ��ʱ����ǰ����������ǰ���Ҳ�
    _size = ++i; shrink(); //ֱ�ӽس�β������Ԫ��
    return j - i; //������ģ�仯��������ɾ��Ԫ������
}

//template <typename T> int Vector<T>::uniquify() { //���������ظ�Ԫ���޳��㷨����Ч�棩
//    int oldSize = _size; int i = 1; //��ǰ�ȶ�Ԫ�ص��ȣ���ʼ����Ԫ��
//    while ( i < _size ) //��ǰ�����һ�ȶԸ�������Ԫ��
//        _elem[i - 1] == _elem[i] ? remove ( i ) : i++; //����ͬ����ɾ�����ߣ�����ת����һԪ��
//    return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
//}