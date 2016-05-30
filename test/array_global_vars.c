int x;
int array1[10];
// declare array as global variable
// array size must be constant
// so this is also possible
//int ARRAY_SIZE = 8;
//int array2[ARRAY_SIZE];
int array2[8];

//array1[0] = 5; // assignment in global scope

int main() {

  array1[0] = 5;
  array2[3] = 7; // assignment

  return array2[3] + array1[0]; // 12
}
