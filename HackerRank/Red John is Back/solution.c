#include <stdio.h>

int prime(int n){

 int  i, flag=0;
  
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      return 1;
  else
      return 0;
}

int cal(int nn){
	int n = nn;
	int set = 0;
	int stale = 0;
	int count = 1;
	if( (n%2) == 0 ){
		set = n/4;
		count++;
	} else {
		set = n/4;
	}
	
	int i;
	int cal;
	//printf("%d ",set);
	for(i=1;i<=set;i++){
		
		cal = n-(i*4);
		if( cal > 0){
		    //printf("Stale ones = %d \n",cal);
		    count = count+cal+1;
		}
		
	}
	
	//printf("Permutations = %d ",count);
    int ans=0;
    int j;
    for(j=1;j<count;j++){
       
         if(prime(j)){
             ans++;
         }
    }    
	return ans;
}

int main(void) {

    int n;
    
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    
    } 
    int r = 0;
    int j;
    for(j=0;j<n;j++){
       
       printf("%d\n",cal(a[j]));
      
    }
	
}
