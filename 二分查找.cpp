#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//我的答案：
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 检查中间值是否为目标值
        if (arr[mid] == target) {
            return mid;
        }

        // 如果目标值大于中间值，则忽略左半部分
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // 如果目标值小于中间值，则忽略右半部分
        else {
            right = mid - 1;
        }
    }

    // 如果未找到目标值，返回-1
    return -1;
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("请输入要查找的数字：");
    scanf("%d", &target);

    int result = binary_search(arr, size, target);

    if (result != -1) {
        printf("找到数字%d, 下标为: %d\n", target, result);
    }
    else {
        printf("找不到\n");
    }

    return 0;
}
//正确答案：
/*
二分查找：
 在一个有序的序列中，找某个数据是否在该集合中，如果在打印该数据在集合中的下标，否则打印找不到

 具体找的方式：
  1. 找到数组的中间位置
  2. 检测中间位置的数据是否与要查找的数据key相等
	a: 相等，找到，打印下标，跳出循环
	b: key < arr[mid], 则key可能在arr[mid]的左半侧，继续到左半侧进行二分查找
	c: key > arr[mid], 则key可能在arr[mid]的右半侧，继续到右半侧进行二分查找

	如果找到返回下标，否则继续，直到区间中没有元素时，说明key不在集合中，打印找不到

 易错点：
 1. right的右半侧区间取值，该值决定了后序的写法
 2. while循环的条件是否有等号
 3. 求中间位置的方法，直接相加除2容易造成溢出
 4. 更改left和right的边界时，不确定是否要+1和-1
*/

// 方法一，采用[left, right] 区间
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1; // right位置的数据可以取到

	while (left <= right) // right位置有数据，必须要添加=号
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid - 1; // right位置的数据可以取到，因此right=mid-1
		}
		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if (left > right)
		printf("找不到\n");
	return 0;
}


// 方法二，采用[left, right) 区间
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到
//
//	while (left < right) // right位置没有数据，此处不需要添加=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
//		{
//			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
//		}
//		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
//		{
//			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left >= right)
//		printf("找不到\n");
//	return 0;
//}

//我的理解：
