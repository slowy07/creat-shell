#include <stdio>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t child_pid = fork();

  if (child_pid == 0) {
    print("### child ###\nCurrent PID: %d and Child PID: %d\n", getpid(), child_pid);
  } else {
    printf("### Parent ###\nCurrent PID: %d and Child PID: %d\n", getpid(), child_pid);
  }

  return 0;
}
