#include <stdio.h>

int main(void) {
	int t,n,x;
	while(t--){
	    scanf("%d %d",&n,&x);
	    int ar1[n],ar2[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&ar1[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&ar2[i]);
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(ar1[i]>=x){
	            sum+=ar2[i];
	        }
	    }
	    
	    printf("%d\n",sum);
	}
	return 0;
}

