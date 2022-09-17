#include "vector.h"

// ���ֲ����㷨���汾A��������������������[lo, hi)�ڲ���Ԫ��e��0 <= lo <= hi <= _size
// ���ҳ���(�ؼ���ıȽϴ���):�ɹ���ʧ��ʱ��ƽ�����ҳ��ȴ���ΪO(1.50logn)
template <typename T>
static Rank binSearch ( T* A, T const& e, Rank lo, Rank hi ) {
    while ( lo < hi ) { //ÿ����������Ҫ�����αȽ��жϣ���������֧
        Rank mi = ( lo + hi ) >> 1; //���е�Ϊ���
        if      ( e < A[mi] ) hi = mi; //����ǰ���[lo, mi)��������
        else if ( A[mi] < e ) lo = mi + 1; //�������(mi, hi)��������
        else                return mi; //��mi������
    } //�ɹ����ҿ�����ǰ��ֹ
    return -1; //����ʧ��
} //�ж������Ԫ��ʱ�����ܱ�֤����������ߣ�����ʧ��ʱ���򵥵ط���-1��������ָʾʧ�ܵ�λ��
