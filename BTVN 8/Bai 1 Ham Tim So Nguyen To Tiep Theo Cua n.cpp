#include <stdio.h>
int CheckSNT(int n){
	if(n<3) return 0;
	int uoc=0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			uoc++;
			break;
		}
	}	
	if(uoc==0){
		return 1;
	}
	return 0;
}
int main(){
	for(int j=8;j<100;j++){
		int isSNT = CheckSNT(j);
		if(isSNT==1) {
			printf("%d", j);
			break;
		}
		
	}
}

