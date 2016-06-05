struct s {
  int a;
  int b;
  struct s* next;
  //int c[10];
};

int a;
struct s* head;
int b;
//struct s* new;
//struct s* tmp;

void createNewStruct() {
  int loc_a;
  int loc_b;
  struct s* new;

  loc_a = 222;
  loc_b = 444;

  //new = malloc(13 * 4);
  new = (struct s*) malloc(3 * 4);

  new->a = 1;
  new->b = 2;
  //new->c[0] = 10;
  //new->c[1] = 11;

  new->next = head;
  head = new;
}

struct s* next(struct s* entry) {
  return entry->next;
}

int main() {
  int res;
  struct s* tmp;

  head = (struct s*) 0;

  a = 7777;
  head = (struct s*) 5555;
  head = (struct s*) 0;
  b = 8888;

  createNewStruct();
  createNewStruct();

  tmp = next(head);
  res = head->a + tmp->b;
  //res = head->a + head->b;
  return res;
}
