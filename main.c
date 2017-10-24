#include <stdio.h>
#include <stdlib.h>
#include "minmax.h"


int main(int argc, char *argv[]) {
	
	MinMax m, n;
	m = newMinMax(DEFAULT);
	n = newMinMax(DEFAULT);
	
	printf("Array m:\t\t");
	add(m,3);
	add(m,17);
	add(m,108);
	add(m,34);
	add(m,9);
	display(m);
	
	printf("\nSmallest Element:\t%d", findMin(m));
	printf("\nLargest Element:\t%d", findMax(m));
	
	printf("\nDelete Min:\t\t");
	deleteMin(m);
	display(m);
	
	printf("\nDelete Max:\t\t");
	deleteMax(m);
	display(m);
	
	printf("\nIs set m empty?\t");
	if(isEmpty(m)==1){
		printf("\tNO");
	}
	else{
		printf("\tYES");
	}
	
	printf("\nIs set n empty?\t");
	if(isEmpty(n)==1){
		printf("\tNO");
	}
	else{
		printf("\tYES");
	}
	
	printf("\nClear m:\t\t");
	clear(m);
	display(m);
	
	destroy(&m);
	destroy(&n);
		
	return 0;
}
