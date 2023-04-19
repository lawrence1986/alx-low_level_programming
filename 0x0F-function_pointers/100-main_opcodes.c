#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])

{
int bytes, i;
char *arr;
/* Check for correct number of arguments */
if (argc != 2)
{
printf("Error\n");
exit(1);
}

/* Convert argument to integer */
bytes = atoi(argv[1]);

/* Check for valid argument */
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

/* Get address of main function and print its opcodes */
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}
