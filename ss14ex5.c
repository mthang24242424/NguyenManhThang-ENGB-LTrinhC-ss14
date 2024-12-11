#include<stdio.h>
int main(){
	char word[100]="xin chao ten toi la Nguyen Manh Thang";
	int length=strlen(word);
	int count=0;
	for(int i=0;i<length;i++){
		if(word[i]==' '){
			count++; 
		} 
	} 
	 printf("chuoi tren co %d tu",count+1);
	 return 0; 
} 
