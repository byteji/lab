#include <stdio.h>
#include <stdlib.h>
int n = 8;

int Maxelement(int A[],int n)
{
    int i,Max=A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]>Max)
        {
            Max = A[i];
        }
    }
    return Max;
}

void DisplayArray(int A[],int n)
{
    int i;
    printf("Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void GetArray(int A[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        A[i]=(i+1)*3;
    }
}
void GetRandom(int A[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        A[i]= 20+rand()%(100-10);
    }
}



int UniqueElement(int A[],int n)
{
    int i,j;
    for(i=0; i<(n-2); i++)
        for(j=i+1; j<(n-1); j++)
            if(A[i]==A[j])
                return 0;
    return 1;
}




int main()
{
    int isUnique;
    int A[n];
    int B[n];
    int C[]= {1,2,3,4,5,6,7,8};
    int D[] = {1,2,3,4,5,6,1,8};

    GetArray(A,n);
    GetRandom(B,n);
    DisplayArray(A,n);
    DisplayArray(B,n);
    DisplayArray(C,n);

    printf("\nMax of Array A is %d\n",Maxelement(A,n));
    printf("Max of Array B is %d\n",Maxelement(B,n));


    isUnique = UniqueElement(C,n);
    if(isUnique)
    {
        printf("\nThis Array is not unique");
    }
    else
    {
        printf("\nThis Array is unique");
    }

    isUnique = UniqueElement(D,n);
    if(isUnique)
    {
        printf("\nThis Array is not unique");
    }
    else
    {
        printf("\nThis Array is unique");
    }




    return 0;
}
