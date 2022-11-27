#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数
//你有办法在O(n)时间内完成吗？
//int missingNumber(int* nums, int numsSize)
//{
//	int ret = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		ret ^= nums[i];
//	}
//	for (int j = 0; j <= numsSize; j++)
//	{
//		ret ^= j;
//	}
//	return ret;
//}


//轮转数组
//给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数
//#include<stdlib.h>
//#include<string.h>
//思路1
//void rotate(int* nums, int numsSize, int k)
//{
//	k = k % numsSize;
//	if (k != 0)
//	{
//		int* p1 = (int*)malloc(k * 4);
//		memmove(p1, nums + (numsSize - k), 4 * k);
//		memmove(nums + k, nums, 4 * (numsSize - k));
//		memmove(nums, p1, 4 * k);
//
//		free(p1);
//		p1 = NULL;
//	}
//}
//
////思路2
////我：空间复杂度为 O(1)
//void reverse(int* left, int* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void rotate2(int* nums, int numsSize, int k)
//{
//	k = k % numsSize;
//	if (k != 0)
//	{
//		reverse(nums, nums + (numsSize - k - 1));
//		reverse(nums + numsSize - k, nums + numsSize - 1);
//		reverse(nums, nums + numsSize - 1);
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int k = 3;
//	rotate(arr, len, k);
//	return 0;
//}


//移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素
//int removeElement(int* nums, int numsSize, int val)
//{
//	int count = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != val)
//		{
//			nums[count] = nums[i];
//			count++;
//		}
//	}
//	return count;
//}


//删除有序数组中的重复项
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致
//如果在删除重复项之后有 k 个元素，那么 nums 的前 k 个元素应该保存最终结果
//不要使用额外的空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成
//int removeDuplicates(int* nums, int numsSize)
//{
//	int begin = 0;
//	int i = 0;
//	while (i < numsSize)
//	{
//		if (nums[i] != nums[begin])
//		{
//			nums[++begin] = nums[i++];
//		}
//		else
//			i++;
//	}
//	return begin + 1;
//}


//合并两个有序数组
//非递减顺序 排列,合并后的数组同样按 非递减顺序 排列
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中
//nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int dst = m + n - 1;
//	int p2 = n - 1;
//	int p1 = m - 1;
//	while (p2 >= 0)
//	{
//		/*if (nums1[p1] > nums2[p2] && p1 >= 0)//力扣会报错
//		{
//			nums1[dst--] = nums1[p1--];
//		}*/
//		if (p1 >= 0 && nums1[p1] > nums2[p2])//这样写不报错
//		{
//			nums1[dst--] = nums1[p1--];
//		}
//		else
//		{
//			nums1[dst--] = nums2[p2--];
//		}
//	}
//}
//
//int main()
//{
//	int num1[] = { 1,2,3,0,0,0 };
//	int num2[] = { 2,5,6 };
//	merge(num1, 6, 3, num2, 3, 3);
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", num1[i]);
//	}
//	return 0;
//}
