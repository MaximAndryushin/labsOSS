#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int all = atoi(argv[1]), count = 0;
  for (p = environ; *p != NULL && count < all; count++, p++)
    printf("%d) %s\n", count + 1, *p);
}
