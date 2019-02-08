/*Jonathan Urrutia 2019/02/07
Third example. The use of characters is studied
Excercises 1 - 6,7
*/

#include <stdio.h>

main()
{
/*First we will ise getchar() and putchar().
the idea is:
    read a character
    while(character != end of file indicator){
    output the read chraracter
    read a character}
*/
int c;

printf("%f\n", EOF );  /*EOF is the indicator 'end of file'; it is defined in stdio.h and is a large int. */

while((c = getchar())!= EOF){  /*Thhe parenthesis operation is made before the != in the test parameters*/
  putchar(c);
}


}
