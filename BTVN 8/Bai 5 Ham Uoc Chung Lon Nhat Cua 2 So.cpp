int UCLN(int a,int b){
	int ucln;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			ucln=i;
		}
	}
	return ucln;
}
#include <stdio.h>
int main(){
	int a=6,b=12;
	int ucln=UCLN(a,b);
	printf("UCLN = %d",ucln);
}
