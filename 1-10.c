// https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php
// 150 C exercises p1 ( 1 - 50 )
#include <stdio.h>
// Write a C program to print your name, date of birth. and mobile number.
void program1() {
    printf("\nName: Py Thoon\n");
    printf("DOB:  Jan 1st 1999\n");
    printf("P#:   555-555-1234\n");
}
// Write a C program to print a block F using hash (#) 
// where the F has a height of six characters and width of five 
// and four characters. And also to print a big 'C'
void program3() {
    printf("\n#####\n#\n#\n#####\n#\n#\n#\n\n");
    printf("   #####\n ##\t##\n#\n#\n#\n#\n#\n ##\t##\n   #####\n\n");
}

// Write a C program to print the following characters in a reverse way.
// Test Characters: 'X', 'M', 'L'; Expected Output: The reverse of XML is LMX
void program4() {
    char char1 = 'X', char2 = 'M', char3 = 'L';
    printf("Reverse of %c%c%c is %c%c%c\n", char1, char2, char3, char3, char2,
    char1);
}

// Write a C program to compute the perimeter and area of a rectangle
// with a height of 7 inches. and width of 5 inches.
// Expected Output: Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches
void program5() {
    int height = 7, width = 5, perimeter, area;
    perimeter = height + width + height + width;
    area = height * width;
    printf("\nPerimeter = %d\nArea = %d\n", perimeter, area);
}

// Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output: Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches
void program6() {
    int perimeter, area, circumference, radius;
    radius = 6;
    area = ((radius * radius) * 3.14);
    circumference = ((3.14 * 2) * radius);
    printf("\nRadius of %d", radius);
    printf("\nArea of the circle = %d\nCircumference of the circle = %d\n",
    area, circumference);
}

// Write a C program to display multiple variables.
// Sample Variables : a + c, x + c, dx + x, 
// ((int)dx) + ax, a + x, s + b, ax + b, s + c, ax + c, 
// ax + ux 
void program7() {
    // declaration
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("\n%d", a + c);
    printf("\n%f", x + c);
    printf("\n%lf", dx + x);
    printf("\n%ld", ax + (int)dx);
    printf("\n%f", a + x);
    printf("\n%d", s + b);
    printf("\n%ld", ax + b);
    printf("\n%d", s + c);
    printf("\n%ld", ax + c);
}
// Convert specified days into years, weeks and days. Ignore leap year.
// Test Data: Number of days: 1329 Expected Output: Years: 3 Weeks: 33 Days: 3
void program8(){
    int numDays = 1329;
    int years, weeks, days;
    years = numDays/365;
    weeks = (numDays % 365)/7;
    days = numDays - ((years * 365) + (weeks * 7));
    printf("\n%d, %d, %d", years, weeks, days);
}

// Write a C program that accepts two integers from the user and calculates the sum of the two integers.
void program9(){
    int num1, num2;
    printf("input two ints: ");
    scanf("%d", &num1);
    scanf(" %d", &num2);
    int result = num1 + num2;
    printf("\nSum: %d", result);
}

// Write a C program that accepts two integers from the user and calculates the product of the two integers.
void program10(){
    int num1, num2;
    printf("input two ints: ");
    scanf("%d", &num1);
    scanf(" %d", &num2);
    int result = num1 * num2;
    printf("\nProduct: %d", result);
}

int main(){
    program1();
    program3();
    program4();
    program5();
    program6();
    program7();
    program8();
    program9();
    program10();
    return 0;
}