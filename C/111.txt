#include <stdio.h>

int main(void) {
  char *x = "Yes" ;
  char *y = "No";
  int a, b, c; 
  {
    scanf ("%d" "%d" "%d", &a, &b, &c);
    if ((a+b>=10) || (b+c>=10) || (a+c>=10)) 
     puts(x);
    else if ((a+b<=10) || (b+c<=10) || (a+c<=10))
     puts(y);
    }
  {
   int(t);
    scanf("%d", &t);
    if (t >= 10)
      puts(x);
    else if (t <= 10)
      puts(y); }
return 0;
}