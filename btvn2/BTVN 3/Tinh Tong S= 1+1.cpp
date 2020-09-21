#include <stdio.h>
int main(){
	float n=0,i=1;
	float S=0;
	scanf("%f",&n);
	for(i=1;i<=n;i++){
	S=S+=1/i;
    }
    printf("S=%f",S);
}
