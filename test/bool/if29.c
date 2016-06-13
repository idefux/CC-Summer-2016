int main() {
  int a;
  int b;
  int c;
  int d;
  int e;

  a = 0;
  b = 0;
  c = 1;
  d = 0;
  e = 0;

  if ((a || b) && (c || d))
    return 222;
  else
    return 5678;
}
