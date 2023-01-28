#include "lists.h"

void print_words(void) __attribute__((constructor));

/**
 * print_words - prints words function before main is executed
 */

void print_words(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
