int main() {
  int a[10];
  int i;
  i = 0;

  while (i < 10) {
    a[i] = i + 200;
    i = i + 1;
  }

  return a[9];
}
