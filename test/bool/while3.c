int main() {
  int a;
  int b;
  int c;
  int z;

  a = 0;
  b = 0;
  c = 0;
  z = 0;

  while (!(a || b || c)) {
    z = z + 1;
    a = a + 1;
  }

  return z; // 1
}
