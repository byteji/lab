#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinaryRecursive(int n){

    if(n==1){
        return 1;
    }
    else return BinaryRecursive(floor(n/2))+1;
}


int main()
{
    int numdigit,num=50;
    numdigit = BinaryRecursive(num);
    printf("Number of binary digit of %d is %d\n",num,numdigit);

    return 0;
}
