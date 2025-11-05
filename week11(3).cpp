/*Week-11 Task #3
Write a C program to add two distances entered by user. Measurement of distance should be in inch and feet. (Note: 12 inches = 1 foot). Use the concept
of structure.*/

#include <stdio.h>

struct Distance {
    int feet, inches;
};

main() {
    struct Distance d1, d2, sum;
    printf("Enter the first distance (feet & inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter the second distance (feet & inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }
    printf("The sum of the two distances is: %d feet %d inches.\n", sum.feet, sum.inches);
}

