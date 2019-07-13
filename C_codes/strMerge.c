#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *merge(char str1[], char str2[]){
	int a , b;
	char *strname = (char *) malloc(sizeof(char) * (strlen(str1)+ strlen(str2)));
	for ( a=0 ; a < strlen(str1) ;  a++){
		strname[a] = str1[a];
		}
	strname[a] = ' ';   // space between names
	for ( b = 0 ; b < strlen(str2) ; b++){
		strname[a+b+1] = str2[b];
		}
	return (char *)strname;
}
int main(){
	char firstname[20], lastname[20];
	char *fullname;
	printf("enter first name\n");
	scanf("%s",firstname);
	printf("enter last name\n");
	scanf("%s",lastname);
	fullname = merge(firstname, lastname);
	printf("%s\n",fullname);
}
