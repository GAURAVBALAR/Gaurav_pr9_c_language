// Write a Program to write even & odd numbers from 50 to 70 into two separate files.
#include<stdio.h>
int main(){
	FILE *E;
	FILE *F;
	int even[100];
	int odd[100];
	int i;
	E = fopen("even.txt","w");
	F = fopen("odd.txt","w");
	if(E == NULL){
		printf("File is Unable to Open....");
	}else{
		printf("EVEN File opened...\n");
	}
	if(F == NULL){
		printf("File is Unable to Open....");
	}else{
		printf("ODD File opened...");
	}
	for(i=50;i<=70;i++){
			if(i%2==0){
		fprintf(E,"%d\n",i);
	}
    else{
    	fprintf(F,"%d\n",i);
	}
        
		}
	
	return 0;
}
