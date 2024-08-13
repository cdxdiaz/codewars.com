#include <stdio.h>

typedef struct{
  int age;
  char *name;
} PERSON;

int main(void) {
  PERSON a = { 21, "Ant" };
  PERSON b = { 11};
  char *name1;
  char *name2;
  name1 = "Bird";
  name2 = "Bily";
  b.name = name1;
  printf("name = %s, age = %d\n", a.name, a.age);
  printf("name = %s, age = %d\n", b.name, b.age);
  printf("\n");
  b.name = name2;
  printf("name = %s", b.name);
  return(0);
}


