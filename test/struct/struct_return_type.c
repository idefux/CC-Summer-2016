struct s {
  int a;
  int b;
  struct s* next;
  //int c[10];
};

struct s* next(struct s* entry) {
  return entry->next;
}

int main() {
  int res;
  struct s* s1;
  struct s* s2;
  struct s* head;
  struct s* temp;

  head = (struct s*) 0;

  s1 = (struct s*) malloc (3 * 4);
  s2 = (struct s*) malloc (3 * 4);

  s1->a = 11;
  s1->b = 12;
  s1->next = (struct s*) 0;
  head = s1;

  s2->a = 21;
  s2->b = 22;
  s2->next = s1;
  head = s2;

  temp = next(head);

  res = temp->b;
  return res; // should be 12;
}
