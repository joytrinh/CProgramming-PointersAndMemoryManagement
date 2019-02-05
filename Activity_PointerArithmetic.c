/******************************************************************************

Activity: pointer arithmetic
1. Suppose you have declared an array of integers by typing

int numbers[] = {4, -1, 8, 3, 0, -11};

What is *(numbers+4) ? => numbers[0 + 4] = numbers[4] = 0

2. Suppose you have declared an array of integers by typing

int numbers[] = {4, -1, 8, 3, 0, -11};

What is *numbers+4 ? Notice that the only difference to the previous question is the omission of parenthesis.

=> numbers[0] + 4 = 4 + 4 = 8

3. Suppose (again...) you have declared an array of integers by typing

int numbers[] = {4, -1, 8, 3, 0, -11};

What is numbers[10] ?

=>Random and depends on what was stored in memory here before

4. Suppose (for the last time) you have declared an array of integers by typing

int numbers[] = {4, -1, 8, 3, 0, -11};

You have furthermore declared a pointer via

int *ptr;

and initialized it via

ptr = numbers + 2; => numbers[0 + 2] = numbers[2]

and then executed ptr++; => numbers[2+1] = numbers[3]

What is *ptr ? => 3
*******************************************************************************/
