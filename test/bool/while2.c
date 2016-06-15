int main() {
  int a;
  int b;
  int c;
  int z;

  a = 1;
  b = 1;
  c = 4;
  z = 0;

  while (a && b && c) {
    z = z + 1;
    c = c - 1;
  }

  return z; // 4
}
