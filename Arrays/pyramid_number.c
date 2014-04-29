#include <stdio.h>
#include <string.h>

main()
{

int i,j;
int s;
int no_of_rows = 9;
for(i=1,s=1;i<=no_of_rows;i=i+2,s=s+1){
    
    //printf(" %d \n",i);
     int c = (no_of_rows-i)/2;
   // printf("c=%d",c );
    int l;
    for(l=0;l<c;l++)
        printf(" ");
    for(j=1;j<=(i+1)/2;j++){
        
        
      if(j == ((i+1)/2)){
           printf("%d",i);
           continue;
      }
        
    
     
      printf("%d",s+j-1);
    }
    
    
    for(j=(i+1)/2;j>=1;j--){
        
          
      if(j == ((i+1)/2)){
           //printf("%d",i);
           continue;
      }
      
     
      printf("%d",s+j-1);
    }
    
    
    
    printf("\n");
}

}
