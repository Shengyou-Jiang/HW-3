#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>


int digit_sum(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + digit_sum(n / 10)); 
} 
  
int main() 
{   int num = readline("Enter an int: "); 
    int result = digit_sum(num); 
    printf("Sum of digits of %d is %d.\n", num, result); 
    return 0; 
} 
// sum of digits of 123456789 is 45.