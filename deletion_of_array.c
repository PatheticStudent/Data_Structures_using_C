#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sortedinsert(int arr[], int size, int tsize, int index)
{
    if (index >= tsize)
    {
        return -1;
    }
   else if(size < tsize)
    {
        for (int i = index-1; i <= size; i++)
        {
            arr[i] = arr[i+1];   
            
        }
          return 1;
    
    }
    
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 7, 8, 9};
  
    int size = 8, tsize = 100, index = 5;
    printf("Before Deletion \n");
      display(arr, size);
      printf("\n");
   
 
int result =  sortedinsert(arr, size, tsize, index);
if(result == -1){
    printf("Cannot Insert Array Because space is full \n Deletion error!!");
}
else {
        size-=1;
   printf("Deletion successful !! \n \n");
   
      printf("After Deletion \n");
    display(arr, size);
}


   
    return 0;
}
// arr , s, total size