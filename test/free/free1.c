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

  x = 0;

  x = x + f();
  x = x + f();
  x = x + f();

  return x;
}
