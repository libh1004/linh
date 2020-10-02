#include <stdio.h>
#include <string.h>
int main(){
	char n[40];
	int i,j;
	printf("nhap chuoi :",n);
	scanf("%s",n);
	char tmp;
	int size = strlen(n);
	for( i=0;i<size-1;i++){
		for( j=0;j<size-1-i;j++){
			if(n[j]>n[j+1]){
				tmp = n[j];
				n[j] = n[j+1];
				n[j+1] = tmp;
			}
		}
	}
	printf("Sau sap xep :%s",n);
	return 0;
}

