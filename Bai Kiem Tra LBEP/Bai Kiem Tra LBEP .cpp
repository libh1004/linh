#include <stdio.h>
#include <math.h>
double Chu_Vi(double a,double b,double c){
	double P;
	if(a>0 && b>0 && c>0){
		printf("du lieu hop le\n");
	}else{
		printf("du lieu khong hop le\n");
	}
	if(a+b>c && a+c>b && b+c>a){
		P=a+b+c;
	}
	return P;
}
double Dien_Tich(double a,double b,double c){
	double P2,S;
		if(a>0 && b>0 && c>0){
			printf("du lieu hop le\n");
		}else{
			printf("du lieu khong hop le\n");
		}
		if(a+b>c && a+c>b && b+c>a){
			P2=(a+b+c)/2;
			S=sqrt(P2*(P2-a)*(P2-b)*(P2-c));
	}
	return S;
}
int main(){
	double a,b,c;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	double tinhP = Chu_Vi(a,b,c);
	double tinhS = Dien_Tich(a,b,c);
	printf("Chu vi tam giac = %lf\n",tinhP);
	printf("Dien tich tam giac = %lf\n",tinhS);
}
