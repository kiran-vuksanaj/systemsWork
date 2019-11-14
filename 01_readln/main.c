#include<stdio.h>
#include<stdlib.h>

#include<fcntl.h>

#include"../csv_c/csv.h"

int main() {
  int fd = open("testfile.txt",O_RDONLY);
  char *ln = readln(fd);
  while(ln) {
    printf("[%s]\n",ln);
    free(ln);
    ln = readln(fd);
  }
  return 0;
}
