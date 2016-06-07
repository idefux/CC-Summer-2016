int main() {
  int a;
  int b;
  int x;

  a = 0;
  b = 1;
  x = 0;

  while (!(a && b)) {
    x = x + 1;
    if (!(x<10))
      a = 1;
  }


  return x; // 10
}
