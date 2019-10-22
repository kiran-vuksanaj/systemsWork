// #include<stdio.h>
#include<stdlib.h>

double arrayAvg(int *aryP,int aryLength){
  double out = 0.0;
  int i;
  for( i = 0; i < aryLength; i++){
    out += aryP[i];
  }
  // printf("\n\n THIS IS JUST A TEST TO SEE WHETHER MAKE IS UPDATING THE CODE!! \n\n");
  return out / aryLength;
}
void copyArray(int *a0, int *a1, int size){
  int i;
  for( i = 0; i < size ; i++ ){
    a1[i] = a0[i];
  }
}
int strLength(char *str){
  int size = 0;
  while(str[size] != '\0') size++;
  return size + 1;
}
