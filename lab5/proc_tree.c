#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc, char* argv[])
{
  pid_t cur_pid, wait_p;
  int status;
  switch(cur_pid = fork()) {
    case -1: {
      exit(EXIT_FAILURE);
    }
    case 0:  {
      printf("Это потомок\n");
      printf("PID - %d\n", getpid());
      printf("PPID - %d\n", getppid());
      if (argc == 1)
	pause();
      _exit(atoi(argv[1]));
    }
    default: {
      do {
        wait_p = waitpid(cur_pid, &status, WUNTRACED | WCONTINUED);
	if (wait_p == -1) {
	  exit(EXIT_FAILURE);
	}
	else if (WIFEXITED(status)) {
	  printf("exited, status=%d\n", WEXITSTATUS(status));
	}
	else if (WIFSIGNALED(status)) {
          printf("killed by signal %d\n", WTERMSIG(status));
	}
	 else if (WIFSTOPPED(status)) {
          printf("stopped by signal %d\n", WSTOPSIG(status));
        }
	 else if (WIFCONTINUED(status)) {
           printf("continued\n");
        }
      } while (!WIFEXITED(status) && !WIFSIGNALED(status));
      exit(EXIT_SUCCESS);
    }
  }		
  return 0;
}
/*
 * #!/bin/bash
 * ./proc_tree &
 * pstree $$
 */
