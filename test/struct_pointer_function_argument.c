struct s {
  int a;
  int b;
  int* c;
  int d[10];
};

int f(struct s* sp) {
  return 1;
}
int b;
struct s* r;

int main() {
  struct s* p;
  struct s* q;
  int a;

  return f(r);
}
