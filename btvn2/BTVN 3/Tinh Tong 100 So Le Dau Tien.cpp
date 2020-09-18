#include <stdio.h>
int main(){
	int n,i=1,S=0;
	n=0;
	while(n<=100){
		S=S+i;
		i+=2;
		n++;
	}
	printf("S=%d",S);
}
