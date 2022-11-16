#include "user.h"

void test(void) {
  int retFork;
  for(int i=-5;i<=5;i++) {
    retFork = fork();
    if(retFork == 0) {
      int n = nice(i*4);
      int k = 30;
      while(k--)
        printf(1, "Child %d\n", n);
      exit();
    }
  }
  for(int i=0;i<11;i++) {
    wait();
  }
}

int main(void) {
  test();
  exit();
}