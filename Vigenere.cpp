#include<stdio.h>
#include<string.h>
#include<ctype.h>

void vigenereEncrypt ( char* input, char* key ) {
	
	int inputLength = strlen (input);
	int keyLength = strlen (key);
	
	for( int i = 0, j = 0; i < inputLength; i++ ) {
		
		char currentChar = input[i];
		
		if ( isalpha(currentChar)) {
			
			char keyChar = key[j % keyLength];
			int shift = toupper(keyChar) - 'A';
			
			if ( islower ( currentChar )) {
				currentChar = 'a' + ( currentChar - 'a' + shift ) % 26;
			}
			else if( isupper ( currentChar )) {
				currentChar = 'A' + ( currentChar - 'A' + shift ) % 26;
			}
			
			j++;
		}
		
		input[i] = currentChar;	
	}
}

int main() {
	
	char input[100];
	char key[100];
	
	printf("Enter the plain text: ");
	scanf("%[^\n]s", input);
	
	printf("Enter the key: ");
	scanf("%s", key);
	
	vigenereEncrypt ( input, key );
	printf("Encrypted text: %s \n", input);
}
