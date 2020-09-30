int BCNN(int a,int b){
	int bcnn;
	int ucln;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			ucln=i;
			bcnn=(a*b)/ucln;
		}
	}
	return bcnn;
}
#include <stdio.h>
int main(){
	int a=4,b=6;
	int bcnn = BCNN(a,b);
	printf("BCNN = %d",bcnn);
}

