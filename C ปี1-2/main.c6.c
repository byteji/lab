#include <stdio.h>
#include <stdlib.h>

int FactorialNonRecursive(int n){
    int fact =1,i;
    int round = 1;
    for(i=n;i>=2;i--){
        fact = fact*i;
        printf("round %d is %d\n",round,fact);
        round++;
    }
    return fact;
}

int main()
{
    int num=10,factorialNumber;
    factorialNumber = FactorialNonRecursive(num);
    printf("Factorial of %d is %d\n",num,factorialNumber);
    return 0;
}
