#include<stdio.h>

void swap(int a[]){
 
   int length = 0;
   length = sizeof(a) / sizeof(int);
   //length = 5;
   printf("%d \n",length);
   
   int low=0;
   int high=length-1;
   int temp ;
   while(low<high){
       
       temp = a[low];
       a[low] = a[high];
       a[high] = temp;
       
       high--;
       low++;
       
   }
   
   int k;
   for(k=0;k<length;k++)
       printf("%d",a[k]);
   
}


void main(){

    int a[] = {1 , 3 , 5 , 6, 9};
    swap(a);
 
 
    
}