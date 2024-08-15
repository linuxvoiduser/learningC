#include <stdio.h>

int main (){

	/*char  ch;
	printf("enter a character:");
	scanf("%c",&ch);
	printf("\nThe ascii value of the ch variable is :%d\n",ch);
	printf("The reperesent of asci value is %c\n",ch);*/

	/*
	for (int i=0;i<128;i++)
		printf("The ascii value of %c is %d\n",i,i);
	*/
	int sum=0;
	char name[20];
	printf("Enter your name:");
	scanf("%s",name);
	int i=0;
	while(name[i]!='\0')
	{
		
		printf("The ascii value of %c is %d\n",name[i],name[i]);
		sum=sum+name[i];
		i++;
	}

	printf("sum of the ascii value of a string is : %d\n",sum);
	return 0;
}

my files are :
a.out
ascii
ascii.c
comma_operator.c
