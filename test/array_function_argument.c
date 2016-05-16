void f(int x[10]) {
  x[0] = 10;
  x[1] = 20;
}

int main() {
  int* a;

  a = malloc(10 * 4);

  f(a);

  return a[0] + a[1];
}
