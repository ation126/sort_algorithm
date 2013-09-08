#include "fast_sort.h"
#include <iostream>

using namespace std;

int fast_sort::partition(int *input, const int p, const int r)
{
	int key = input[r];
	int i = p-1;
	int j = p;
	int tem = 0;

	for(; j < r ; ++j)
	{
		if( input[j] < key )
		{
			++i;
			tem = input[i];
			input[i] = input[j];
			input[j] = tem;
		}
	}

	tem = input[i+1];
	input[i+1] = key;
	input[r] = tem;

	return i+1;
}


void fast_sort::sort(int *input, const int p, const int r)
{
	if(p<r)
	{
		int q = partition(input, p, r);

		sort(input, p, q-1);
		sort(input, q+1, r);

	}

	return;
}

