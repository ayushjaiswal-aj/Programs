#include<stdio.h>
#include<string.h>
void asciiofstr(char array[], int sizeofarray);
int main(){
	char str1[] = "hello!0", str2[10];
	int i;
	for (i = 0; i < strlen(str1); i++ ){
		str2[i] = str1[i];
		}
	str2[i] = '\0';
	printf("%s\n",str2);
	printf("%d\n",(int)strlen(str2));
	int a = strlen(str2);
	asciiofstr(str2, 10);
	return 0;
} 
void asciiofstr(char array[], int sizeofarray){
	int a;
	for (a=0; a<=sizeofarray; a++){
		int b = array[a];
		printf("%d\n",b);
	}
}
