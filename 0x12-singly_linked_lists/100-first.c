#include <stdio.h>

void myFirstCleanup(void) __attribute__ ((constructor));

/**
* myFirstCleanup - prints a sentence before the main
* function is executed
*/
void myFirstCleanup(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
