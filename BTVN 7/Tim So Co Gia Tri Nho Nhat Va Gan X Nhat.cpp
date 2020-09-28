#include <stdio.h>
int main(){
	int n,i;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	int x;
	printf("nhap so can tim kiem :");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri :");
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n-1;i++){// Sap xep cac phan tu theo thu tu
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int tmp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
		}
	}
	}
	
	for(int i=n-1;i>=0;i--){
		if(arr[i]<x){
	
			printf("da tim thay :%d",arr[i]);
			break;
		}
	}

}
	
	
	
	
