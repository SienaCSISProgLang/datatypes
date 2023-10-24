/*
  Example of Complex numbers in C99

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

*/

#include <stdio.h>
#include <complex.h>

int main() {

  // we add the extra keyword "complex" to allocate storage for complex
  // numbers with the given type of the numeric parts
  double complex a, b, c;

  // specify values using the "I" for sqrt(-1)
  a = 1.0 + 1.0*I;
  b = -2.0 + -1.0*I;
  c = I;

  // printf doesn't have a directive for complex, so we need to break
  // out the real and complex parts
  printf("a = %.2f + %.2fi, b = %.2f + %.2fi, c = %.2f + %.2fi\n",
	 creal(a), cimag(a), creal(b), cimag(b), creal(c), cimag(c));

  // we can do math on them, though
  c = c * c;

  printf("If we square i, we get: %.2f + %.2fi\n", creal(c), cimag(c));

  // add them 
  c = a + b;

  printf("If we add a and b, we get: %.2f + %.2fi\n", creal(c), cimag(c));

  return 0;
}
