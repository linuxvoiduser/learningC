#include <stdio.h>
#include <string.h>
struct Person {
	char name[50];
	int age;
	float height;
};


int main(){
	/* // way one 
	struct Person person1 ={"vahid" ,25 ,1.9};*/

	/* // way two
	struct Person person1 ={.name="vahid" ,.age=25 ,.height=1.9};*/
	//way three
	struct Person person1 ={name:"vahid",age:25 ,height:1.9};
		
	/* //way four
	struct Person person1 ;
//	person1.age =25;
//	person1.height=1.9;
//	strcpy(&person1.name,"vahid");*/
	printf("person name is %s\n",person1.name);
	printf("person age is %d\n", person1.age);
	printf("person hieght is %.2f\n",person1.height);
	return 0;

}
