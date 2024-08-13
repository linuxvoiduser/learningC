#include <stdio.h>

int main (){
	char name[5]="vahid";
	char *ptr=&name[0];
	printf("%c\n",ptr);
	printf("%c\n",ptr+1);
	printf("%c\n",ptr+2);
	printf("%c\n",ptr+3);
	printf("%c\n",ptr+4);
	return 0;
}
