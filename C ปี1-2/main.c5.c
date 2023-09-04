#include <stdio.h>
#include <stdlib.h>
int fact=1;
int factorialRecursive(int n){

    if(n==0)
        return 1;
    else{
        fact = fact*n;
        printf("%d ",fact);
        return factorialRecursive(n-1)*n;
    }
}

int main()
{
    int number=5,fact;
    fact = factorialRecursive(number);
    printf("\nfactorial of %d is %d\n",number,fact);

    return 0;
}
