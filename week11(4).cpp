/*Week-11 Task #4
Write a Program to accept five records of employee. The Structure is: 
			struct {  
				char name [25]; 
				int age; 
				int Basic; 
			} 
Calculate the total salary of employees as:
		Total Salary = Basic + DA + HRA 
		DA = 10% of Basic 
		HRA = 5% of Basic 
Display the name, age and total salary of the employees in descending order on the basis of total salary?*/

#include <stdio.h>
#include <string.h>

struct emp {
    char name[25];
    int age, basic;
    float total;
};

main() {
    int num = 5, i, j;
    float DA, HRA;
    struct emp em[5], tsalary;

    for (i = 0; i < num; i++) {
		printf("Enter the details of Employee %d: \n", i+1);
		printf("Name: ");
        scanf("%s", em[i].name);
        printf("Age: ");
        scanf("%d", &em[i].age);
        printf("Basic: ");
        scanf("%d", &em[i].basic);

        DA = 0.10f * em[i].basic;
        HRA = 0.05f * em[i].basic;
        em[i].total = em[i].basic + DA + HRA;
    }

    for (i = 0; i < num-1; i++)
        for (j = i+1; j < num; j++)
            if (em[i].total < em[j].total) {
                tsalary = em[i];
                em[i] = em[j];
                em[j] = tsalary;
            }

    printf("\nName\tAge\tTotal Salary\n");
    for (i = 0; i < num; i++)
        printf("%s\t%d\t%.2f\n", em[i].name, em[i].age, em[i].total);
}

