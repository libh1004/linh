#include <stdio.h>
int main(){
	int n,i;
	float S=0;
	scanf("%d",&n);
  //
  for(i=1;i<=n;i++){
  	S=S+1/i;
  	printf("S=%d \n",1/i);
  }
  	printf("S=%f \n",S);
	
}
	
