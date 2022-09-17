#include "vector.h"

template <typename T> //����ѡ������
void Vector<T>::selectionSort ( Rank lo, Rank hi ) { //assert: 0 < lo <= hi <= size
    while ( lo < --hi )
        swap ( _elem[max ( lo, hi ) ], _elem[hi] ); //��[hi]��[lo, hi]�е�����߽���
}

template <typename T>
Rank Vector<T>::max ( Rank lo, Rank hi ) { //��[lo, hi]���ҳ������
    Rank mx = hi;
    while ( lo < hi-- ) //����ɨ��
        if ( _elem[hi] > _elem[mx] ) //���ϸ�Ƚ�
            mx = hi; //������max�ж��ʱ��֤�������ȣ�������֤selectionSort�ȶ�
    return mx;
}