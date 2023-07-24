#include <stdlib.h>
#include <stdio.h>
#include "psum_linear.h"


void prefix_sum(float * ArrIn, float * ArrOut, int ent_count){
  int i;
  int j;


  for(i = 0, j=-1; i < ent_count; i++, j++){
    if(i == 0){
      ArrOut[i] = ArrIn[i];
    }
    else{
      ArrOut[i] = ArrIn[i] + ArrIn[j];
    }
  }

  return;
}
