/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int counter, n, sum;
  sum = 0;
  
  printf("Enter number of repetitions: ");
  scanf("%d", &n);

  for(counter = 1; counter <= n; counter++){

    sum += counter;
    
    if(counter == n){
      printf("%d = ", counter);
    }else{
      printf("%d + ", counter);
    }
    
  }

  printf("%d", sum);
  
  return 0;
}

