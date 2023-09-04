#include <stdio.h>
#include <stdlib.h>

void MergeSort(int A[],int left,int right){
    if(left < right){
        int mid = left+(right-left)/2;
        MergeSort(A,left,mid);
        MergeSort(A,mid+1,right);

        Merge(A,left,mid,right);
    }
}

void Merge(int A[], int left, int mid, int right){
    int i, j, k;
    int nB = mid - left + 1;
    int nC =  right - mid;

    int L[nB], R[nC];

    for (i = 0; i < nB; i++){
        L[i] = A[left + i];
    }
    for (j = 0; j < nC; j++){
        R[j] = A[mid + 1+ j];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < nB && j < nC){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nB){
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < nC){
        A[k] = R[j];
        j++;
        k++;
    }
}

void DisplayArray(int A[],int size){
    int i;
    for(i = 0;i < size;i++){
        printf("%d\t",A[i]);
    }
}

int main()
{
    int A[] = {12, 1, 13, 5, 6, 7, 4, 2, 10, 3};
    int A_size = sizeof(A)/sizeof(A[0]);

    printf("Array is \n");
    DisplayArray(A, A_size);

    MergeSort(A, 0, A_size-1);

    printf("\nSorted array by Merge is \n");
    DisplayArray(A, A_size);
    return 0;
}
