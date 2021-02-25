
#include<stdio.h>
#include<num.h>
int armstrong(int n)
 {
    
   int arms = n; 
   int check, rem, sum = 0;

   check = arms;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }
      
   return sum;
}