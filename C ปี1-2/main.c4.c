#include <stdio.h>
#include <stdlib.h>

int  FibonacciRecursive(int n){
    if (n<=1){
        return n;
    }else{
        return FibonacciRecursive(n-1)+FibonacciRecursive(n-2);
    }
}

int main()
{
    int num=10,fibnumber;
    int i;

    printf("Fibonacci sequence of %d is\n",num);
    for(i=1;i<=num;i++){
        fibnumber=FibonacciRecursive(i);
        printf(" %d",fibnumber);
    }
    printf("\n");
    return 0;
}

