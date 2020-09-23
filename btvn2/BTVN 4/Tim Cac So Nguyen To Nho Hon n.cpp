#include <stdio.h>
int main(){
	int n,i,j;
	printf("n=");
	scanf("%d",&n);
	if(n<2){
		printf("khong co so nguyen to nho hon");
	}else{
	for(i=2;i<n;i++){

		int uoc=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				uoc++;
				break;
			}
		}
		if(uoc==0){
			printf("%d la so nguyen to \n",i);
		}else{
		}
	}
}

}
	
