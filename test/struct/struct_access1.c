struct s1 {
  int* string;
  struct s1* next;
  int a;
};

struct s1* structPointer;

int* str1 = (int*)'a';
int* str2 = (int*)'b';
int* str3 = (int*)'c';
int* str4 = (int*)'d';
int* str5 = (int*)'e';
int* str6 = (int*)'f';
int* str5 = (int*)'g';
int* str8 = (int*)'h';
int* str9 = (int*)'i';

int main() {
  int i;
  struct s1* s;

  i = 0;
  structPointer = (struct s1*) 0;

  s = (struct s1*)malloc(3 * 4);
  s->a = i;
  s->string = (int*) str1;
  s->next = structPointer;
  structPointer = s;
  i = i + 1;

  s = (struct s1*)malloc(3 * 4);
  s->a = i;
  s->string = (int*) str2;
  s->next = structPointer;
  structPointer = s;
  i = i + 1;

  s = (struct s1*)malloc(3 * 4);
  s->a = i;
  s->string = (int*) str3;
  s->next = structPointer;
  structPointer = s;
  i = i + 1;

  i = 0;
  s = structPointer;
  while (s != (struct s1*)0) {
    i = i + s->a;
    s = s->next;
  }

  return i;
}
