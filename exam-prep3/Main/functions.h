#pragma once
	
void sort(int arr[], int size)
{
	int temp = 0;
	for (int i = 0;i < size; i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int* sortAndMergeTwoArrays(int arr1[], int arr2[], int& size1,int size2)
{
	int* result = new int[size1 + size2];
	int i = 0;
	for (;i < size1;i++)
	{
		result[i] = arr1[i];
	}
	for (int j = i, k = 0;k < size2;k++, j++)
	{
		result[j] = arr2[k];
	}

	sort(result, size1 + size2);

	return result;
}

size_t strlen(char str[])
{
	int i = 0;
	if (str == nullptr)
	{
		return -1;
	}

	for(;str[i]!='\0';i++) {}
	return i;
}

int abs(int num)
{
	if (num < 0)
	{
		return -num;
	}
	return num;
}

char* gerWord(char str[])
{
	int len = strlen(str);
	int counter = 0;
	int maxCount = 0;
	int k = 0;
	int i = 0;
	for (;i < len;i++)
	{
		counter++;
		if (str[i] == ' ' || str[i] == '\0' || str[i] == '\t')
		{
			if (maxCount < counter - 1)
			{
				maxCount = counter - 1;
				k = abs(maxCount - i);
			}
			counter = 0;
		}
	}

	char* word = new char[maxCount + 1];
	for (int j = k, z = 0;z < maxCount && j < len;j++, z++)
	{
		word[z] = str[j];
	}
	word[maxCount] = '\0';

	return word;
}