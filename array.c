#include <stdio.h>
#include <stdlib.h>

 


int * create_array(int count)
{
int i=0;

int * new_array = (int *)malloc(sizeof(int)*count);

for(i=0; i<count;i++)
{
new_array[i] = i;

}
return new_array;
}

	
