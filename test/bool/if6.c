int main() {
  int x;
  int y;
  int z;

  x = 0;
  y = 1;

  if (x || y)
    z = 77;
  else
    z = 88;

  return z; // 77
}
