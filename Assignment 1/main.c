#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const float pi = 3.14159;

void sum();
void subtraction();
void multiplication();
void division();
void squareroot();
void mpower();
void circleArea();
void circlePerimeter();

int main() {
    int r;

    sum();
    subtraction();
    multiplication();
    division();
    squareroot();
    power();

    printf("\nEnter the radius of a circle:\n");
    scanf("%d", &r);
    circlePerimeter(r);
    circleArea(r);

    return 0;
}
void sum() {
    int result, a, b;
    printf("Enter two numbers to add:\n");
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

}
void subtraction() {
    int result, a, b;
    printf("Enter two numbers to subtract:\n");
    scanf("%d %d", &a, &b);
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
}
void multiplication() {
    int result, a, b;
    printf("Enter two numbers to multiply:\n");
    scanf("%d %d", &a, &b);
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
}
void division() {
    int a, b;
    float result;
    printf("Enter two numbers to divide:\n");
    scanf("%d %d", &a, &b);
    result = a / b;
    printf("%d / %d = %.2f\n", a, b, result);
}
void squareroot() {
    int a;
    double result;
    printf("Enter one number to calculate the square root:\n");
    scanf("%d", &a);
    result = sqrt(a);
    printf("sqrt(%d) = %.2lf\n", a, result);
}
void power() {
    int result, a, b;
    printf("Enter one number and the power to raise it to:\n");
    scanf("%d %d", &a, &b);
    result = pow(a, b);
    printf("%d ^ %d = %d\n", a, b, result);
}
void circleArea(int radius) {
    double area;
    area = (double) pi * radius * radius;
    printf("The area of the circle is: %.2lf.\n", area);
}

void circlePerimeter(int radius) {
    double perimeter;
    perimeter = (double) 2 * pi * radius;
    printf("The perimeter of the circle is: %.2lf.\n", perimeter);
}
