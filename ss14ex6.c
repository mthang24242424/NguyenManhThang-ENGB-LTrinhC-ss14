#include<stdio.h>
int main(){
	char word[100]="toi sinh ngay 24 thang 4 nam 2006";
	int length=strlen(word);
	int count=0;
	for(int i=0;i<length;i++){
		if((word[i]>='a'&& word[i]<='z')||(word[i]>='A' && word[i]<='Z')){
			count++; 
		} 
	} 
	printf("chuoi co %d chu cai",count) ;
	return 0; 
} 
