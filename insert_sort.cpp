#include <stddef.h>
#include "insert_sort.h"

insert_sort::insert_sort(void)
{
}

insert_sort::~insert_sort(void)
{
}

int insert_sort::sort(int *input, const int size)
{
	int i;

	if(NULL == input || size < 0)
	{
		return -1;
	}

	for(i = 1 ; i < size ; ++i)
	{
		int key = input[i];
		int j = i-1;
		while(j>=0 && input[j]>key)
		{
			input[j+1] = input[j];
			--j;
		}
		input[j+1]=key;
	}

	return 0;
}


int insert_sort::sort_rev(int *input, int size)
{
	int i;

	if(NULL == input || size < 0)
	{
		return -1;
	}

	for(i = 1; i < size ; ++i)
	{
		int key = input[i];
		int j = i-1;

		while(j>=0 && input[j] < key)
		{
			input[j+1] = input[j];
			--j;
		}

		input[j+1] = key;
	}

	return 0;
}

