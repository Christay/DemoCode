#include <stdlib.h>
#include <stdio.h>
#include "psum_linear.h"

int main(int argc, char ** argv){
  float I[3] = {1.0,2.0,3.0};
  float * O;
  int i;
  

  O = (float *)malloc(sizeof(3*sizeof(float)));

  prefix_sum(I, O, 3);

  for(i = 0; i < 3; i++){
    printf("Array Index %i is %f  \n", i, O[i]);
  }

  return 0;

}
