/*
 * Program to calculate the area of a rectangle.
 *
 * This program prompts the user to enter the length and width of a rectangle.
 * It then calculates the area using the formula:
 *     Area = length * width
 * Finally, it displays the computed area to the user, formatted to two decimal places.
 */

#include<stdio.h>

void main(){
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of the rectangle is: %.2f", area);
}