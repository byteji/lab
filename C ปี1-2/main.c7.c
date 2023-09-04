#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int A[],int n){
    int i ,j ,min;
    for(i=0;i<=n-2;i++){
        min=i;
        for(j=i+1;j<=n-1;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }int temp = A[min];
            A[min]= A[i];
            A[i]  = temp;
    }
}

void printfArray(int A[],int n){
    int i;
    for(i=0; i<n; i++){
            printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {4,5,8,1,9,4,3,8};
    printfArray(A,8);
    SelectionSort(A,8);
    printf("Sort by SelectionSort\n");
    printfArray(A,8);
    return 0;
}
