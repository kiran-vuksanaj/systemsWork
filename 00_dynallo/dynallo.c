// What's up with this?
// -Kiran Vuksanaj
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printarray(int *ary, size_t ARRAY_SIZE);

int main(){
  printf("Whats up with this?\n\t--Kiran Vuksanaj\n\n");
  time_t seed = time(NULL);
  srand(seed);
  printf("seed (time): %lu\n",seed);
  size_t ARRAY_SIZE = rand() % 15;
  int ary[ ARRAY_SIZE ];
  printf("ARRAY_SIZE = %lu\n",ARRAY_SIZE);
  printf("sizeof( ary ) = %lu\n", sizeof( ary ) );

  int i;
  for(i = 0; i < ARRAY_SIZE; i++ ) {
    ary[i] = rand() % 50;
  }
  printarray(ary,ARRAY_SIZE);
  return 0;
}

void printarray(int *ary, size_t ARRAY_SIZE){
  printf("[ ");
  int i;
  for( i = 0; i < ARRAY_SIZE; i++ ) {
    printf("%d",ary[i]);
    if( i != ARRAY_SIZE - 1) printf(", ");
  }
  printf(" ]\n");
}
