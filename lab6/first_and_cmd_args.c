#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int count_env_var = 0;
  int count_cmd_args = argc - 1;//first arg is name of exec file
  for (p = environ; *p != NULL; count_env_var++, p++);
  printf("Number of environment variables: %d\n", count_env_var);
  printf("Number of commandline arguments: %d\n", count_cmd_args);
}

