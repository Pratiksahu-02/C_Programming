#include<stdio.h>
#include<string.h>
struct  student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s1,s2,s3,s4,s5,s6;
    printf("Enter the roll_no, name and marks of student 1: ");
    scanf("%d %s %f",&s1.roll_no,s1.name,&s1.marks);
    printf("Enter the roll_no, name and marks of student 2: ");
    scanf("%d %s %f",&s2.roll_no,s2.name,&s2.marks);
    printf("Enter the roll_no, name and marks of student 3: ");
    scanf("%d %s %f",&s3.roll_no,s3.name,&s3.marks);
    printf("Enter the roll_no, name and marks of student 4: ");
    scanf("%d %s %f",&s4.roll_no,s4.name,&s4.marks);
    printf("Enter the roll_no, name and marks of student 5: ");
    scanf("%d %s %f",&s5.roll_no,s5.name,&s5.marks);
    printf("Enter the roll_no, name and marks of student 6: ");
    scanf("%d %s %f",&s6.roll_no,s6.name,&s6.marks);

    printf("Student 1:%f\n",s1.marks);
    printf("Student 2:%f\n",s2.marks);
    printf("Student 3:%f\n",s3.marks);
    printf("Student 4:%f\n",s4.marks);
    printf("Student 5:%f\n",s5.marks);
    printf("Student 6:%f\n",s6.marks);
    
}
