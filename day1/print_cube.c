#include <stdio.h>

int main (){
	int high ,width;
	printf("enter the high\n");
	scanf("%d",&high);
	printf("enter the width:\n");
	scanf("%d",&width);
	
	for (int i=0;i<high;i++){
		printf("|");
		if(i==0 || i==high-1){
			for(int j=0;j<width;j++)
				printf("_ ");
		}else{
			for(int p=0;p<width;p++)
				printf("  ");
		}
				
		printf("|\n");	
	}
	return 0;
}