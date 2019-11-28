#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int count_env_var = 0;
  for (p = environ; *p != NULL; count_env_var++, p++);
  printf("Number of environment variables: %d\n", count_env_var);
}
/*
 * #!bin/bash
 * echo "Launch without additional local variables"
 * ./hello
 * export var1="usless info"
 * echo "Launch with 1 additonal local variable"
 * ./hello
 * export var2="efef"
 * export var3=5
 * export var4=123
 * echo "Launch with 4 additional local variables"
 * ./hello
*/
