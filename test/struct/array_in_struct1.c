struct s {
  int a;
  int b[10];
};

int main() {
  struct s* s1;
  struct s* s2;

  s1 = (struct s*) malloc(11 * 4);
  s2 = (struct s*) malloc(11 * 4);

  s1->a = 5;
  s1->b[0] = 10;
  s1->b[1] = 11;
  s1->b[2] = 12;
  s1->b[3] = 13;
  s1->b[4] = 14;
  s1->b[9] = 19;

  s2->a = 200;
  s2->b[5] = 205;

  return s1->a + s2->a + s1->b[9] + s2->b[5]; // 5 + 200 + 19 + 205 = 429
}
