#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct myArray
{
    int total_size;
    int used_size;
    int *ptr;

} array;

void createArray(array *a, int tsize, int usize)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;                                  // another method
    // (*a).ptr = (int*)malloc(tsize * sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void show(array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Value of No.(%d) slot is %d \n", i,(a->ptr)[i]);
    }
}

void setVal(array *a){
   for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the value of No.(%d) slot \n", i);
        scanf("%d",&(a->ptr)[i]);
    }
}

int main()
{
    array a;
    createArray(&a, 20, 10);
    printf("......We are Running setVal now......\n\n");
    setVal(&a);
    
    printf("......We are Running show now......\n\n");
    show(&a);
    
    return 0;
}