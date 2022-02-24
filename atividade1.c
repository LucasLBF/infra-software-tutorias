#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  pid_t pid = fork();
  // processo filho comeca
  if (pid == 0) {
    printf("=====================================\n");
    printf("child process pid: %d\n", getpid());
    printf("=====================================\n");
  } else {
    // processo pai espera por 11 segundos
    sleep(11);
    // processo filho ja terminou, mas o processo pai ainda nao sabe
  }
  // processo filho termina
  return 0;
}
