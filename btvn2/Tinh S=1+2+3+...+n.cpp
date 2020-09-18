#include <stdio.h>
int main(){
	int i,n,S=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		S=S+i;
	}
	printf("S=%d",S);
}
