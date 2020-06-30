//
// Created by yinlei on 2020/6/30.
//

#ifndef CH01_ARRAY_LENGTH_H
#define CH01_ARRAY_LENGTH_H

template <class T>

/**
 * 使用模板定义一 个函数getArrayLength,该函数将返回数组array的长度
 * @tparam T 泛型类型
 * @param array 待测试数组
 * @return 数组长度
 */
long getArrayLength(T& array) {
    return (sizeof(array) / sizeof(array[0]));
}

#endif