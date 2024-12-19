#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user01={"Do Viet Hung",18,"0912356882"};
	printf("Ten: %s\n",user01.name);
	printf("Tuoi: %d\n",user01.age);
	printf("SDT: %s\n",user01.phoneNumber);
	return 0;
}
