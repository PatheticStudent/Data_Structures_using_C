#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sortedinsert(int arr[], int size, int insert, int tsize, int index)
{
    if (size >= tsize)
    {
        return -1;
    }
   else if(size < tsize)
    {
        for (int i = size-1; i >= index; i--)
        {
            arr[i + 1] = arr[i];   
            
        }
         arr[index] = insert;
          return 1;
    
    }
    
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 7, 8, 9};
  
    int size = 8, insert = 6, tsize = 100, index = 5;
    printf("Before insertion \n");
      display(arr, size);
      printf("\n");
   
 
int result =  sortedinsert(arr, size, insert, tsize, index);
if(result == -1){
    printf("Cannot Insert Array Because space is full \n Insertion error!!");
}
else {
        size+=1;
   printf("Insertion successful !! \n \n");
   
      printf("After insertion \n");
    display(arr, size);
}


   
    return 0;
}
// arr , size , insert, total size