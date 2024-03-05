
#include <stdio.h>

// Function with an int parameter and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}

// Function with two int parameters and int return type
int add(int a, int b)
{
    return a + b;
}
  
int main()
{
    // fp_fun is a pointer to function fun() 
    // This is equivalent to
    //   void (*fp_fun)(int);
    //   fp_fun = &fun; 
    
    void (*fp_fun)(int) = &fun;
    int (*fp_add)(int, int) = &add;
  
    int a = 7;
    int b = 13;

    (*fp_fun)(10);
    int c = (*fp_add)(a, b);

    printf("The sum of %d and %d = %d\n)", a, b, c);
  
    return 0;
}