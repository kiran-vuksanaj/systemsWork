#include<stdio.h>
#include<stdlib.h>
#include"funcs.h"

int main(){
  int ARRAY_LENGTH = 10;
  int sampleArray[] = {5, 3, 4, 3, 4, 4, 4, 8, 9, 9};
  int* aryP = sampleArray;
  int arrayToCopyTo[ARRAY_LENGTH];
  int* copiedAry = arrayToCopyTo;
  printf("C file: sys10func.c \n");
  printf("array average: %lf \n",arrayAvg(aryP,ARRAY_LENGTH));

  printf("original array: [");
  for(int i=0;i<ARRAY_LENGTH;i++){
    printf("%d, ",aryP[i]);
  }
  printf("] \n");

  copyArray(aryP,arrayToCopyTo,ARRAY_LENGTH);

  printf("copied array: [");
  for(int i=0;i<ARRAY_LENGTH;i++){
    printf("%d, ",arrayToCopyTo[i]);
  }
  printf("] \n");

  char* sampleStr = "i wuv youuu";
  printf("sample string: %s, with length %d \n",sampleStr,strLength(sampleStr));

}
