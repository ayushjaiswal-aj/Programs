#include<stdio.h>
#include<string.h>

char morseCode[500];
char *morseCodeConverter(char s[100]){
	int i;
	int len = strlen(s);
	for (i=0; i<len; i++){
		if ( s[i] >= 97 && s[i] <= 122){
			s[i] = s[i] - 32;
		}
	}
	for (i=0; i<len; i++){
		switch (s[i]){
			case 'A': strcat(morseCode,"._   "); break;
			case 'B': strcat(morseCode,"_...   "); break;
			case 'C': strcat(morseCode,"_._.   "); break;
			case 'D': strcat(morseCode,"_..   "); break;
			case 'E': strcat(morseCode,".   "); break;
			case 'F': strcat(morseCode,".._.   "); break;
			case 'G': strcat(morseCode,"__.   "); break;
			case 'H': strcat(morseCode,"....   "); break;
			case 'I': strcat(morseCode,"..   "); break;
			case 'J': strcat(morseCode,".___   "); break;
			case 'K': strcat(morseCode,"_._   "); break;
			case 'L': strcat(morseCode,"._..   "); break;
			case 'M': strcat(morseCode,"__   "); break;
			case 'N': strcat(morseCode,"_.   "); break;
			case 'O': strcat(morseCode,"___   "); break;
			case 'P': strcat(morseCode,".__.   "); break;
			case 'Q': strcat(morseCode,"__._   "); break;
			case 'R': strcat(morseCode,"._.   "); break;
			case 'S': strcat(morseCode,"...   "); break;
			case 'T': strcat(morseCode,"_   "); break;
			case 'U': strcat(morseCode,".._   "); break;
			case 'V': strcat(morseCode,"..._   "); break;
			case 'W': strcat(morseCode,".__   "); break;
			case 'X': strcat(morseCode,"_.._   "); break;
			case 'Y': strcat(morseCode,"_.__   "); break;
			case 'Z': strcat(morseCode,"__..   "); break;
			case '0': strcat(morseCode,"_____   "); break;
			case '1': strcat(morseCode,".____   "); break;
			case '2': strcat(morseCode,"..___   "); break;
			case '3': strcat(morseCode,"...__   "); break;
			case '4': strcat(morseCode,"...._   "); break;
			case '5': strcat(morseCode,".....   "); break;
			case '6': strcat(morseCode,"_....   "); break;
			case '7': strcat(morseCode,"__...   "); break;
			case '8': strcat(morseCode,"___..   "); break;
			case '9': strcat(morseCode,"____.   "); break;
			case '@': strcat(morseCode,".__._.   "); break;
			case '&': strcat(morseCode,"._...   "); break;
			case '!': strcat(morseCode,"_._.__   "); break;
			case '?': strcat(morseCode,"..__..   "); break;
			case ',': strcat(morseCode,"__..__   "); break;
			case '.': strcat(morseCode,"._._._   "); break;
			case ' ': strcat(morseCode,"    "); break;
		}				
	}
	printf("\n");
	return (morseCode);
}

int main(){
	char s[100];
	scanf("%[^\n]%*c", s);
	printf("%s\n",morseCodeConverter(s));
}
