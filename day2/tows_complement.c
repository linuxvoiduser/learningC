#include <stdio.h>

int main (){
	int bits;
	printf("Enter the number of bites\b:");
	scanf("%d",&bits);
	char binary[bits+1];
	char ones_complement[bits+1];
	char twos_complement[bits+1];
	int carry=1;
	int flag=1;
	int i;
	while(flag){
	printf("Enter the binary number:\n");
	scanf("%s",binary);
	for(i=0;i<bits;i++){
		if(binary[i]!='1' && binary[i]!='0'){
		printf("only 1  or 0 \n");
		break;
		}else {
			flag=0;
			break;
			}
		}
	
	}
	printf("%s\n",binary);
	printf("The ons\'s complement of %s is :\n",binary);
	for (i=0;i<bits;i++){
		(binary[i]=='1')?(ones_complement[i]='0'):(ones_complement[i]='1');	
	}
	printf("%s\n\n",ones_complement);
	

	printf("The two\'s complement of %s is :\n",binary);
	int bk_point;
	for(int j=bits-1;j>=0;j--){
		if(binary[j]=='1'){	
			//printf("%d\n",j);
			bk_point=j;
			break;
		}
	}

	for(i=bits;i>=0;i--){
		if(i>bk_point){
			twos_complement[i]=ones_complement[i];
		}else{
			(ones_complement[i]=='1')?(twos_complement[i]='0'):(twos_complement[i]='1');
		}
	
	}

	printf("%s\n",twos_complement);
	return 0;
}
