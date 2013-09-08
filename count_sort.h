#ifndef COUNT_SORT
#define COUNT_SORT

class count_sort
{
 public:
  count_sort();
  ~count_sort();
  void sort(int *input, int *output, const int len);
 
 private:
  int find_max(int *input, const int len);
};

#endif
