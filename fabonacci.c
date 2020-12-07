#include<stdio.h>
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
printf("This is for us.");
printf("Enter the nth value: ");
scanf("%d", &n);
printf("Fibonacci series: ");
while(sum <= n)
{
printf("%d ", sum);
a = b; // swap elements
b = sum;
sum = a + b; // next term is the sum of the last two terms 
}
printf("This is the fabonacci series.");
return 0;
}