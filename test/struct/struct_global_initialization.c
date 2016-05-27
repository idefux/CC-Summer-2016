struct s {
  int a;
  int b;
  struct s* next;
  //int c[10];
};

struct s* head = (struct s*) 0;

struct s* next(struct s* entry) {
  return entry->next;
}

int main() {
  int res;
  struct s* s1;
  struct s* s2;
  struct s* s3;
  struct s* temp;

  s1 = (struct s*) malloc (3 * 4);
  s2 = (struct s*) malloc (3 * 4);
  s3 = (struct s*) malloc (3 * 4);

  s1->a = 18;
  s1->b = 19;
  s1->next = (struct s*) 0;
  head = s1;

  s2->a = 21;
  s2->b = 22;
  s2->next = s1;
  head = s2;

  s3->a = 105;
  s3->b = 36;
  s3->next = s2;
  head = s3;

  temp = next(next(head));

  res = temp->b;
  return res; // should be 19;
}
