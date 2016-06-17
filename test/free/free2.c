int f() {
  int* a;
  int b;

  a = (int*) malloc(2 * 4);

  *a = 42;
  *(a + 1) = 43;

  b =  *a + *(a + 1);
  free(a);
  return b;
}

int main() {
  int x;
  int y;

  x = 0;

  y = malloc(10 * 4);
  x = x + f();
  y = malloc(3 * 4);
  x = x + f();
  y = malloc(4 * 4);
  x = x + f();

  return x;
}
