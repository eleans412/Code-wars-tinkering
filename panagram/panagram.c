#include <stdbool.h>

bool is_pangram(const char *str_in) {
  int i = 0;
  int count[26] = {0};
  int total = 0;
  
  // Loop through all the letters in the string
  for (i = 0; str_in[i] != '\0'; i++) {
    // If not a character, skip and move onto the next character
    if (str_in[i] >= ' ' && str_in[i] <= '@') {
      continue;
  
    }
    // If lower case letter, add to the count and mark in count 
    // that a character has been used
    if (str_in[i] >= 'a' && str_in[i] <= 'z') {
      total += !count[str_in[i] - 'a'];
      count[str_in[i] - 'a'] = 1;
    }
    // If upper case letter, do same as above but with upper case ASCII values
    else if (str_in[i] >= 'A' && str_in[i] <= 'Z') {
      total += !count[str_in[i] - 'A'];
      count[str_in[i] - 'A'] = 1;
    }
  }

    if (total == 26) {
      return true;
    }
    else {
      return false;
    }
  }
  