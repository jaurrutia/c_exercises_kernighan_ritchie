/*Jonathan Urrutia 2019/02/11
Sixth example. Word counting.
We'll define a word as any sequence without a \t, ' ' or \n.
Somehow is not working :c It caunts all word's chracater a a word....
*/

#include <stdio.h>

#define IN 1 /* Inside a word*/
#define OUT 0 /*Outside a word*/

/*We will count characters, words and lines.*/
main()
{
  int c, nc, nw, nl, state;  /* charcater, number of charcaters, - words, -lines */

  nl = 1;
  nw = 0;
  nc = 0;

  state = OUT;

  printf("We count characters, words and lines. Write something:\n");
  while((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
      ++nl;
    if ( c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if( state == OUT){
      state == IN;
      ++nw;
    }
  }
  printf("\n There are %d characters, %d lines and %d words.\n", nc, nl, nw);
}
