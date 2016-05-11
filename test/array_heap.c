int* x;

int main() {
  int* b;

  x = malloc(10 * 4); // allocate space on heap ($gp + )
  x[2] = 13; // assignment

  b = malloc(3 * 4);

  b[0] = 10;
  b[1] = 20;
  b[2] = 30;

  x[1] = b[0] + b[1] + b[2];

  return x[1] + x[2]; // 73
}
