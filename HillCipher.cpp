#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void multiplyMatrix(int key[2][2],int input[2][1],int result[2][1]){
	
	int i,j;
	
	for(i=0;i<2;i++){
		
		result[i][0]=0;
		
		for(j=0;j<2;j++){
			
			result[i][0]+=key[i][j]*input[j][0];
			
		}
	}
}
int main(){
	
	int key[2][2]={{3,4},{5,2}};
	char inputstr[100];
	
	printf("Enter a string to encrypt(in uppercase):");
	scanf("%s",inputstr);
	
	int len=strlen(inputstr);
	int inputMatrix[2][1];
	
	for(int i=0;i<len;i++){
		
		inputMatrix[0][0]=inputstr[i]-'A';
		i++;
		inputMatrix[1][0]=inputstr[i]-'A';
		int encryptedMatrix[2][1];
		multiplyMatrix(key,inputMatrix,encryptedMatrix);
		printf("Encrypted form of %c%c:%c%c\n",inputstr[i-1],inputstr[i],encryptedMatrix[0][0]%26+'A',encryptedMatrix[1][0]%26+'A');
	}
	return 0;
}
