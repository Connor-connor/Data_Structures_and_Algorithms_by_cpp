#include "vector.h"

template <typename T> int Vector<T>::deduplicate() { //ɾ�������������ظ�Ԫ�أ���Ч�棩
    int oldSize = _size; //��¼ԭ��ģ
    Rank i = 1; //��_elem[1]��ʼ
    while ( i < _size ) //��ǰ�����һ�����Ԫ��_elem[i]
        ( find ( _elem[i], 0, i ) < 0 ) ? //����ǰ׺��Ѱ����֮��ͬ�ߣ�����һ����
        i++ : remove ( i ); //������ͬ������������̣�����ɾ����ͬ��
    return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
}

//template <typename T> int Vector<T>::deduplicate() { //ɾ�������������ظ�Ԫ�أ������棩
//    int oldSize = _size; //��¼ԭ��ģ
//    int i = -1; //����ǰ�˿�ʼ
//    while ( ++i < _size - 1 ) { //��ǰ�����һ
//        int j = i + 1; //assert: _elem[0, i]�в����ظ�Ԫ��
//        while ( j < _size )
//            if ( _elem[i] == _elem[j] ) remove ( j ); //����ͬ����ɾ������
//            else j++; //������ɨ��
//    }
//    return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
//}
//
//template <typename T> int Vector<T>::deduplicate() { //ɾ�������������ظ�Ԫ�أ�����棩
//    int oldSize = _size; //��¼ԭ��ģ
//    for ( Rank i = 1; i < _size; i++ ) { //��һ����_elem[i]
//        Rank j = find ( _elem[i], 0, i ); //��_elem[i]��ǰ����Ѱ����֮��ͬ�ߣ�����һ����
//        if ( 0 <= j ) remove ( j ); //�����ڣ���ɾ��֮�����ڴ����������һ����������i++��
//    }
//    return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
//}
