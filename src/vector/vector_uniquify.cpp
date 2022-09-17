#include "vector.h"

template <typename T> int Vector<T>::uniquify() { //有序向量重复元素剔除算法（高效版）
    Rank i = 0, j = 0; //各对互异“相邻”元素的秩
    while ( ++j < _size ) //逐一扫描，直至末元素
        if ( _elem[i] != _elem[j] ) //跳过雷同者
            _elem[++i] = _elem[j]; //发现不同元素时，向前移至紧邻于前者右侧
    _size = ++i; shrink(); //直接截除尾部多余元素
    return j - i; //向量规模变化量，即被删除元素总数
}

//template <typename T> int Vector<T>::uniquify() { //有序向量重复元素剔除算法（低效版）
//    int oldSize = _size; int i = 1; //当前比对元素的秩，起始于首元素
//    while ( i < _size ) //从前向后，逐一比对各对相邻元素
//        _elem[i - 1] == _elem[i] ? remove ( i ) : i++; //若雷同，则删除后者；否则，转至后一元素
//    return oldSize - _size; //向量规模变化量，即被删除元素总数
//}