#ifndef MAXHEAP_SORT
#define MAXHEAP_SORT

class maxheap_sort
{
 public:
  maxheap_sort();
  ~maxheap_sort();
  
  int left(const int i);
  int right(const int i);

  void max_heapify(int *input, const int i, const int heap_len);
  void build_max_heap(int *input, const int len);
  void sort(int *input, const int len);

};

#endif
