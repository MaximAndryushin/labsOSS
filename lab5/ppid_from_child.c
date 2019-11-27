#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[])
{
  int pid = fork(); 
  if (pid == 0) {
    printf("PID дочернего процесса - %d\n", getpid());
    printf("PPID дочернего процесса(PID родительского процесса) - %d\n", getppid());

  } 
  return 0;
}

