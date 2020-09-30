#include <stdio.h>
#include <math.h>
int Dien_Tich(int a,int b,int c){
	int p;
	int S;
	if(a+b>c && a+c>b && c+b>a){
		p=a+b+c;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
	}
	return p,S;
}

int main(){
	int a=4,b=5,c=6;
	float S_tinhS=Dien_Tich(a,b,c);
	printf("S=%f",S_tinhS);
}
	
