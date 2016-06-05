int main() {
  int x;
  int y;
  int z;

  x = 1;
  y = 1;
  z = 0;

  while (x && y) {
    z = z + 1;
    x = x - 1;
  }

  return z; // 1
}
