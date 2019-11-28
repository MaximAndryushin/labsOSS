#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc, char* argv[])
{
  pid_t cur_pid;
  for (int i = 0; i < 10; i++) {
   if(fork() == 0)
	pause();
  }
  wait(NULL); 	
  return 0;
}

