#ifndef FAST_SORT
#define FAST_SORT

class fast_sort
{
 public:
  void sort(int *input, const int p, const int r);
 private:
  int partition(int *input, const int p, const int r);
};

#endif
