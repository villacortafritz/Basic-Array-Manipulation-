#include <stdio.h>
#include <stdlib.h>
#include "minmax.h"

//helper functions
void sorter(MinMax m){
	int i, j, position=0, temp=0;
	for(i=0; i<m->count-1; i++){
		position=i;
		for(j=i+1;j<m->count; j++){
			if(m->data[position]>m->data[j]){
				position=j;
			}
		}
		if(position!=i){
			temp=m->data[i];
			m->data[i]=m->data[position];
			m->data[position]=temp;
		}
	}
}
void shiftLeft(MinMax m){
	int i;
	for(i=0; i<m->count; i++){
		m->data[i] = m->data[i+1];
	}
}
//helper functions end here


MinMax newMinMax(){
	MinMax l;
	l = (MinMax)malloc(sizeof(struct list));
	l->data = (listItem*)malloc(sizeof(listItem)*DEFAULT);
	l->size = DEFAULT;
	l->count = 0;
	return l;
}
void destroy(MinMax *m){
	free((*m)->data);
	free(*m);
	*m = NULL;
}
void add(MinMax m,int x){
	if (m->count < m->size) {
		m->data[m->count++] = x;
	}
	sorter(m);
}
void display(MinMax m){
	int i;
	printf("[");
	for(i=0; i<m->count; i++){
		printf("%d ", m->data[i]);
	}
	printf("]");
}
int findMin(MinMax m){
	return m->data[0];
}
int findMax(MinMax m){
	return m->data[m->count-1];
} 
void deleteMin(MinMax m){
	shiftLeft(m);
	m->count--;
}
void deleteMax(MinMax m){
	m->count--;
}
int isEmpty(MinMax m){
	int i, flag = 0;
	for(i=0; i<m->count; i++){
		if(m->data[i]!=0){
			flag=1;
			break;
		}
	}
	return flag;
}
void clear(MinMax m){
	m->count = 0;
}
