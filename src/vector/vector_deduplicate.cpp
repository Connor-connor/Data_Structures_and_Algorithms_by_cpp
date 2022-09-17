#include "vector.h"

template <typename T> int Vector<T>::deduplicate() { //删除无序向量中重复元素（高效版）
    int oldSize = _size; //记录原规模
    Rank i = 1; //从_elem[1]开始
    while ( i < _size ) //自前向后逐一考查各元素_elem[i]
        ( find ( _elem[i], 0, i ) < 0 ) ? //在其前缀中寻找与之雷同者（至多一个）
        i++ : remove ( i ); //若无雷同则继续考查其后继，否则删除雷同者
    return oldSize - _size; //向量规模变化量，即被删除元素总数
}

//template <typename T> int Vector<T>::deduplicate() { //删除无序向量中重复元素（繁琐版）
//    int oldSize = _size; //记录原规模
//    int i = -1; //从最前端开始
//    while ( ++i < _size - 1 ) { //从前向后，逐一
//        int j = i + 1; //assert: _elem[0, i]中不含重复元素
//        while ( j < _size )
//            if ( _elem[i] == _elem[j] ) remove ( j ); //若雷同，则删除后者
//            else j++; //并继续扫描
//    }
//    return oldSize - _size; //向量规模变化量，即被删除元素总数
//}
//
//template <typename T> int Vector<T>::deduplicate() { //删除无序向量中重复元素（错误版）
//    int oldSize = _size; //记录原规模
//    for ( Rank i = 1; i < _size; i++ ) { //逐一考查_elem[i]
//        Rank j = find ( _elem[i], 0, i ); //在_elem[i]的前驱中寻找与之雷同者（至多一个）
//        if ( 0 <= j ) remove ( j ); //若存在，则删除之（但在此种情况，下一迭代不必做i++）
//    }
//    return oldSize - _size; //向量规模变化量，即被删除元素总数
//}
