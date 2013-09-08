#include <iostream>
#include "insert_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"
#include "maxheap_sort.h"
#include "fast_sort.h"
#include "count_sort.h"

using namespace std;

#define INPUT_LEN 20

int main(void)
{
	int input[INPUT_LEN] = {10,9,8,7,6,5,4,3,3,6,4,8,5,6,4,5,7,2,1,11};
	int output[INPUT_LEN];
	int tmp[INPUT_LEN];

	/** Insert sort */
	insert_sort insert_sorter;

	memmove( (void*)tmp, (void*)input, sizeof(input)); 
	insert_sorter.sort(input, INPUT_LEN);

	cout << "** Insert Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << tmp[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl << endl;
	
	memmove( (void*)input, (void*)tmp, sizeof(input)); 

	/** bubble sort */
	bubble_sort bubble_sorter;

	memmove( (void*)tmp, (void*)input, sizeof(input)); 
	bubble_sorter.sort(input, INPUT_LEN);

	cout << "** Bubble Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << tmp[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl << endl;
	
	memmove( (void*)input, (void*)tmp, sizeof(input)); 

	/** Count sort */
	count_sort count_sorter;

	count_sorter.sort(input, output, INPUT_LEN);

	cout << "** Count Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << output[i] <<  " ";
	}
	cout << endl << endl;
	
	/** fast sort */
	fast_sort fast_sorter;

	memmove( (void*)tmp, (void*)input, sizeof(input)); 
	fast_sorter.sort(input, 0, INPUT_LEN - 1);

	cout << "** Fast Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << tmp[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl << endl;
	
	memmove( (void*)input, (void*)tmp, sizeof(input)); 

	/** maxheap sort */
	maxheap_sort maxheap_sorter;

	memmove( (void*)tmp, (void*)input, sizeof(input)); 
	maxheap_sorter.sort(input, INPUT_LEN);

	cout << "** Maxheap Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << tmp[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl << endl;
	
	memmove( (void*)input, (void*)tmp, sizeof(input)); 

	/** merge sort */
	merge_sort merge_sorter;

	memmove( (void*)tmp, (void*)input, sizeof(input)); 
	merge_sorter.sort(input, 0, INPUT_LEN-1);

	cout << "** Merge Sort **" << endl;
	cout << "Input:	" << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << tmp[i] <<  " ";
	}
	cout << endl;

	cout << "Output: " << endl;
	for(int i = 0; i < INPUT_LEN ; ++i)
	{
		cout << input[i] <<  " ";
	}
	cout << endl << endl;
	
	memmove( (void*)input, (void*)tmp, sizeof(input)); 
/**
	merge_sort merge_sorter;
	bubble_sort bubble_sorter;
	maxheap_sort maxheap_sorter;
	fast_sort fast_sorter;
	count_sort count_sorter;

	//  sorter.sort(input,10);
	// sorter.sort_rev(input,10);

	//  sorter_2.sort(input,0,INPUT_LEN-1);

	//sorter_3.sort(input,INPUT_LEN);
	//maxheap_sorter.sort(input,INPUT_LEN);

	// fast_sorter.sort(input,0,INPUT_LEN-1);

	for(int i = 0; i < INPUT_LEN ; ++i)
		cout << input[i] <<  "  ";
	cout << endl;

	count_sorter.sort(input, output, INPUT_LEN);

	for(int i = 0; i < INPUT_LEN ; ++i)
		cout << input[i] <<  "  ";
	cout << endl;

	for(int i = 0; i < INPUT_LEN ; ++i)
		cout << output[i] << "  ";

	cout << endl;
*/
	return 0;
}
