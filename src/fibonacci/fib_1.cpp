#include <cwchar>

__int64 fib_1(int n) { //计算Fibonacci数列的第n项（二分递归版）：O(2^n)
    return (2 > n) ?
           (__int64) n //若到达递归基，直接取值
                   : fib_1(n - 1) + fib_1(n - 2); //否则，递归计算前两项，其和即为正解
}