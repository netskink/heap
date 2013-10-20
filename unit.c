#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "unit.h"
#include "heap.h"
#include "main.h"




int test1() {

	int pHeap[3+1] = {3,1,2,3};

	printf("-Before v -v-v-v-\n");
	breadth_dump(pHeap);

	printf("-----------------\n");
	build_max_heap(pHeap);
	
	breadth_dump(pHeap);
	printf("-After ^ -^-^-^-^\n");
	return 0;

}
int test2() {

	int pHeap[5+1] = {5,3,5,1,0,2};

	printf("-Before v -v-v-v-\n");
	breadth_dump(pHeap);

	printf("-----------------\n");
	build_max_heap(pHeap);
	
	breadth_dump(pHeap);
	printf("-After ^ -^-^-^-^\n");
	return 0;

}

int test3() {

	int pHeap[7+1] = {7,6,3,5,4,1,0,2};

	printf("-Before v -v-v-v-\n");
	breadth_dump(pHeap);

	printf("-----------------\n");
	build_max_heap(pHeap);
	
	breadth_dump(pHeap);
	printf("-After ^ -^-^-^-^\n");
	return 0;

}

int test4() {

	int pHeap[7+1] = {7,6,3,5,4,1,0,2};

	printf("-Before v -v-v-v-\n");
	breadth_dump(pHeap);

	printf("-----------------\n");
	heap_sort(pHeap);
	
	breadth_dump(pHeap);
	printf("-After ^ -^-^-^-^\n");
	dump_array(pHeap,8);
	return 0;


}

int test5() {

	int pHeap[7+1] = {7,6,3,5,4,1,0,2};

	printf("-Before v -v-v-v-\n");
	breadth_dump(pHeap);

	printf("-----------------\n");
	build_min_heap(pHeap);
	
	breadth_dump(pHeap);
	printf("-After ^ -^-^-^-^\n");
	return 0;


}







