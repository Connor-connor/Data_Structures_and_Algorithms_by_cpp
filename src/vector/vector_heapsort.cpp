#include "vector.h"

//TODO:û��������
//template <typename T> void Vector<T>::heapSort ( Rank lo, Rank hi ) { //0 <= lo < hi <= size
//    /*DSA*/printf ( "\tHEAPsort [%3d, %3d)\n", lo, hi );
//    PQ_ComplHeap<T> H ( _elem + lo, hi - lo ); //�����������佨��һ����ȫ����ѣ�O(n)
//    while ( ! H.empty() ) //������ժ�����Ԫ������������ĺ�׺��ֱ���ѿ�
///*DSA*/{
//        _elem[--hi] = H.delMax(); //��Ч�ڶѶ���ĩԪ�ضԻ�������
///*DSA*/for ( int i = lo; i < hi; i++ ) print( H[i] ); print(_elem[hi]); printf("\n");
///*DSA*/}
//}