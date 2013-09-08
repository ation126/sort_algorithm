#ifndef MERGE_SORT
#define MERGE_SORT

class merge_sort
{
 private:
  void merge(int *a, const int p, const int q, const int r);
  void merge_pp(int *a, const int p, const int q, const int r);
 public:
  merge_sort(void);
  ~merge_sort(void);
  void sort(int *a, const int p, const int r);
};

#endif
