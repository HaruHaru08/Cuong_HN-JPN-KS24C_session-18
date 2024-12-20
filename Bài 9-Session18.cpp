#include<stdio.h>
#include<string.h>

struct Dish{
	int id;
	char name[50];
	double price;
};
int main(){
	int choice;
	struct Dish menu[100]={	
		{1,"Com rang",30},{2,"Pho bo",35},{3,"Pho ga",35},{4,"Bun cha",25},{5,"Bun ngan",30},
	};
	int count=5;
	do{
		printf("\t----Menu----\n\n\n");
		printf("1.In ra gia tri cac phan tu co trong menu mon an theo dang 1.member:value\n");
		printf("2.Them mot phan tu vao vi tri chi dinh\n");
		printf("3.Sua mot phan tu o vi tri chi dinh\n");
		printf("4.Xoa mot phan tu o vi tri chi dinh\n");
		printf("5.Sap xep cac phan tu\n");
		printf("6.Tim kiem phan tu theo name da nhap\n");
		printf("7.Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Cac mon an la: \n");
				for(int i=0;i<count;i++){
					printf("%d.%d",i,menu[i].id);
					printf(" %s",menu[i].name);
					printf("\t%.2f\n",menu[i].price);
				}
				break;
			case 2:
				menu[count].id=count+1;
				printf("Nhap ten mon an muon them: ");
				getchar();
				fgets(menu[count].name,sizeof(menu[count].name),stdin);
				menu[count].name[strlen(menu[count].name)-1] = '\0';
				printf("Nhap so tien cho mon an: ");
				scanf("%lf",&menu[count].price);
				count++;
				printf("Cac mon an la: \n");
				for(int i=0;i<count;i++){
					printf("%d.",menu[i].id);
					printf(" %s",menu[i].name);
					printf("\t%.2lf\n",menu[i].price);
				}
				break;
			case 3:
				int addlndex;
				printf("Nhap vi tri muon sua: ");
				scanf("%d",&addlndex);
				if(addlndex<0 || addlndex>5){
					printf("Vi tri khong hop le");
					continue;
				}else{
					addlndex--;
					printf("Nhap mon moi: ");
					getchar();
					gets(menu[addlndex].name);
					printf("Nhap so tien cho mon an: ");
					scanf("%lf",&menu[addlndex].price);
					printf("Menu sau khi sua la: \n");
					for(int i=0;i<count;i++){
						printf("%d.",menu[i].id);
						printf(" %s",menu[i].name);
						printf("\t%.2f\n",menu[i].price);
					}
				}
				break;
			case 4:
				for(int i=0;i<count-1;i++){
					printf("%d.",menu[i].id);
					printf(" %s",menu[i].name);
					printf("\t%.2f\n",menu[i].price);
				}
				break;
			case 5:
				//Sap xep giam dan
				for(int i=0;i<count;i++){
					for(int j=0;j<count-i-1;j++){
						if(menu[j].price<menu[j+1].price){
							Dish temp=menu[j+1];
							menu[j+1]=menu[j];
							menu[j]=temp;
						}
					}
				}
				for(int i=0;i<count;i++){
					printf("%d.",menu[i].id);
					printf(" %s",menu[i].name);
					printf("\t%.2f\n",menu[i].price);
				}	
				break;
			case 6:
				if(count<=5){
					char n[100];
					int check=0;
					printf("Nhap mon muon tim: ");
					getchar();
					gets(n);
					for(int i=0;i<count;i++){
						if(strcmp(n,menu[i].name)==0){
							printf("Mon can tim nam o vi tri %d cua menu\n",menu[i].id);
							check=1;
							break;
						}
					}
					if(check!= 1){
						printf("Mon can tim khong co trong menu\n");
					}
				}
				break;
			case 7:
				printf("Hen gap lai\n");
				break;
			default:
				printf("So khong hop le!Hay chon lai.");
				continue;
		}
	}while(choice<7);
	return 0;
}

