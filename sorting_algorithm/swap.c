#include "selections.h"

void swap(int *e1, int *e2)
{
	int temp;

	temp = *e1;
	*e1 = *e2;
	*e2 = temp; 
	
	//return &temp;
}