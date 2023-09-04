#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int arr[], int n)
{
    int i, j,t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]  = t;
            }
        }

    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {99,18,19,94,41,3,28};
    printArray(arr,7);
    bubbleSort(arr,7);
    printf("Sort by BubbleSort\n");
    printArray(arr, 7);
    return 0;
}





