#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) and calculate a1-a2. At this point, assume the arguments are positive INTEGERS only, but note. The result can be negative. 

int main(int argc, char *argv[]){
  int a1 = atoi(argv[0]);
  int a2 = atoi(argv[1]);
  if (a1 < 0 || a2 < 0) {
    return 0;
  }
  printf("%d\n", a1-a2);
  return 0;
}
