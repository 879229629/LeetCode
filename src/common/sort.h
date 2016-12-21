#ifndef LEETCODE_SORT_H_
#define LEETCODE_SORT_H_

#include <vector>
#include <string>
#include <iostream>

/*
 稳定的排序[编辑]
 * 冒泡排序（bubble sort）— O(n2)
 * 插入排序（insertion sort）—O(n2)
 * 桶排序（bucket sort）—O(n)；需要O(k)额外空间
 * 计数排序（counting sort）—O(n+k)；需要O(n+k)额外空间
 * 归并排序（merge sort）—O(n log n)；需要O(n)额外空间
 * 二叉排序树排序（binary tree sort）— O(n log n)期望时间；O(n2)最坏时间；需要O(n)额外空间
 * 基数排序（radix sort）—O(n·k)；需要O(n)额外空间
 * 块排序（block sort）— O(n log n)

 不稳定的排序[编辑]
 * 选择排序（selection sort）—O(n2)
 * 希尔排序（shell sort）—O(n log2 n)如果使用最佳的现在版本
 * 堆排序（heap sort）—O(n log n)
 * 快速排序（quick sort）—O(n log n)期望时间，O(n2)最坏情况；对于大的、随机数列表一般相信是最快的已知排序
 */


void bubble_sort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) std::swap(arr[i], arr[j]);
        }
    }
}

#endif // LEETCODE_SORT_H_
