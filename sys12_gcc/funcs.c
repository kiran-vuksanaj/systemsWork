#include<stdlib.h>

int arrayAvg(int *aryP,int aryLength){
  int out = 0;
  int i;
  for( i = 0; i < aryLength; i++){
    out += aryP[i];
  }
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
