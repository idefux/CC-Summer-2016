int main() {
  int x;
  int y;
  int z;

  x = 1;
  y = 0;

  if (x || y)
    z = 77;
  else
    z = 88;

  return z; // 77
}
