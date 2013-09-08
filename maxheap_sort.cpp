#include "maxheap_sort.h"
#include <iostream>

using namespace std;

maxheap_sort::maxheap_sort()
{
}

maxheap_sort::~maxheap_sort()
{
}

int maxheap_sort::left(const int i)
{
	return (2*i+1);
}


int maxheap_sort::right(const int i)
{
	return (2*i+2);
}

void maxheap_sort::max_heapify(int *input, const int i, const int heap_len)
{
	int l = left(i);
	int r = right(i);
	int largest = i;
	int tem = 0;

	if( l < heap_len && input[l]>input[largest] )
	{
		largest = l;
	}

	if( r < heap_len && input[r]>input[largest] )
	{
		largest = r;
	}

	if( largest != i )
	{
		tem = input[largest];
		input[largest] = input[i];
		input[i] = tem;
		max_heapify(input,largest,heap_len);
	}

	return;
}


void maxheap_sort::build_max_heap(int *input, const int len)
{
	int i = len/2-1;

	for(; i >= 0 ; --i)
	{
		max_heapify(input, i , len);
	}

	return;
}


void maxheap_sort::sort(int *input, const int len)
{
	int tem = 0;
	int heap_len = len;

	build_max_heap(input,len);

	while( heap_len > 0)
	{
		tem = input[0];
		input[0] = input[heap_len-1];
		input[heap_len-1] = tem;

		--heap_len;
		max_heapify(input, 0, heap_len);
	}

	return;
}
