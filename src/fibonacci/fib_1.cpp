#include <cwchar>

__int64 fib_1(int n) { //����Fibonacci���еĵ�n����ֵݹ�棩��O(2^n)
    return (2 > n) ?
           (__int64) n //������ݹ����ֱ��ȡֵ
                   : fib_1(n - 1) + fib_1(n - 2); //���򣬵ݹ����ǰ�����ͼ�Ϊ����
}