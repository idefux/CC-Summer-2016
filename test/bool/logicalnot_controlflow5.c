int main() {
  int a;
  int b;
  int x;

  a = 0;
  b = 0;

  if (!(a || b))
    x = 5;
  else
    x = 27;

  return x; // 5
}
