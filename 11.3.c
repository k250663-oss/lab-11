#include<stdio.h>
struct employee{
	int id;
	char name[20];
	char dept[20];
	char designation[20];
	int salary;
	int join;
	int pn;
	char email[50];
};
void display(struct employee e);
void sbydept(struct employee e[], int n);
int main(){
	int n=3;
	struct employee e[n];
	for(int i =0 ; i<n ; i++){
		printf("\n=====EMPLOYEE%d=========\n" , i+1);
		printf("enter name:\n");
		scanf("%s" , e[i].name);
		printf("enter id\n");
		scanf("%d" , &e[i].id);
		printf("enter department:\n");
		scanf("%s" , e[i].dept);
		printf("enter designation:\n");
		scanf("%s" , e[i].designation);
		printf("enter salary:\n");
		scanf("%d" , &e[i].salary);
		printf("enter joining year:\n");
		scanf("%d" , &e[i].join);
		printf("enter phone-number:\n");
		scanf("%d" , &e[i].pn);
		printf("enter email:\n");
		scanf("%s" , e[i].email);
		int exp = 2025 - e[i].join;
		printf("\nyears of experience:%d		till 2025" , exp);
	}
	while(1){
	
	int opt;
	printf("\n1. Display all employees\n2. Department-wise salary stats\n3. Search by Department\n4. Show employees eligible for promotion\n0. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d" , &opt);
	switch(opt){
		case 1:
			for(int i=0 ; i<n ; i++){
				display(e[i]);
			}
			break;
		case 2:
			sbydept(e, n);
			break;
		case 3:
			search(e , n);
			break;
		case 4:
			promtion(e , n);
			break;
			
	}
}
	}
void display(struct employee e){
	 printf("ID:              %d\n", e.id);
    printf("Name:            %s\n", e.name);
    printf("Department:      %s\n", e.dept);
    printf("Designation:     %s\n", e.designation);
    printf("Salary:          %d\n", e.salary);
    printf("Year of Joining: %d\n", e.join);
    printf("Phone:           %d\n", e.pn);
    printf("Email:           %s\n", e.email);
    printf("--------------------------------\n");
	
	
}
void sbydept(struct employee e[],int n){
    char *departments[] = {"HR","IT","Finance"};
    int sn=3;

    for(int d = 0; d < sn; d++){
        int sum = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(strcmp(e[i].dept, departments[d]) == 0){
                sum += e[i].salary;
                count++;
            }
        }
        if(count > 0)
            printf("Average salary for %s: %.2f\n", departments[d], (float)sum/count);
        else
            printf("No employees in %s department.\n", departments[d]);
    }
}
void promotion(struct employee e[] , int n){
	for(int i =0 ; i<n ;i++){
		int exp = 2025 - e[i].join;
		if(exp>3){
			printf("%s is elegible for promotion!" , e[i].name );
		}
	}
	
}
void search(struct employee e[] , int n){
	char des[20];
	printf("\nenter designation: ");
	scanf("%s" , des);
	for(int i=0 ;i <n ;i++){
		if(strcmp(e[i].designation , des) ==0){
			printf("DESIGNATION %s      NAME: %s" , des , e[i].name);
		}
	}
}
