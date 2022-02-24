#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  for (int i = 0; i < 12; i++) {
    printf("%d segundo(s)\n", i + 1);
    system("ps -l | grep Z");
    printf("\n");
    sleep(1);
  }
  return 0;
}
