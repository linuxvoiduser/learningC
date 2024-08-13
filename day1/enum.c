#include <stdio.h>

enum  Week{
	Sunday,
	Monday,
	Tuesday,
	Wednsday,
	Thursday,
	Friday,
	Saturday};

int main(){
	enum Week today;
	today = Wednsday;
	for(int i =0;i<8;i++)
		printf("Day %d\n",today+i);
	printf("%lu\n",sizeof(today));
	return 0;
}
