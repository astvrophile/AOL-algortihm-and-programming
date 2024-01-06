#include <stdio.h>
#include <string.h>

// inverse string
void reverse(char str[]){
	int len = strlen(str);
	int i;
	
	for(i=0; i<len/2; i++){
		char temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
}

// convert alphabet
void convert(char str[]){
	int len = strlen(str);
	int i;
	
	for(i=0; i<len; i++){
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] - 'A' + 'a';
		} else if (str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 'a' + 'A';
		}
	}
}

int main(){
	
	char str[100];
	scanf("%[^\n]", str); getchar();
	
	reverse(str); // reverse the string
	convert(str); // convert lowercase and uppercase
	
	printf("%s\n", str);
	
	return 0;
}
