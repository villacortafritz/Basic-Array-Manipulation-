#ifndef STAT_C
#define STAT_C
#define DEFAULT 10

typedef int listItem;
struct list{
	listItem *data; // array of integers
	listItem count; // number of elements
	listItem size;  // size of the array	
};
typedef struct list *MinMax;

MinMax newMinMax();
void destroy(MinMax *m);
void add(MinMax m,int x); //adds the integer x in the collection
void display(MinMax m);
int findMin(MinMax m); //returns the smallest integer in the collection
int findMax(MinMax m); //returns the largest integer in the collection
void deleteMin(MinMax m); //removes the smallest integer in the collection
void deleteMax(MinMax m); //removes the largest integer in the collection
int isEmpty(MinMax m); //returns 1 if the collection is empty, returns 0 otherwise
void clear(MinMax m);//makes the collection empty

#endif
