/* 
	NAME: AYUSH JAISWLA            ROLL NO. 43
	DIV: 1
	SUBJECT: PROGRAMMING Lab.
	ASSIGNMENT 3:
	AIM: 
		WRITE A MENU DRIVEN PROGRAM TO IMPLIMENT FOLLING OPERATIONS ON STRING WITH/WITHOUT USING THE LIBRARI FUNTIONS
		1. STRING LENGTH
		2. STRING COPY
		3. STRING REVERCE
		4. STRING PALINDROME
		5. STRING COMPARE
		6. SUBSTRING
*/


#include<stdio.h>

void getstring(char *s){
	scanf("%s",s);
	}

void putstring(char *s){
	printf("%s\n",s);
	}	

int getlen( char *s){
	int count=0;
	while (*(s++) != '\0'){
		count++;
		}
	return count;
	}

void strcopy(char *t, char *s){
	int i=0;
	while( *s != '\0'){
		*(t++) = *(s++);
		i++;
		}
	*t = '\0';	
	}
	
void strrev(int n, char *s2, char *s){
	while (*s != '\0'){
		*(s2+(n-1)) = *s;
		n--;
		s++;
		}
	}	
	 	
int strcomp( char *s1, char *s2){
	int i,j;
	for (i=0; *s1 != '\0'; i++){
		if(*s1 != *s2){
			break;
			}
		s1++;
		s2++;	
		}
	j = *s1 - *s2;
	return j;
	}
	
void palindrome(int n, char *s){
	char s2[n];
	strrev(n,s2,s);
	int i;
	for (i=0; *s !='\0'; i++){
		if(s2[i] != *s){
			printf("string is not palindrome\n");
			break;
			}
		if (i == n-1){
			printf("string is palindrome\n");
			}
		s++;
		}
	}
	
void substring(char *s1, char *s2){
	int i,j;
	for (i=0; *s1 != '\0'; i++){
		if (*s2 == *s1){
			for (j=0; *s2 != '\0'; j++){
				if (*s2 != *s1){
					printf("not a sub string\n");
					break;
					}
				s2++;	
				}	
			if (*s2=='\0'){
				printf("it is substring\n") ;
				}
			}
		s1++;	
		}
	}	
		
	
		
		 	
int main(){
	int n,m,l,p,q,len;
	printf("enter length of string\n");
	scanf("%d",&n);
	char str1[n];
	printf("enter string\n");
	getstring(str1);
	putstring(str1);
	int ch;
	printf("************MENU************");
	printf("\n 1.LNGTH OF STRING\n 2.COPY STRING\n 3.STRING REVERSE\n 4.STRING COMPARE\n 5.CHECK PALINDROME\n 6.CHECK SUBSTRING\n 7.EXIT\n");
	do{
		printf("enter your choice:  ");
		scanf("%d",&ch);
		switch(ch){
			case 1:{	
				len = getlen(str1);
				printf("length of string is %d\n",len);
				break;
				}
			case 2:{
				char str2[n];
				strcopy(str2,str1);
				printf("string 1 copied in string 2 is:%s\n",str2);
				break;
				}
			case 3:{	
				char str3[n];
				strrev(n,str3,str1);
				printf("reverse of string 1 is string 3 given as:%s\n",str3);
				break;
				}
			case 4:{	
				printf("comparing strings\n");
				printf("enter length of another string\n");
				scanf("%d",&m);
				char str4[m];
				printf("enter string\n");
				getstring(str4);
				l= strcomp(str1,str4);
				printf("difference is %d\n",l);
				break;
				}
			case 5:{
				printf("checking if string 1 is palindrome? \n");
				palindrome(n, str1);
				printf("enter length of another string\n");
				scanf("%d",&p);
				char str5[p];
				printf("enter string\n");
				getstring(str5);
				palindrome(p,str5);
				break;}
			case 6:{
				printf("checking substring:\n");
				printf("enter length and another short string from string 1\n");
				scanf("%d",&q);
				char str6[q];
				getstring(str6);
				substring(str1,str6);
				break;
				}
			}
		}
		while( ch != 7);
	}	




