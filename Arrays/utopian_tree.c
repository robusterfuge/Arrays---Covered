#include<stdio.h>

int findGrowth(int n){
    
    int i,ret = 1;
    
    for(i = 1; i<=n; i++){
        
        if(i%2 == 0){
             
            ret = ret+1;
        } else{
            
            ret = 2*ret;
            //printf("%d",i);
        }
            
            
        
    }
    
    return ret;
}

void main(){
    
    int n,a[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }
    int r = 0;
    for(i=0;i<n;i++){
    r= findGrowth(a[i]);
    printf("%d\n",r);
    r = 0;
    }
}





