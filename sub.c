#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) and calculate a1-a2. At this point, assume the arguments are positive INTEGERS only, but note. The result can be negative. 

int main(int argc, char *argv[]){
  int x1 = isdigit(argv[1]);
  int x2 = isdigit(argv[2]);
  if (x1 != 0 && x2 != 0) {
    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);
    printf("%d\n", a1-a2);
  }
  else {
    printf("-ERROR-\n");
  }
  return 0;
}
