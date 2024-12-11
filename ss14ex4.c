#include<stdio.h>
int main(){
	char word[15]="hello world";
	int length=strlen(word);
	int count=0; 
	char kyTu;
	printf("nhap 1 ki tu bat ki de ktra: ");
	scanf("%c",&kyTu); 
	for(int i=0;i<length;i++){
		if(kyTu==word[i]){
			count++; 
		} 
	}
	printf("ki tu %c xuat hien %d lan",kyTu,count);
	return 0; 
} 
