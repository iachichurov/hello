#include <stdio.h>

/*Вывод таблиц температуры по Фаренгейту и Цельсию от 0 до 300 F*/

int main() {
  float fahr, celcius;
  int lower, upper, step;

  lower = 0; /*нижняя граница температуры*/
  upper = 300; /*верхняя граница температуры*/
  step = 20; /*шаг изменения*/

  fahr = lower;
  printf("Temperature table F to C\n");

  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr - 32.0);
    printf ("%6.0f %6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }

  celcius = lower;
  printf("Temperature table C to F\n");

  while (celcius <= upper) {
    fahr = (celcius * (9.0/5.0)) + 32;
    printf ("%6.0f %6.0f\n", celcius, fahr);
    celcius = celcius + step;
  }
}
