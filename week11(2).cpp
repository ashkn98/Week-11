/*Week-11 Task #2
Write an interactive program in C to store the record of the N students of a class and arrange them rank wise. The record consists of Name, Roll no, 
Marks.*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int rNo;
    float marks;
};

main() {
    int num, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    struct Student st[100], temp;
    if (num > 100) {
        printf("Maximum of only 100 students allowed.\n");
        return 1;
    }

    for(i = 0; i < num; i++) {
        printf("Enter the details of Student %d: \n", i+1);
        printf("Name: ");
        scanf("%s", st[i].name);
        printf("Roll No: ");
        scanf("%d", &st[i].rNo);
        printf("Marks: ");
        scanf("%f", &st[i].marks);
    }

    for (i = 0; i < num-1; i++)
        for (j = i+1; j < num; j++)
            if (st[i].marks < st[j].marks) {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }

    printf("\nRecords (Rank-wise):\n");
    for (i = 0; i < num; i++) {
        printf("Rank %d: Name: %s, Roll No: %d, Marks: %.2f\n",
            i+1, st[i].name, st[i].rNo, st[i].marks);
    }
}

