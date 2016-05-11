int f(int* a) {
  a[0] = 20;
  a[1] = 30;
}

int main() {
  int x[10];

  f(x);

  return x[1];
}
