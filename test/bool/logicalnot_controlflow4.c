int main() {
  int a;
  int b;
  int x;

  a = 1;
  b = 1;

  if (!(a && b))
    x = 5;
  else
    x = 27;

  return x; // 27
}
