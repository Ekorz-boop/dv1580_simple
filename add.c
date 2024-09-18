#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Implement a solution that takes the first two arguments (argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 

int main(int argc, char *argv[]){
  int x1 = argv[0].isdigit();
  int x2 = argv[1].isdigit();
  if (x1 != 0 && x2 != 0) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n", a+b);
  }
  else {
    printf("-ERROR-");
  }
  return 0;
}
