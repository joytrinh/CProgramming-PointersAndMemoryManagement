/******************************************************************************

Activity: malloc and free

1.What would the line
printf("a = %d, b = %d, c = %f\n", *a, *b, *c);
print to the screen if placed right before the
return 0;
line?

=> The result is unpredictable and may be different from one system to the next

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *a, *b;
  float *c;
  a = (int *) malloc(sizeof(int));
  *a = 1;
  b = (int *) malloc(sizeof(int));
  *b = 2;
  free(a);
  free(b);
  c = (float *) malloc(sizeof(float));
  *c = 3.5;
  free(c);
  return 0;
}
