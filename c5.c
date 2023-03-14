void bubble_sort(int* arr)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//对于排序完成后“数组打印”功能函数的封装
int print_sort(int* arr, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//函数调用
int main(void)
{
	scanf_sort(arr);
	bubble_sort(arr);
	print_sort(arr, length);
	return 0;
}
