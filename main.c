#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "heap.h"
#include "unit.h"
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



void dump_array(int *p, int len) {
	int i;
	for (i=0;i<len;i++) {
		printf("%d: %d\n",i,p[i]);
	}
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
	test4();
	test5();

	
	exit(iRC);

}





