# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>

int main(void)
{
  pid_t pid = fork();
  // processo filho comeca
  if (pid == 0) {
    printf("child process pid: %d", getpid()); 
  } else {
    // processo pai espera por 11 segundos
    sleep(11);
    // processo filho ja terminou, mas o processo pai ainda nao sabe
  }
  // processo filho termina
  return 0;
}

