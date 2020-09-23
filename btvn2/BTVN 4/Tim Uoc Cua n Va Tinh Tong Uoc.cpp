#include <stdio.h>
int main(){
	int n,i,S=0;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("cac uoc la %d \n",i);
	    	S=S+i;
	    }
	}
	    	printf("tong cac uoc la %d \n",S);
		}
		

