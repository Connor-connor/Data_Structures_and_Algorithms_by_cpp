#include "vector.h"

template <typename T> //��������������
void Vector<T>::bubbleSort_fast ( Rank lo, Rank hi ) //assert: 0 <= lo < hi <= size
{ while ( lo < ( hi = bubble ( lo, hi ) ) ); } //������ɨ�轻����ֱ��ȫ��