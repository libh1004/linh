int Chu_Vi (int a,int b,int c){
	int C;
	if(a+b>c && a+c>b && b+c>a){
		C=a+b+c;
	}
	return C;
}
#include <stdio.h>
int main(){
	int a=3,b=4,c=5;
	int C_ChuVi=Chu_Vi(a,b,c);
	printf("C=%d",C_ChuVi);
}


