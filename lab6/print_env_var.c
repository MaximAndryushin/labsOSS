#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int count = 0;
  for (p = environ; *p != NULL && count < 10; count++, p++)
    printf("%d) %s\n", count + 1, *p);
  return 0;
}
