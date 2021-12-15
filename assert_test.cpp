/* assert example */
#include <stdio.h>  /* printf */
#include <assert.h> /* assert */
void print_number(int *myInt)
{
    assert(myInt != NULL);
    printf("%d\n", *myInt);
}

void print_number(int myInt)
{
    assert(myInt != 10);
    printf("%d\n", myInt); // Expression: myInt != 10
}

int main()
{
    int a = 10;
    int *b = NULL;
    int *c = NULL;

    b = &a;
    // Assertion failed!
    print_number(a); //Expression: myInt != 10
    print_number(b);
    print_number(c);

    return 0;
}