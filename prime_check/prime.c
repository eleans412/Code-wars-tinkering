#include <stdbool.h>

bool is_prime(int num)
{
  // If num is less than 1, not a prime number
  if (num < 1) {
    return false;
  }
  
  // If num is between 0-1, as they are neither prime or composite
  else if (num == 0 || num == 1) {
    return false;
  }
  
  int i = 1;
  int prime_check = 0;
  // Loop to find whether num can be divided by numbers other than itself and 1
  for (i = 1; i <= num; i++) { 
    if (num % i == 0) {
      // Increments for each factor num is divisible by  
      prime_check++;
    }
  }
  // If a prime number, will only be divisible by 2 factors, itself and 1
  if (prime_check == 2) {
    return true;
  }
  return false;
}