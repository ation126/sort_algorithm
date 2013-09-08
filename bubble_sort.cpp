#include "stddef.h"
#include "bubble_sort.h"

bubble_sort::bubble_sort(void)
{
}

bubble_sort::~bubble_sort(void)
{
}

int bubble_sort::sort(int *input, const int len)
{
	int i,j;
	int tem;

	if(NULL == input || len < 0)
	{
		return -1;
	}

	for(i=0 ; i<len ; ++i)
	{
		for(j = len-1 ; j>i ; --j)
		{
			if(input[j]<input[j-1])
			{
				tem = input[j];
				input[j] = input[j-1];
				input[j-1] = tem;
			}
		}
	}
	return 0;
}
