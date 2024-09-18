#include <stdio.h>
#include <stdlib.h>

// Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) and calculate a1*a2. Here, verify that the arguments are real numbers.

int main(int argc, char *argv[]){
  // Verify that arguments are real numbers
  

  double a1 = atof(argv[1]);
  double a2 = atof(argv[2]);
  printf("%f\n", a1*a2);
  return 0;
}
