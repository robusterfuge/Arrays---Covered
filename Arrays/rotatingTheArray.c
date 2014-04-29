#include<stdio.h>

void swap(int a[], int ii){
 
   int length = 0;
   //length = sizeof(a) / sizeof(int);
   length = 5;
   printf("%d \n",length);
   
   int low=0;
   int high=length-1;
   int temp,i,j ;
   for(j=1;j<=ii;j++){
   temp = a[0];
   for(i=1;i<=high;i++){
       
       a[i-1] = a[i];
       
   }
   a[high] = temp;
   
   }
   
   int k;
   for(k=0;k<length;k++)
       printf("%d",a[k]);
   
}


void main(){

    int a[] = {1 , 3 , 5 , 6, 9};
    swap(a,3);
 
 
    
}