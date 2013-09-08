#include "count_sort.h"
#include <stdlib.h>

count_sort::count_sort()
{
}
count_sort::~count_sort()
{
}

int count_sort::find_max(int *input, const int len)
{
	int max = 0;
	int i;

	for(i = 0 ; i < len ; ++i)
		if( input[i]>max )
			max = input[i];

	return max;
}

void count_sort::sort(int *input, int *output, const int len)
{
	int max = find_max(input, len);
	int i;

	int *tem = (int *)malloc(sizeof(int) * (max + 1));
	for(i = 0; i < max+1 ; ++i)
		tem[i] = 0;

	for(i = 0 ; i < len ; ++i)
		tem[input[i]]++;

	for(i = 1 ; i < max+1 ; ++i)
		tem[i] += tem[i-1];

	for(i = 0 ; i < len ; ++i)
	{
		output[ tem[input[i]] - 1 ] = input[i];
		tem[input[i]]--;
	}
	return;
}
