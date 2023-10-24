/*
  Example of enumerated types in C

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012
*/

#include <stdio.h>

enum month { January=1, February, March, April, May, June, July,
	      August, September, October, November, December};

int main() {

  enum month index;
  enum month now = November;
  enum month next = now+1;

  printf("Now is %d, next is %d\n", now, next);

  for (index = January; index <= December; index++ ) {
    printf("Visiting month %d\n", index);
    
  }

  next++;
  printf("Next is incremented to %d\n", next);

  return 0;

}
