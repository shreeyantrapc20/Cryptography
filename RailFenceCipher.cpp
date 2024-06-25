#include<stdio.h>
#include<string.h>
#include<ctype.h>
void railfenceEncrypt(char* input, int rails, char* encrypted){
	int inputlength = strlen(input);
	char fence[rails][inputlength];
	for(int i=0;i<rails;i++){
	for(int j=0;j<inputlength;j++){
		fence[i][j]='\0';
	}
}
int row=0, direction=1;
for(int i=0;i<inputlength;i++){
	fence[row][i]=input[i];
	if(row==rails-1){
		direction=1;
	}
	else if(row==0){
		direction=1;
	}
	row+=direction;
}
int index=0;
for(int i=0;i<rails;i++){
	for(int j=0;j<inputlength;j++){
		if(fence[i][j]!='\0'){
			encrypted[index]=fence[i][j];
			index++;
		}
	}
}
encrypted[index]='\0';
}
int main(){
	char input[100];
	char encrypted[100];
	int rails;
	printf("Enter the plaintext:\n");
	scanf("%[^\n]s",&input);
	printf("Enter the number of rails: \n");
	scanf("%d",&rails);
	railfenceEncrypt(input,rails,encrypted);
	printf("Encrypted text:%s\n",encrypted);
	return 0;
}
