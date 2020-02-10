#include "holberton.h"
int _islower(int ch)
{
  int c=ch;
  if ( c>=65 && c<=90)
    return (0);
    else
      return (1);
}
