/**************************************************************
 * Advance Pointer C program
 * Written this program to revice c programming pointer concept
 *
 * Author : Lal Bosco Lawrence
 * Date   : 15-June-2018
 **************************************************************/

#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
 
int main()
{
    // fun_ptr is a pointer to function fun() 
    void (*fun_ptr)(int) = &fun;
 
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun; 
    */
 
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);
 
    return 0;
}
