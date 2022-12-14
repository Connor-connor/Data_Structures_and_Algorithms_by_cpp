#include "vector.h"

template <typename T> //向量归并排序
void Vector<T>::mergeSort ( Rank lo, Rank hi ) { //0 <= lo < hi <= size
    if ( hi - lo < 2 ) return; //单元素区间自然有序，否则...
    int mi = ( lo + hi ) >> 1; //以中点为界
    mergeSort ( lo, mi ); mergeSort ( mi, hi ); //分别排序
    merge ( lo, mi, hi ); //归并
}