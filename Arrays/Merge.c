#include <stdio.h>
#include <string.h>

int a[]={0,1,3,'\0','\0','\0'};
void movetoEnd(int a[]){
    
    int j=5,i ;
    for( i=5;i>=0;i--){
        
        if(a[i] != '\0'){
            
            a[j] = a[i];
            j--;
        }
    }  
}

main()
{
movetoEnd(a);
int ii;
    for(ii=0;ii<=5;ii++){
        
        printf("%d\n",a[ii]);
    }
int n[] = {1,1,1};


int i =0;
int k=0;
int j = 3;

while( k < 6 && i<3 ){
    
    if( n[i] < a[j] ){
        a[k++] = n[i++];
        
    } else {
        a[k++] = a[j++];
    }
    
}

while (i<3){
    
    a[6-3+i] = n[i];
    i++;
}


printf("i%d j%d k%d ",i,j,k);

 for(ii=0;ii<=5;ii++){
        
        printf("%d ",a[ii]);
    }


}
