/*
  Prints out a value specified on the command line as an int, float,
  and pointer

  Jim Teresco

  Based on example from Dave Hollinger, CSCI 4250, RPI

  Used in classes at Siena College, The College of Saint Rose,
  Rensselaer Polytechnic Institute, Mount Holyoke College, and
  Williams College
*/

/* for printf */
#include <stdio.h>
/* for atoi */
#include <stdlib.h>

/* define a pointer type that we can address byte-by-byte */
typedef unsigned char *byte_pointer;

/* function to take a pointer to a 4-byte value and print it byte by
   byte in hex */
void show_bytes(byte_pointer start, int len) {
  int i;

  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) {

  printf("int %d as bytes: ", x);
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {

  printf("float %f as bytes: ", x);
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {

  printf("pointer %x as bytes: ", x);
  show_bytes((byte_pointer) &x, sizeof(void *));
}

int main(int argc, char *argv[]) {
  
  if (argc < 2) {
    fprintf(stderr, "Usage: %s number\n", argv[0]);
    return 1;
  }

  show_int(atoi(argv[1]));
  show_float(atof(argv[1]));
  show_pointer((void *)atoi(argv[1]));
  return 0;
}
