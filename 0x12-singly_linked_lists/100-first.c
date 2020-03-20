#include<stdio.h>
void before_main(void) __attribute__((constructor));
/**
 *before_main - executed fun before the main
 */
void before_main(void)
{
printf("You're beat! and yet, ");
printf("you must allow,\nI bore my house upon my back!\n");
}
