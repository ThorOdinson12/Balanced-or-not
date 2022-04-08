#include<stdio.h>
#include<string.h>
 
int main(){
	char para[100000];
	scanf("%c", &para);
	int count=0;///()
	int count1=0;///{}
	int count2=0;///[]
	int a=6;
	for (int i=0; i<a; i++){
		for (int j=i+1; j<a; j++){
			if (para[i]=='{' && para[j]=='}') {
				count1=1;}
			else {
				count1=count1;}
			if (para[i]=='(' && para[j]==')') {
				count=1;}
			else {
				count=count;}
			if (para[i]=='[' && para[j]==']') {
				count2=1;}
			else {
				count2=count2;}}}
	
	 
	if (count==1 && count1==1 && count2==1){
		printf("balanced");}
				
				 
		
	 
	 
				
	 
	
	
	 
		 
 
	return 0;}
	
	
 