#include <stdio.h>
#include <string.h>

main()
{
    int i,j,l,c,no_of_rows;
    printf(" Enter the Number of rows :\n\n\n");
    scanf("%d",&no_of_rows);
    for(i=1;i<=no_of_rows*2;i=i+2){
    
        c = (no_of_rows*2-i)/2;
        // The below for loop is used to display the number of spaces before
        // the stars
        for(l=0;l<c;l++)
            printf(" ");
            
            
        for(j=1;j<=i;j++){
            
            if(j%2 == 0){
                printf("A");
                continue;
            }
            printf("*");
        }
           
      
        printf("\n");
    }
}