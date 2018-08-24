#include <stdio.h>
#define MAX_POWERS 100
int main(){
	is_power(32,2);
}
int is_power(unsigned long x, unsigned long y) {
  int i;
  unsigned long powers[MAX_POWERS];
  unsigned long last;
  last = powers[0] = y;

  for (i = 1; last < x; i++) {
    last *= last; // note that last * last can overflow here!
    powers[i] = last;
  }
  while (x >= y) {
    unsigned long top = powers[--i];
    if (x >= top) {
      unsigned long x1 = x / top;
      if (x1 * top != x) return 0;
      x = x1;
    }
  }
  return (x == 1);
}
