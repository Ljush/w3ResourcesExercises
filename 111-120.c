// https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php
// 150 C exercises p1 ( 111 - 120 )
#include <stdio.h>
void program111();
void program112();
void program113();
void program114();
void program115();
void program116();
void program117();
void program118();
void program119();
void program120();

// int main(){
//     program120();
//     return 0;
// }

// accepts an integer from the user and divides all numbers between 1 and 100. Print those numbers where the remainder value is 3.
void program111(){
    int input;
    printf("Enter integer: ");
    scanf("%d", &input);
    for (int i = 1; i < 101; i++){
        if ((input % i) == 3){
            printf("\nDividing %d by %d has a remainder of 3", i, input);
        }
    }
}

// reads seven integer values from the user and finds the highest value and its position
void program112(){
    int max=0, index=0;
    int nums[7] = {0, 0, 0, 0, 0, 0, 0};
    printf("Enter 7 ints: ");
    scanf("%d %d %d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6]);
    for (int i = 0; i < 7; i++){
        if (nums[i] > max){
            max = nums[i];
            index = i;
        }
    }
    printf("\nPosition: %d\nMax int: %d\n", index, max);
}

// create and print the sequence of the following example
void program113(){
    int a = 1, b = 100;
    while (b >= 0){
        printf("a = %d\tb = %d\n", a, b);
        a = a+5;
        b = b-10;
    }
}

// accepts two integer values and calculates the sum of all even values between them.
void program114(){
    int a, b, i, j=0;
    printf("Enter 2 ints: ");
    scanf("%d %d", &a, &b);
    if (a > b){
        for (i = b+1; i < a; i++){
            j = j + i;
        }
        printf("Sum all of ints between %d and %d: %d", a, b, j);
        return;
    }
    else{
        for (i = a+1; i < b; i++){
            j = j + i;
        }
        printf("Sum all of ints between %d and %d: %d", a, b, j);
        return;
    }
    return;
}

// accepts a pair of numbers from the user and prints the sequence from the lowest to the highest number. Also, print the average value of the sequence.
void program115(){
    int a, b, i, count = 0, max, sum = 0;;
    printf("Enter 2 ints: ");
    scanf("%d %d", &a, &b);
    if (a < b){
        i = a;
        max = b;
    }
    else{
        i = b;
        max = a;
    }
    printf("Sequence of ints\n");
    for (; i < max; i++){
        printf("%d ", i);
        count++;
        sum = sum + i;
    }
    float average;
    average = sum / count;
    printf("Average of int sequence.\nAverage: %f", average);
}
// accepts a pair of numbers from the user and prints "Ascending order" if the two numbers are in ascending order, otherwise prints, "Descending order".
void program116(){
    int a, b;
    printf("Enter 2 ints: ");
    scanf("%d %d", &a, &b);
    if (a < b){
        printf("%d\n%d\nAscending order.", a, b);
    }
    else{
        printf("%d\n%d\nDescending order.", a, b);
    }
}

// reads two integers and divides the first number by second, 
// print the result of this division with two digits after the decimal point and prints “Division not possible..!” if the division is not possible.
void program117(){
    int a, b;
    float c;
    printf("Enter 2 ints: ");
    scanf("%d %d", &a, &b);
    if ((a%b) != 0){
        printf("Clean division not possible.\n");
        return;
    }
    else{
        c = (a / b);
        printf("%.2f\n", c);
        return;
    }
}

// reads five subject marks (0-100) of a student and calculates the average of these marks.
void program118(){
    int a, b, c, d, e;
    float f;
    printf("Enter 5 marks (0-100): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f = (a + b + c + d + e);
    f = f / 5;
    printf("\n%0.2f", f); return;
}

// calculate the sum of all numbers between two given numbers (inclusive) not divisible by 7.
void program119(){
    int a, b, sum=0, min, max;
    printf("Enter 2 ints: ");
    scanf("%d %d", &a, &b);
    if (a < b){
        min = a;
        max = b;
    }
    else{
        max = a;
        min = b;
    }
    for (int i = min; min < max+1; i++){
        if ((i % 7) == 0){
            continue;
        }
        sum = sum + i;
    }
    printf("Sum of all numbers between said numbers (inclusive) not divisible by 7:\n%d", sum);
    return;
}

// print a sequence from 1 to a given (integer) number, inserting a comma between these numbers. There will be no comma after the last character.
void program120(){
    int a, i;
    pritnf("Enter an int: ");
    scanf("%d", &a);
    printf("\n");
    for (i = 1; i < a+1; i++){
        if (i == a+1){
            printf("%d\n");
            return;
        }
        printf("%d, ");
    }
}