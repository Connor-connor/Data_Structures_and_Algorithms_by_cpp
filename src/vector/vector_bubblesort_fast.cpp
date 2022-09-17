#include "vector.h"

template <typename T> //向量的起泡排序
void Vector<T>::bubbleSort_fast ( Rank lo, Rank hi ) //assert: 0 <= lo < hi <= size
{ while ( lo < ( hi = bubble ( lo, hi ) ) ); } //逐趟做扫描交换，直至全序