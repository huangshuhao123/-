#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* arr)//对应的是一个字符串地址
//{
//	char*start = arr;
//	char*end = arr;
//	while (*end != '\0')//这里要用星号end
//	{
//		end++;//end表示的是地址所以加加
//	}
//	return end-start;
//}
//void main()
//{
//	char arr[]= "bit";
//	int strength = my_strlen(arr);//字符串首字母地址
//	printf("%d\n", strength);
//}
//指针数组
//void main()
//{
//	int a = 10; int b = 20; int c = 30;
//	int *arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d    ", *arr[i]);
//	}
//}



//冒泡排序

//void main()
//{
//	int arr[] = { 1,  6, 7, 8,2, 3, 4, 5, 9, 10 };
//	int i = 0; int j = 0; int t;
//	for (j = 0; j < 9;j++)
//	{
//		for (i = 0; i < 9-j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				t = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}

//打印数组

//void  INIT(int arr[],int  sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  PRINT(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//void main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	INIT(arr, sz);
//	PRINT(arr, sz);
//}

//逆顺序

//void  INIT(int arr[],int  sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  PRINT(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//void 	Reverse(int arr[],int sz)
//{
//	int i = 0; int t;
//	for (i = 0; i < (sz / 2); i++)
//	{
//		t=arr[i];
//		arr[i] = arr[sz - i-1];
//		arr[sz - i-1] = t;
//	}
//}
//void main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//INIT(arr, sz);
//	PRINT(arr, sz);
//	Reverse(arr, sz);
//	printf("\n");
//	PRINT(arr, sz);
//}

//鹏哥的方法，用左和右

//#include  <stdio.h>
//void  INIT(int arr[],int  sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  PRINT(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//void 	Reverse(int arr[],int sz)
//{
//	int Left = 0;
//	int Right = sz - 1;
//	int t;
//	while (Left < Right)
//	{
//		t = arr[Left];
//		arr[Left] = arr[Right];
//		arr[Right] = t;
//		Left++;
//		Right--;
//	}
//	
//}
//void main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//INIT(arr, sz);
//	PRINT(arr, sz);
//	Reverse(arr, sz);
//	printf("\n");
//	PRINT(arr, sz);
//
//}


//交换两个一样大的数组的所有元素

//#include  <stdio.h>
//void  PRINT(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//void Change(int arr1[],int  arr2[],int  sz)
//{
//	int i = 0; int t;
//	for (i = 0; i < sz; i++)
//	{
//		t=arr1[i] ;
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//}
//void main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	
//	
//	PRINT(arr1, sz);
//	printf("\n");
//	PRINT(arr2, sz);
//	printf("\n");
//	Change(arr1, arr2, sz);
//	PRINT(arr1, sz);
//	printf("\n");
//	PRINT(arr2, sz);
//}

//作业里面有一道不知道的题目

#include<stdio.h>
void main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
]	printf("%d\n", ret);
}