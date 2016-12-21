#ifndef LEETCODE_SORT_H_
#define LEETCODE_SORT_H_

#include <vector>
#include <string>
#include <iostream>

/*
 不稳定的排序[编辑]
 * 堆排序（heap sort）—O(n log n)
 */

// 冒泡排序
void bubble_sort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) std::swap(arr[i], arr[j]);
        }
    }
}

// 插入排序
void insertion_sort(std::vector<int> &arr) {
    int tmp;
    for (int i = 1; i < arr.size(); ++i) {
        tmp = arr[i];
        int j = i - 1;
        for (; j >= 0 && arr[j] > tmp; --j) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = tmp;
    }
}

// 二分查找插入排序
void bin_insertion_sort(std::vector<int> &arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int tmp = arr[i];
        int from = 0;
        int to = i - 1;
        while (from <= to) {
            int mid = from + (to - from) / 2;
            if (arr[mid] < tmp) from = mid + 1;
            else to = mid - 1;
        }
        int j = i;
        while (--j >= from) arr[j + 1] = arr[j];
        arr[from] = tmp;
    }
}

// 归并排序
void merge_sort_recursive(std::vector<int> &arr, std::vector<int> &nums, int start, int end) {
    if (start >= end) return;
    int mid = start + (end - start) / 2;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    merge_sort_recursive(arr, nums, start1, end1);
    merge_sort_recursive(arr, nums, start2, end2);
    int k = start;
    while (start1 <= end1 && start2 <= end2) {
        nums[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    }
    while (start1 <= end1) nums[k++] = arr[start1++];
    while (start2 <= end2) nums[k++] = arr[start2++];

    for (k = start; k <= end; ++k) arr[k] = nums[k];
}

void merge_sort(std::vector<int> &arr) {
    std::vector<int> nums(arr.size());
    merge_sort_recursive(arr, nums, 0, arr.size() - 1);
}

// 选择排序
void selection_sort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[i]) min = j;
        }
        std::swap(arr[i], arr[min]);
    }
}

// 快速排序
void quick_sort_recursive(std::vector<int> &arr, int start, int end) {
    if (start >= end) return;
    int left = start;
    int right = end - 1;
    while (left < right) {
        while (left < right && arr[left] < arr[end]) ++left;
        while (left < right && arr[right] >= arr[end]) --right;
        std::swap(arr[left], arr[right]);
    }
    if (arr[left] >= arr[end]) std::swap(arr[left], arr[end]); else ++left;

    quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort(std::vector<int> &arr) {
    quick_sort_recursive(arr, 0, arr.size() - 1);
}

#endif // LEETCODE_SORT_H_
