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

void getstring(int n, char s[n]){
	scanf("%s",s);
	}

void putstring(int n, char s[n]){
	printf("%s\n",s);
	}	

int getlen( char s[10]){
	int count=0;
	while (s[count] != '\0'){
		count++;
		}
	return count;
	}

void strcopy(int n, char t[n], char s[n]){
	int i=0;
	while( s[i] != '\0'){
		t[i] = s[i];
		i++;
		}
	t[i] = '\0';	
	}
	
void strrev(int n,char s2[n], char s[n]){
	int i=0;
	while (s[i] != '\0'){
		s2[n-1] = s[i];
		n--;
		i++;
		}
	}	
	 	
int strcomp(int n, int m,char s1[n],char s2[m]){
	int i,j;
	for (i=0; s1[i] != '\0'; i++){
		if(s1[i] != s2[i]){
			break;
			}
		}
	j = s1[i] - s2[i];
	return j;
	}
	
void palindrome(int n, char s[n]){
	char s2[n];
	strrev(n,s2,s);
	int i;
	for (i=0; s[i]!='\0'; i++){
		if(s2[i]!=s[i]){
			printf("string is not palindrome\n");
			break;
			}
		if (i == n-1){
			printf("string is palindrome\n");
			}
		}
	}
	
void substring(int n, int q, char s1[n], char s2[q]){
	int i,j;
	for (i=0; i <= n-q; i++){
		if (s2[0] == s1[i]){
			for (j=0; s2[j] != '\0'; j++){
				if (s2[j] != s1[j+i]){
					printf("not a sub string\n");
					break;
					}
				}
			if (s2[j]=='\0'){
				printf("it is substring\n") ;
				}
			}
		}
	}	
		
	
		
		 	
int main(){
	int n,m,l,p,q,len;
	printf("enter length of string\n");
	scanf("%d",&n);
	char str1[n];
	printf("enter string\n");
	getstring(n, str1);
	putstring(n,str1);
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
				strcopy(n,str2,str1);
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
				getstring(m,str4);
				l= strcomp(n,m,str1,str4);
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
				getstring(p,str5);
				palindrome(p,str5);
				break;}
			case 6:{
				printf("checking substring:\n");
				printf("enter length and another short string from string 1\n");
				scanf("%d",&q);
				char str6[q];
				getstring(q,str6);
				substring(n,q,str1,str6);
				break;
				}
			}
		}
		while( ch != 7);
	}	




