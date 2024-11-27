#include<stdio.h>
int main(){
	int n;
	for(int i=100;i<=999;i++){
		if((i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)*(i/10%10)+(i%10)*(i%10)*(i%10)==i){
			printf("%d",i);
		}
	}
	
	return 0;
}
