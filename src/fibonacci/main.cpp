#include<ctime>
#include<iostream>
#include "fib.h"
using namespace std;

__int64  fib_0 ( int n ); //������
__int64  fib_1 ( int n ); //���ֵݹ��
__int64  fib_2 ( int n, __int64& f ); //���Եݹ��

int main1 ( int argc, char* argv[] ) { //����FIB
// ������
    if ( 2 > argc ) { fprintf ( stderr, "Usage: %s <rank>\n", argv[0] ); return 1; }
    int n = atoi ( argv[1] );
// ���μ���Fibonacci���и���
    printf ( "\n------------- class Fib -------------\n" );
    Fib f ( 0 );
    for ( int i = 0; i < n; i++, f.next() )
        printf ( "fib(%2d) = %d\n", i, f.get() );
    for ( int i = 0; i <= n; i++, f.prev() )
        printf ( "fib(%2d) = %d\n", n - i, f.get() );
    printf ( "\n------------- Iteration -------------\n" );
    for ( int i = 0; i < n; i++ )
        printf ( "fib(%2d) = %22I64d\n", i, fib_0 ( i ) );
    printf ( "\n------------- Linear Recursion -------------\n" );
    for ( int i = 0; i < n; i++ ) {
        __int64 f;
        printf ( "fib(%2d) = %22I64d\n", i, fib_2 ( i, f ) );
    }
    printf ( "\n------------- Binary Recursion -------------\n" );
    for ( int i = 0; i < n; i++ )
        printf ( "fib(%2d) = %22I64d\n", i, fib_1 ( i ) );
    return 0;
}