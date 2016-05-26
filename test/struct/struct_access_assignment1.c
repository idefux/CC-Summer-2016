struct s {
  int a;
  int b;
};

int* g1;
struct s* s1;
struct s* s2;
struct s* s3;

int main() {
  int temp;


  g1 = malloc(4);
  s1 = malloc(2 * 4);
  s2 = malloc(2 * 4);
  s3 = malloc(2 * 4);

  temp = g1;

  s2->a = 2222;
  s2->b = 3333;

  temp = 25;
  temp = temp + 26;

  temp = s2->a + s2->b;

  return temp;
}
