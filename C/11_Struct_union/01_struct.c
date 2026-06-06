#include<stdio.h>
#include<conio.h>

struct Student{
	char name[10];
	int rollno;
	float marks;
};


int main(){
	
	struct Student s;

	printf("Enter your Rollno : ");
	scanf("%d",&s.rollno);
	
	printf("Enter your Name : ");
	scanf("%s",&s.name);

	printf("Enter your Marks : ");
	scanf("%f",&s.marks);	
	
	printf("\n----Student Details----\n");
	printf("\nRollno : %d",s.rollno);
	printf("\nStudent Name : %s",s.name);
	printf("\nMarks : %2.f ",s.marks);
	
	return 0;
}
