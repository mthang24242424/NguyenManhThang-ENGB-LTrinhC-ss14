#include<stdio.h>
int main(){
	char word[100];
	printf("nhap chuoi bat ki: "); 
	fgets(word,sizeof(word),stdin);
	int length = strlen(word);
	printf("%s",word); 
	printf("do dai chuoi la: %d",length); 
	return 0; 
} 
