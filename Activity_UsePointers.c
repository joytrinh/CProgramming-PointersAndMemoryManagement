/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //1.What is the output of the following program:
    int i;
    int *iAdr = &i;
 
    *iAdr = 10;
 
    printf(" i = %d\n", i);//10
    printf(" *iAdr = %d\n", *iAdr);//10
 
    *iAdr = *iAdr - 2;
    printf(" i = %d\n", i);//8
    printf(" *iAdr = %d\n", *iAdr);//8
 
    (*iAdr) += 1;
    printf(" i = %d\n", i);//9
    printf(" *iAdr = %d\n", *iAdr);//9
 
    return 0;
}
/*
2. What is printed to the screen by the following program?
void myFunction(int); 
int main(void) {
  int i = 10;
  myFunction(i);
  printf("%d", i); //10
  return 0;
}

void myFunction(int j) {
    j = 20;
}
*/