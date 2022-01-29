/*Подсчет символов во входном потоке*/
#include <stdio.h>

/*Первая версия*/

main()
{
  long nc;
  nc = 0;

  while (getchar() != EOF) {
    nc++;
    printf("%ld\n", nc);
  }
}
