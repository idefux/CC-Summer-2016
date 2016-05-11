int* y;
int z[4];

int main() {
  int* a;
  int b;
  int x[5];

  b = 33;
  *a = 44;

  x[0] = 5;
  x[1] = 6;
  x[2] = 7;

  y = malloc(5 * 4);

  z[2] = *(x + 2) * 7; // 49

  *y = 15 + x[0]; // 20
  *(y + 1) = 16 + *(x + 1); // 22
  *(y + 2) = y[0] + y[1] + *(z + 2); // 91

  return *(y + 2);
}
