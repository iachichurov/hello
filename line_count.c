/*Подсчет строк во входном потоке*/

/*#include <stdio.h>

main()
{
  int c, nl;
  nl = 0;

  while((c = getchar()) != EOF){
    if (c == ' ' || c == '\t' || c == '\n')
    ++nl;
  }
  printf("%d\n", nl);
}
*/

/*Копирование потока с заменой символов*/

#include <stdio.h>

main()
{
  char c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    c = 'a';
    putchar(c);
  }
  c = getchar();
}
