int add(int x, int y)
{
  // Solution uses recursion to add
  if (!x) {
    return y;
  }
  else {
    return add((x & y) << 1, x ^ y);
  }
  
  return 0;
}