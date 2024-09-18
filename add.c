#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Implement a solution that takes the first two arguments (argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 

int main(int argc, char *argv[]){
  int x1 = isdigit(argv[1]);
  int x2 = isdigit(argv[2]);
  printf("%d\n", x1);
  if (x1 != 0 && x2 != 0) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n", a+b);
  }
  else {
    printf("-ERROR-\n");
  }
  return 0;
}
