#include <stdio.h>
#include<string.h>

void decrypt(char text[],int shift){
    for(int i=0;i<strlen(text);i++){
        if(text[i]>='a'&& text[i]<='z'){
            text[i]='a'+(text[i]-'a'-shift)%26;
        }else if(text[i]>='A'&&text[i]<='Z'){
            text[i]='A'+(text[i]-'A'-shift)%26;
        }
    }
}

int main(){
    char plaintext[100];
    int shift;
    printf("Enter cipher text: ");
    scanf("%[^\n]s",&plaintext);
    printf("enter the shift value: ");
    scanf("%d",&shift);
    
    decrypt(plaintext,shift);
    printf("Decrypted text: %s\n",plaintext);
    return 0;
}