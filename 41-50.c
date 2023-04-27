// https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php
// 150 C exercises p1 ( 11 - 20 )
#include <stdio.h>

void program11();
void program12();
void program13();
void program14();
void program15();
void program16();
void program17();
void program18();
void program19();
void program20();

int main(){
    program14();
    return 0;
}
// accepts two item's weight and number of purchases (floating point values) and calculates their average value.
void program11(){
    float item1, item2, average;
    float weight1, weight2;
    printf("input the amount of two items and their weights\n");
    printf("item 1 weight: ");
    scanf("%f", &weight1);
    printf("\nnum of item1: ");
    scanf("%f", &item1);
    printf("item 2 weight: ");
    scanf("%f", &weight2);
    printf("\nnum of item2: ");
    scanf("%f", &item2);
    average = ((weight1 * item1) + (weight2 * item2));
    average = (average / (item1+item2));
    printf("\nResult: %f", average);
}

// accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
// question isn't concise, will just post the monthly paycheque from given amount per hour.
void program12(){
    float wage, monthlyWage;
    int hours;
    char ID[11];
    printf("Enter employee ID (max 10 chars): ");
    scanf("%s", ID);
    printf("\nWorking hours: ");
    scanf("%d", &hours);
    printf("\nHourly Wage: ");
    scanf("%f", &wage);
    monthlyWage = (wage * hours);
    monthlyWage = monthlyWage * 20;
    printf("\nEmployee ID: %s\nMonthly wage: %f", ID, monthlyWage);
}

// accepts three integers and finds the maximum of three.
void program13(){
    int one, two, three, max;
    printf("Enter 3 ints: ");
    scanf("%d %d %d", &one, &two, &three);
    if (one > two){
        max = one;
    }
    if (two > one){
        max = two;
    }
    if (three > max){
        max = three;
    }
    printf("\nMax: %d", max);
}
// calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points)
void program14(){
    int distance;
    float fuel, average;
    printf("Distance travelled :");
    scanf("%d", &distance);
    printf("\nFuel used: ");
    scanf("%f", &fuel);
    average = distance / fuel;
    printf("\nAverage consumption(km/L) %0.2f", average);
}

// calculate the distance between two points.
void program15(){

}

// read an amount (integer value) and break the amount into the smallest possible number of bank notes.
void program16(){

}

// convert a given integer (in seconds) to hours, minutes and seconds.
void program17(){

}

// convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
void program18(){

}

// accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
void program19(){

}

// print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
void program20(){
    
}