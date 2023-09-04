#include <stdio.h>
#include <stdlib.h>

int MaxElement(int A[],int n)
{

int maxval, i;
maxval = A[0];
for (i=1; i<n; i++)
    if (A[i]>maxval)
        maxval = A[i];
    return maxval;
}
void GetArray(int A[] , int n)
{
   // int i;
    //for(i=0; i<n; i++)
      //  A[i]=(i+1)*2;

        int i;
       // time_t t;
       // srand((unsigned)time(&t));
        for(i=0; i<n; i++)
            A[i]=rand()%50;

}
void DisplayArry(int A[],int n)
{
    int i;

        printf("Array: ");
        for(i=0; i<n; i++)
        printf("%d", A[i]);

}
int main()
{
    int MaxValue , n=8;
    int arrNum[8];
    GetArray(arrNum,n);
    DisplayArry(arrNum,n);
    printf("\nMaximum value: %d\n",MaxValue);

    return 0;
}
