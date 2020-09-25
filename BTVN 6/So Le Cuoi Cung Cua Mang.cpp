#include <stdio.h>
int main(){
	int n,i,slc;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri : ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				slc=arr[i];				
			}
	}
	printf("\n%d la so le cuoi trong mang",slc);	
}

