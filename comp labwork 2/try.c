#include <stdio.h>

void swap (int, int);
int main()
{
  int x = 20, y = 10; 
  swap(x, y);
  printf("%d, %d", y, x);
}
void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}