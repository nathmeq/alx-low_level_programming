ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/*Prints whether the number stored in a variable is positive or negative*/
void positive_or_negative(int i);

/*Returns the largest of 3 numbers*/
int largest_number(int a, int b, int c);

/*Converts day of month to day od year, without accounting*/
int convert_day(int, int);

/*Takes a date and prints how many days are*/
void print_remaining_days(int, int, int);

#endif /* MAIN_H */
