#include<stdio.h>
int main(){
	char chuoi[6]="hello"; 
	int length=strlen(chuoi);
	for(int i=0;i<length/2;i++){
		char temp=chuoi[length-i-1];
		chuoi[length-i-1]=chuoi[i];
		chuoi[i]=temp; 
	} 
	printf("%s",chuoi); 
	return 0; 
} 
