/*Jonathan Urrutia 2019/02/11
Eigth example. Defining a function.
We'll define an exponentiation operator since it is not in the stdio.h library of
C.

Excercises 1-11,12
*/

# include <stdio.h>


int power(int m, int n); /* Let's call the functions
                            The functions are located usually at the end
                            of the file */

/* Lets test it*/
main ()
{
  int i;
  for (i = 0; i < 10; ++i)
    printf("i = %d -> 2^i = %d, (-3)^i = %d\n", i, power(2,i), power(-3,i));
  return 0;
}


int power(int base, int n) /*Declaration fo the function we raise the base to the nth power*/
{
  int i, p;
  p = 1;
  for (i = 1; i <= n; ++i)
    p = p*base;
  return p;
}
