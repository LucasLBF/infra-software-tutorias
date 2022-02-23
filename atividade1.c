# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>

int main(void)
{
  
  pid_t pid = fork();
  if (pid == 0) {
    printf("child process pid: %d", getpid()); 
  } else {
    sleep(15);
  }
  return 0;
}

