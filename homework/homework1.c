#include <stdio.h>
int main() {
  float x =  2.311;
  int y = 15;
  while (x <= y) {
    x = x / 2;
    y = y * x;
  }
  printf("%.2f, %d\n", x, y);
}
