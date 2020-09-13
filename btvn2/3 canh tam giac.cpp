#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,p;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");			
	scanf("%d",&c);
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				p=a+b+c;
				printf("p= %d \n",p);
				printf("p2 = %f \n",sqrt(p*(p-a)*(p-b)*(p-c)));
							}else{
							}
		}
		
	}
	
}
