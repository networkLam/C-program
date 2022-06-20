#include <stdio.h>
#define size sizeof(arr)/sizeof(arr[0])
#pragma warning(disable:4996)
enum  color
{
	red,
   green,
   blue
};
int main() {
	//冒泡排序
	//int arr[] = { 12 ,43,9,13,67,98,101,89 };
	//int i,j,temporary ;
	////数组的总字节数除以每个类型所占用的字节数等于数组的个数。ps：c语言的数组长度不可用变量
	////升序排序
	//for (i = 0; i < size - 1; i++) {
	//	for (j = 0; j < size - i - 1; j++) {
	//		if (arr[j] > arr[j + 1]) {
	//			//谁的值会被覆盖就把临时空间付给谁
	//			temporary = arr[j+1];
	//			arr[j + 1] = arr[j];
	//			arr[j] = temporary;
	//		}
	//	}
	//}
	enum color c = red;
	//printf("%d %d %d\n",red,green,blue);

	/*for (i = 0; i < 10 - 1; i++){
		for (j = 0; j < 10 - i - 1; j++){
			if (a[j] > a[j + 1]){
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}*/
	/*for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/
	//printf("---\n");
	//printf("%d\n", arr[i + 1]);
	/*for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("---------------\n");*/
	/*int feibo(int num);
	int num = 0;
	scanf("%d",&num);
	int num2 = feibo(num);
	if (num2 == 0) {
		printf("输入了无意义的值\n");
		return 0;
	}
	printf("%d\n",num2);*/
	/*int getmaxvalue(int num[], int max, int i);
	int arrnum[4] = { 0 };
	int i = 0;
	int j = 0;
	printf("please enter four numbers : ");
	while (i < 4)
	{
		scanf("%d", &arrnum[i]);
		i++;
	}
   int max_value = arrnum[0];
   int maxvalue = getmaxvalue(arrnum, max_value, j);;
   printf("最大值为：%d\n",maxvalue);*/
	//阶乘
	/*int factorial(int n);
	int numberA = factorial(10);
	printf("%d\n",numberA);*/
	//输入一个数字，转成字符串（数字位数不确定）
	void convert(int num);
	int num = 0;
	/*printf("please enter number: ");
	scanf("%d",&num);*/
	putchar(69+'0');
	/*printf("%d\n",num%10);*/
	/*if (num < 0) {
		putchar('-');
		putchar(' ');
		num = -num;
	}
	convert(num);
	printf("\n");*/
	void convert_TWO(int num);
	convert_TWO(369);
	return 0;
}

int feibo(int num){
	if (num == 0) {
		return 0;
	}
	if (num == 1 || num ==2) 
    {
		return 1;
	}
	else {
		return feibo(num - 1) + feibo(num - 2);
	} 

}


int getmaxvalue(int num[],int max,int i) {
	i++;
	if (i > 3) {
		return max;
	}
	if (num[i] > max) {
		max = num[i];
		return getmaxvalue(num,max,i);
	}
	
	return getmaxvalue(num, max, i);
}

//#include<stdio.h>
//#define NUM 4
//int max_val;
//int num[NUM];
//int select_max(int index)
//{
//	if (index >= 4) {
//		return 0;
//	}
//	if (max_val < num[index]) {
//		max_val = num[index];
//	}
//	select_max(index + 1);
//}
//int main(int argc, char* argv[])
//{
//	int i;
//	printf("Please input 4 numbers:");
//	for (i = 0; i < NUM; i++) {
//		scanf("%d", &num[i]);
//	}
//	printf("\n");
//	max_val = num[0];
//	select_max(0);
//	printf("The max number is :%d\n", max_val);
//}

//阶乘
int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return factorial(n - 1)*n;
}


//转换函数
void convert(int num) {
	int i = 0;
	if ((i = num / 10) != 0) {
		convert(i);
	}
	putchar(num % 10 + '0'); // ????
	putchar(' ');

}

void convert_TWO(int num) {
	int i = 0;
	if ((i = num / 10) != 0) {
		convert_TWO(i);
	}
	printf("%d\n",i%10);
}