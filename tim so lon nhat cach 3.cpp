#include <stdio.h>
int main(){
	int a,b,c,m;
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	m=a;
	if(b>m){
		m=b;
	}
	if(c>m){
		m=c;
	}
	printf("max=%d",m);
	}
