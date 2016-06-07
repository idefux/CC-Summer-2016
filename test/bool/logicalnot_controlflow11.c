int isEven(int a) {
  if (a % 2 == 0)
    return 1;
  else
    return 0;
}

int isNeg(int a) {
  if (a < 0)
    return 1;
  else
    return 0;
}

int main() {
  int a;

  a = 7;

  if (!(isNeg(a) && isEven(a)))
    return 77; // here
  else
    return 333;
}
