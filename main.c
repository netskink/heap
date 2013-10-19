#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"



/*
 * In this code, I'm using Cormen's algorithm
 * as a guide.  I'm doing two tricks to keep it simple.
 * One, he uses arrays which index at 1 instead of zero.
 * He also uses a concept of length of the array
 * and size of the usable array.  In other words,
 * he could create an array of size 100, but only
 * use 10 values in the array.
 * ie.:
 * size = heap size. 
 * len = array dimension.
 *
 * Two, I'm keeping his idea of having an array using
 * index of 1 as first position and then using the zeroth
 * element to store the length and having length and size
 * equal irnoring the first index.
 */ 


int parent(int i) {
	return (i/2);
}

int left(int i) {
	return (2*i);
}

int right(int i) {
	return ((2*i) + 1);
}


// Print a new line after each row of the 
// heap.
void breadth_dump(int *pHeap) {
	int i;
	int SIZE = pHeap[0];

	for(i=1;i<=SIZE;i++) {
//		printf("log(%d) = %f \t fmod(x,1.0)=%f\n",i,log2(i),fmod(log2(i),1));
		printf("%d  ",pHeap[i]);
		if (fmod(log2(i+1),1.0f)==0.0f) {
			printf("\n");
		}
	}
	printf("\n");
}

int * max_heapify(int *pHeap, int i) {
	int iLeft;
	int iRight;
	int iLargest;
	int iTemp;
	int SIZE = pHeap[0];

	iLeft = left(i);
	iRight = right(i);

	if ( (iLeft <= SIZE) && (pHeap[iLeft] > pHeap[i]) ) {
		iLargest = iLeft;
	} else {
		iLargest = i;
	}

	if ( (iRight <= SIZE) && (pHeap[iRight] > pHeap[iLargest]) ) {
		iLargest = iRight;
	}

	if (iLargest != i) {
		iTemp = pHeap[i];
		pHeap[i] = pHeap[iLargest];
		pHeap[iLargest] = iTemp;
		pHeap = max_heapify(pHeap, iLargest);

	}
	return pHeap;
}

int * build_max_heap(int *pHeap) {
	int i;
	int SIZE = pHeap[0];

	for(i=(SIZE/2); i>0; i--) {
		pHeap = max_heapify(pHeap,i);
	}
	return pHeap;
}

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



int main(int argc, char *argv[]) {

	int iRC;

	iRC=EXIT_SUCCESS;

	if (argc != 1) {
		fprintf(stderr, "Usage: %s \n", argv[0]);
		iRC=EXIT_FAILURE;
		exit(iRC);
	}

	test1();
	test2();
	test3();

	exit(iRC);

}





