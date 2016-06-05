int main() {
  int x;
  int y;
  int z;

  x = 1;
  y = 0;

  z = !(x || y);

  return z; // 0
}
