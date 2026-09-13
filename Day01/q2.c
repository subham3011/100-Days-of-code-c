/*
 * Name : Subham Kumar Pandey
 * SAP ID : 590035529
 * Day : 06 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input two numbers and display their sum,
 * difference, product, and quotient.
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    int sum, diff, product, quotient;

    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
           sum, diff, product, quotient);

    return 0;
}
