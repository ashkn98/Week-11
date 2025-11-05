/*Week-11 Task #1
Write an interactive program in C to store the record of the N students of a class and print them. The record consists of Name, Class, Roll No, 
Enrolment, Marks. */

#include <stdio.h>

struct Student {
    char name[30], classN[10];
    int rNo, enrol;
    float marks;
};

main() {
    int num, i;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    struct Student st[100];
    if(num > 100) {
        printf("Maximum allowed number of students is 100.\n");
        return 1;
    }

    for(i = 0; i < num; i++) {
        printf("Enter the details of Student %d: \n", i+1);
        printf("Name: ");
        scanf("%s", st[i].name);
        printf("Class: ");
        scanf("%s", st[i].classN);
        printf("Roll No: ");
        scanf("%d", &st[i].rNo);
        printf("Enrolment No: ");
        scanf("%d", &st[i].enrol);
        printf("Marks: ");
        scanf("%f", &st[i].marks);
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < num; i++) {
        printf("Name: %s, Class: %s, Roll No: %d, Enrolment: %d, Marks: %.2f\n",
            st[i].name, st[i].classN, st[i].rNo, st[i].enrol, st[i].marks);
    }
}

