#include <stdio.h>
int main(){
	int n,count=0,S=0;
	float TBC;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri :");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			//
			count++;
			S=S+arr[i];
		
		}
		
	}
	printf("S=%d\n",S);
	printf("count=%d\n",count);
	TBC=float(S)/float(count);
	printf("TBC=%f",TBC);
}
