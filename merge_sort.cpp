#include "merge_sort.h"
#include "stdlib.h"
#include <iostream>
#include <vector>

using namespace std;

merge_sort::merge_sort(void)
{
}
merge_sort::~merge_sort(void)
{
}

void merge_sort::merge(int *a, const int p, const int q, const int r)
{
	int nl = q-p+1;
	int nr = r-q;

	int * left = (int *)malloc(sizeof(int)*(nl+1));
	int * right = (int *)malloc(sizeof(int)*(nr+1));

	int i,j,k;

	for(i = 0; i < nl; ++i)
	{
		left[i] = a[i+p];
	}
	left[nl] = 0x7fffffff;

	for(i = 0; i < nr; ++i)
	{
		right[i] = a[i+q+1];
	}
	right[nr] = 0x7fffffff;

	i = j = k = 0;
	for(k = p ; k <= r ; ++k)
	{
		if(left[i]<right[j])
		{
			a[k] = left[i];
			i++;
		}
		else
		{
			a[k] = right[j];
			j++;
		}
	}
	free(right);
	free(left);

	return ;
}

void merge_sort::sort(int *a, const int p, const int r)
{
	if(p<r)
	{
		int q = (p+r)/2;
		sort(a,p,q);
		sort(a,q+1,r);
		merge_pp(a,p,q,r);
	}

	return ;
}

void merge_sort::merge_pp(int *a, const int p, const int q, const int r)
{
	vector<int> left;
	vector<int> right;
	int i;

	for(i = p ; i <= q ; ++i)
	{
		left.push_back(a[i]);
	}

	for(i = q+1 ; i<=r ; ++i)
	{
		right.push_back(a[i]);
	}

	i = p;

	while( (!left.empty()) && (!right.empty()) )
	{
		if(left.front() < right.front())
		{
			a[i++] = left.front();
			left.erase(left.begin());
		}
		else
		{
			a[i++] = right.front();
			right.erase(right.begin());
		}
	}

	while(!right.empty())
	{
		a[i++] = right.front();
		right.erase(right.begin());
	}

	while(!left.empty())
	{
		a[i++] = left.front();
		left.erase(left.begin());
	}

	return;
}
