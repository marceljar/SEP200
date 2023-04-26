#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
} Person;

void introduce(Person *p) {
    printf("Hi, my name is %s and I am %d years old.\n", p->name, p->age);
}

int main() {
    Person p;
    strcpy(p.name, "John");
    p.age = 30;
    introduce(&p);
    return 0;
}
