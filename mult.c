#include <stdio.h>
#include <stdlib.h>


// Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) and calculate a1*a2. Here, verify that the arguments are real numbers.

int main(int argc, char *argv[]){
  // Verify that arguments are real numbers
  int x1 = isdigit(argv[0]);
  int x2 = isdigit(argv[1]);
  if (x1 != 0 && x2 != 0) {
    double a1 = atof(argv[0]);
    double a2 = atof(argv[1]);
    printf("%f\n", a1*a2);
  }
  return 0;
}
