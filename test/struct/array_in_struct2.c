struct s {
  int a;
  int b[10][3];
};

int main() {
  struct s* s1;
  struct s* s2;

  s1 = (struct s*) malloc(31 * 4);
  s2 = (struct s*) malloc(31 * 4);

  s1->a = 5;
  s1->b[3][0] = 13;


  s2->a = 200;
  s2->b[5][1] = 205;
  s2->b[5][2] = 501;

  return s1->a + s2->a + s1->b[3][0] + s2->b[5][1] + s2->b[5][2]; // 5 + 200 + 13 + 205 + 501= 924
}
