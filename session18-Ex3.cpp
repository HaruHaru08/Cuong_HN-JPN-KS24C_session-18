#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user01[5];
	for(int i=0;i<5;i++){
	printf("Nhap ten cho sinh vien %d: \n",i+1);
	fgets(user01[i].name,sizeof(user01[i].name),stdin);
	printf("Nhap tuoi cho sinh vien %d:\n",i+1);
	scanf("%d",&user01[i].age);
	fflush(stdin);
	printf("Nhap so dien thoai cho sinh vien %d:\n",i+1);
	fgets(user01[i].phoneNumber,sizeof(user01[i].phoneNumber),stdin);
	}
	for(int i=0;i<5;i++){
	printf("Thong tin cua sinh vien sau khi nhap la:\n");
	printf("\tTen: %s\n",user01[i].name);
	printf("\tTuoi: %d\n",user01[i].age);
	printf("\tSDT: %s\n",user01[i].phoneNumber);
	}
	return 0;
}
