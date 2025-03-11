#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;      // Declare an integer variable x
    int *p = &x;     // Declare a pointer p and store the address of x

    printf("Value of x: %d\n", x);        // Prints 10
    printf("Address of x: %p\n", &x);     // Prints memory address of x
    printf("Value stored in p: %p\n", p); // Prints same address as &x
    printf("Value pointed to by p: %d\n", *p); // Dereferencing: Prints 10

    *p = 20;  // Modify value at the address stored in p (changes x)
    printf("New value of x: %d\n", x);  // Prints 20

    return 0;
}
