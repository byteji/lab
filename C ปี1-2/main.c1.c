#include <stdio.h>
#include <stdlib.h>

int FibonacciNonRecursive(int n){
    int x0=0,x1=1,x2;
    int i;
    printf("0 1 ");
    for(i=2;i<=n;i++){
        x2=x0+x1;
        printf("%d ",x2);
        x0=x1;
        x1=x2;
    }
    return x2;
}

int main()
{
    int num,fibnumber;
    printf("Input your number : ");
    scanf("%d",&num);

    fibnumber = FibonacciNonRecursive(num);
    printf("\nFibonacci number of %d = %d\n",num,fibnumber);

    return 0;
}
