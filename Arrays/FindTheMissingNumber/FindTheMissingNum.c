#include<stdio.h>
#include<stdlib.h>
#define debug 1

int FindTheMissingNumber(int a[]){

    if(debug)printf(" In the beginning of the function FindTheMissingNumber\n");

    int iterator = 0;
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;
    int totalSum = (n*(n+1))/2;
    for( ; iterator<n ; iterator++){
       
        sum = sum + a[iterator];
    }
    return (sum-totalSum);

}

int main()
{
    int a[] = {1,2,4,5,6};
    int miss = FindTheMissingNumber(a);
    printf("%d", miss);
    getchar();
}
