#include<stdio.h>
#include<string.h>
struct date{
	char acc_date[10];
	char w_date[10];
};
struct bank{
	int actype;
	int balance;
	float inrate ; 
	struct date r[50];
	
};
int main(){
	struct bank b;
	int actype;
	printf("Enter account opening date (dd/mm/yyyy): ");
    scanf("%s",b.r[0].acc_date);
	printf("enter account type:\n1.Savings \n2.Current \n3.Fixed deposit\n");
	scanf("%d" , &actype);
	printf("enter balance:");
	scanf("%d" , &b.balance);
	switch(actype){
		case 1:
			if(b.balance <= 1000){
				printf("insufficient balance");
				return 0;
			}
			b.inrate = ((b.balance)*4/100) + b.balance;
		break;
		case 2:
			if(b.balance <= 5000){
				printf("insufficient balance");
				return 0;
			}
			b.inrate = b.balance;
		break;
		case 3:
			if(b.balance<=10000){
				printf("insufficient balance");
				return 0;
			}
			b.inrate = ((b.balance)*7/100) + b.balance;
	}
	char opt;
	int amount;
	printf("balance after interest rate: %.2f" , b.inrate);
	printf("\ndo you want to withraw money?(y/n):");
	scanf(" %c" , &opt);
	if(opt == 'y'){
		printf("Enter withdrawal date (dd/mm/yyyy): ");
       scanf("%s",b.r[0].w_date);
		printf("enter amount");
		scanf("%d" , &amount);
		b.balance-= amount;
	}
	printf("remaining balance: %d" , b.balance);
}
