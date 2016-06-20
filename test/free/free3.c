int main() {
  int* a;
  int* b;
  int* c;
  int* d;
  int* e;
  int* f;

  a = malloc(3 * 4);
  b = malloc(2 * 4);
  c = malloc(2 * 4);
  d = malloc(7 * 4);
  e = malloc(2 * 4);

  free(b);
  free(c);
  free(e);

  f = malloc(2 * 4);
  f = malloc(2 * 4);
  f = malloc(2 * 4);
  f = malloc(2 * 4); // cannot reuse here

  *f = 42;

  return *f;
}
