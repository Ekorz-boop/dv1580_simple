#include <stdio.h>
#include <stdlib.h>

// Implement a solution that takes the first two arguments (argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (a <= 0 || b <= 0) {
    printf("ERROR");
    return 1;
  }
  printf("%d\n", a+b);
  return 0;
}
