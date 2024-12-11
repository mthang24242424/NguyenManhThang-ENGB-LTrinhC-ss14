#include<stdio.h>
int main(){
	char word[6]="hello";
	for(int i=0;i<sizeof(word)/sizeof(char);i++){
		printf("%c ",word[i]); 
	}
	return 0; 
} 
