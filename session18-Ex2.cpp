#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user01;
	printf("Nhap ten cho sinh vien: \n");
	fgets(user01.name,sizeof(user01.name),stdin);
	printf("Nhap tuoi cho sinh vien:\n");
	scanf("%d",&user01.age);
	fflush(stdin);
	printf("Nhap so dien thoai cho sinh vien:\n");
	fgets(user01.phoneNumber,sizeof(user01.phoneNumber),stdin);
	printf("Thong tin cua sinh vien sau khi nhap la:\n");
	printf("\tTen: %s\n",user01.name);
	printf("\tTuoi: %d\n",user01.age);
	printf("\tSDT: %s\n",user01.phoneNumber);
	return 0;
}