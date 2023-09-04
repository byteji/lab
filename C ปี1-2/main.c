#include <stdio.h>
#include <stdlib.h>
#define MAX 8

void Quicksort(int A[] ,int l ,int r){
    if(l < r){
        traverse(A);
        int s = HoarePartition(A,l,r);
        Quicksort(A,l,s-1);
        Quicksort(A,s+1,r);

    }
}
int traverse(int A[]){
    int i;
    for(i = 0 ; i < MAX;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int HoarePartition(int A[],int l,int r){
    int p = A[l];
    int i = l;
    int j = r + 1;
    int temp;
    do{
        do{
            i = i+1;
        }while(A[i] < p);

        do{
            j = j-1;
        }while(A[j] > p);

        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    traverse(A);
    }while(i < j);
//swap
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
    traverse(A);
//swap A[l] A[j]
    temp = A[l];
    A[l] = A[j];
    A[j] = temp;
    traverse(A);

    return j;
}

int main()
{
    int A[MAX] = { 5,3,1,9,8,2,4,7};
    Quicksort(A,0,MAX-1);


    return 0;
}
