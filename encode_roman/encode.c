
char *solution(int n) {
  char roman[10000] = {0};
  int i = 0;
  // Loop until total n value has been accounted for
  // >= because we are taking away from the total n value
  while (n != 0) {
    // 1000 (M)
    if (n >= 1000) {
      roman[i] = 'M';
      i++;
      n = n - 1000;
    }
    // 900 (CM)
    // Increment array string twice to account for both characters
    // do the same with 400, 90, 40, 9 and 4
    else if (n >= 900) {
      roman[i] = 'C';
      i++;
      roman[i] = 'M';
      i++;
      n = n - 900;
    }
    // 500 (D)
    else if (n >= 500) {
      roman[i] = 'D';
      i++;
      n = n - 500;
    }
    // 400 (CD)
    else if(n >= 400) {
      roman[i] = 'C';
      i++;
      roman[i] = 'D';
      i++;
      n = n - 400;
    }
    // 100 (C)
    else if (n >= 100) {
      roman[i] = 'C';
      i++;
      n = n - 100;
    }
    // 90 (XC)
    else if (n >= 90) {
      roman[i] = 'X';
      i++;
      roman[i] = 'C';
      i++;
      n = n - 90;
    }
    // 50 (L)
    else if (n >= 50) {
      roman[i] = 'L';
      i++;
      n = n - 50;
    }
    // 40 (XL)
    else if(n >= 40) {
      roman[i] = 'X';
      i++;
      roman[i] = 'L';
      i++;
      n = n - 40;
    }
    // 10 (X)
    else if (n >= 10) {
      roman[i] = 'X';
      i++;
      n = n - 10;
    }
    // 9 (IX)
    else if (n >= 9) {
      roman[i] = 'I';
      i++;
      roman[i] = 'X';
      i++;
      n = n - 9;
    }
    // 5 (V)
    else if (n >= 5) {
      roman[i] = 'V';
      i++;
      n = n - 5;
    }
    // 4 (IV)
    else if (n >= 4) {
      roman[i] = 'I';
      i++;
      roman[i] = 'V';
      i++;
      n = n - 4;
    }
    // 1 (I)
    else if (n >= 1) {
      roman[i] = 'I';
      i++;
      n = n - 1;
    }
  }

  return roman;
}