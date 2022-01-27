#include <stdio.h>

/*Вывод таблиц температуры по Фаренгейту и Цельсию от 0 до 300 F*/

int main() {
  float fahr, celcius;
  int lower, upper, step;

  lower = 0; /*нижняя граница температуры*/
  upper = 300; /*верхняя граница температуры*/
  step = 20; /*шаг изменения*/

  fahr = lower;
  while (fahr <= upper) {
    celcius = 5 * (fahr - 32) / 9;
    printf ("%d\t%d\n", fahr, celcius);
    fahr = fahr + step;
  }
}
