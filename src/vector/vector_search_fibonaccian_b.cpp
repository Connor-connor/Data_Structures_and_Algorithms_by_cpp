#include "vector.h"
#include "../fibonacci/fib.h"

// Fibonacci查找算法（版本B）：在有序向量的区间[lo, hi)内查找元素e，0 <= lo <= hi <= _size
template <typename T> static Rank fibSearch ( T* A, T const& e, Rank lo, Rank hi ) {
    Fib fib ( hi - lo ); //用O(log_phi(n = hi - lo)时间创建Fib数列
    while ( lo < hi ) { //每步迭代仅仅做一次比较判断，有两个分支
        while ( hi - lo < fib.get() ) fib.prev(); //通过向前顺序查找（分摊O(1)）——至多迭代几次？
        Rank mi = lo + fib.get() - 1; //确定形如Fib(k) - 1的轴点
        ( e < A[mi] ) ? hi = mi : lo = mi + 1; //比较后确定深入前半段[lo, mi)或后半段(mi, hi)
    } //成功查找不能提前终止
    return --lo; //循环结束时，lo为大于e的元素的最小秩，故lo - 1即不大于e的元素的最大秩
} //有多个命中元素时，总能保证返回最秩最大者；查找失败时，能够返回失败的位置