#include<stdio.h>
#include<string.h>
int main(void){

int size;
int i;
char strArr[15];

	printf("Enter the Text: ");
	scanf("%s", strArr);

	size = strlen(strArr);

	for(i=0; i<size; i++)
	{
	printf("%c", strArr[i]);
	}
	
	printf("\n");
	
	for(i=size; i>=0; i--)
	{
		printf("%c", strArr[i]);
		
	}
	
return 0;
}
