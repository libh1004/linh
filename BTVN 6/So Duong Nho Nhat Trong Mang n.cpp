#include <stdio.h>
int main(){
	int n,min;
	printf("n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri :");
		scanf("%d",&a[i]);
	}
	min=a[0];
	printf("a[0]=%d",a[0]);
	for(int i=0;i<n;i++){
		if(a[i]>0){
			printf("%d la so duong",a[i]);
		}
	}
		min=a[0];
	for(int i=0;i>n;i++){
		if(min>a[i] && a[i]>0){
			min=a[i];
		}
	}
		
	
		printf("min=%d",min);
}

