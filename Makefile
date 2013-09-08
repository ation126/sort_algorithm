
OBJECT = sort_test
DEPEND = $(OBJECT).o insert_sort.o merge_sort.o bubble_sort.o maxheap_sort.o fast_sort.o count_sort.o

all: $(DEPEND)
	g++ -o $(OBJECT) $^

$(OBJECT).o: $(OBJECT).cpp
	g++ -c $^

insert_sort.o: insert_sort.cpp insert_sort.h
	g++ -c $<

merge_sort.o: merge_sort.cpp merge_sort.h
	g++ -c $<

bubble_sort.o: bubble_sort.cpp bubble_sort.h
	g++ -c $<

maxheap_sort.o: maxheap_sort.cpp maxheap_sort.h
	g++ -c $<

fast_sort.o: fast_sort.cpp fast_sort.h
	g++ -c $<

count_sort.o: count_sort.cpp count_sort.h
	g++ -c $<

clean:
	rm -f *.o $(OBJECT)
