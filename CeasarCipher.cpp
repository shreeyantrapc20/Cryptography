#include<stdio.h>
#include<string.h>
void encrypt(char text[], int shift){
	for(int i=0; i<strlen(text);i++){
		if(text[i]>='a'&& text[i]<='z'){
			text[i]='a'+(text[i]-'a'+shift)%26;
		}
		else{
				text[i]='A'+(text[i]-'A'+shift)%26;
		}
	}
}
int main(){
	char plaintext[100];
	int shift;
	printf("Enter plain text:\n");
	scanf("%[^\n]s",&plaintext);
	printf("Enter shift value: \n");
	scanf("%d",&shift);
	encrypt(plaintext,shift);
	printf("Encrypted text :- %s \n",plaintext);
	return 0;
}
