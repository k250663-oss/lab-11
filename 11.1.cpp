#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int roll_num;
	float marks[3];
	float calc;
	char grade;
	
};
void grade(int stud , struct student s[]);
//void bygrade(int stud , );


void grade(int stud , struct student s[] ){
	float calc;
	for(int i =0 ; i<stud ; i++){
		float total =0;
		for(int j =0 ; j<3 ; j++){
		
		
	total += s[i].marks[j];
	s[i].calc = total/3;
		
		}
		printf("\nstudent [%d]:" ,i+1);
		if(s[i].calc >= 90 && s[i].calc <=100){
			printf("Grade - A+");
		}
		else if(s[i].calc >= 80 && s[i].calc <=89){
			printf("Grade - A");
		}
		else if(s[i].calc > 70 && s[i].calc <79){
			printf("Grade - B+");
		}
		else if(s[i].calc > 60 && s[i].calc <69){
			printf("Grade - B");
		}
		else if(s[i].calc > 90 && s[i].calc <100){
			printf("Grade - C");
		}
		else {
			printf("Failed");
		}
	
	}
}
void bygrade(int n, struct student s[]) {
    char g;
    printf("\nEnter Grade to search (A/B/C/D/E/F): ");
    scanf(" %c", &g);
    printf("\nStudents with Grade %c\n", g);
    int found = 0;
    for (int i = 0; i< n; i++) {
        if (s[i].grade== g) {
            found = 1;
            printf("%s\n", s[i].name);
        }
    }
}
	
	void sort(struct student s[] , int stud){
		printf("\n\n sort through marks:\n");
		struct student temp;
		
		for(int i=0 ; i<stud-1 ; i++){
			for(int j=i+1 ; j<stud ; j++){
			
			if(s[j].calc >=s[i].calc){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
			printf("%d , %s" , i+1 , s[i].name);
	}
	}
	void byroll(int stud , struct student s[]){
		int r;
		printf("enter roll number:");
		scanf("%d" ,&r);
		for(int i=0 ; i<stud ; i++){
			if(s[i].roll_num == r){
				printf("student found\n %d %s" , s[i].roll_num , s[i].name);
			}
		}
		return;
	}
	
void class_average(int n, struct student s[]) {
    float total = 0;
    for (int i = 0; i < n; i++) total += s[i].calc;
    float avg = total / n;
    printf("\nClass Average = %.2f\n", avg);
    printf("\n Above Average:\n");
    for (int i = 0; i < n; i++)
        if (s[i].calc > avg)
            printf("%s\n", s[i].name);
    printf("\nBelow Average Students\n");
    for (int i = 0; i < n; i++)
        if (s[i].calc < avg)
            printf("%s\n", s[i].name);
}
//void bygrade(int stud , )
int main(){
	int stud;
	printf("enter number of students: ");
	scanf("%d" , &stud);
	struct student s[stud];
	for(int i =0 ; i<stud ; i++){
		printf("\nenter data of student %d\n" , i+1);

	printf("enter name of student:");
	scanf("%s" , s[i].name);
	printf("enter roll_num of student:");
	scanf("%d" , &s[i].roll_num);
	for(int j=0 ; j<3 ; j++){
		do{
		
	printf("enter marks for subj %d (0-100) " , j+1);
	scanf("%f" , &s[i].marks[j]);
}
while(s[i].marks[j]< 0|| s[i].marks[j]> 100))
}
}
grade(stud, s);
    sort(s, stud);
  bygrade(stud, s);
    byroll(stud, s);
class_average(stud, s);
}

