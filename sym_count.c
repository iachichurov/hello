/*Подсчет символов во входном потоке*/
#include <stdio.h>

main()
{
  /*Первая версия
  long nc;
  nc = 0;

  while (getchar() != EOF) {
    nc++;
    printf("%ld\n", nc);
  }*/

  /*Вторая версия*/
  double nc;

  for (nc = 0; getchar() != EOF; nc++)
  ;
  printf("%.0f\n", nc);
}
