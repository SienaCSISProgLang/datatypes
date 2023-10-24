/*
  An example of a union in C

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

*/

#include <stdio.h>

union number {
  int intval;
  float floatval;
  char charval;
};

int main() {

  union number u;

  u.intval = 1;

  printf("Assigned intval to 1\n");
  printf("intval=%d, floatval=%f, charval=%c\n", u.intval, u.floatval,
	 u.charval);

  u.floatval = 1.0;

  printf("Assigned floatval to 1.0\n");
  printf("intval=%d, floatval=%f, charval=%c\n", u.intval, u.floatval,
	 u.charval);

  u.charval = '1';

  printf("Assigned charval to '1'\n");
  printf("intval=%d, floatval=%f, charval=%c\n", u.intval, u.floatval,
	 u.charval);

  u.intval = 0;

  printf("Assigned intval to 0\n");
  printf("intval=%d, floatval=%f, charval=%c\n", u.intval, u.floatval,
	 u.charval);

  u.charval = '0';

  printf("Assigned charval to '0'\n");
  printf("intval=%d, floatval=%f, charval=%c\n", u.intval, u.floatval,
	 u.charval);

  return 0;
}
