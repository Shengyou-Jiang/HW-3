#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>


int digit_sum(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return (n % 10 + digit_sum(n / 10));
  }
}
  
int main() {   
  int n = atoi(readline("Enter an int: ")); 
  int result = digit_sum(n); 
  printf("sum of digits of %d is %d.\n", n, result); 
  return 0; 
} 
