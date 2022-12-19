#include <stdio.h>

int main(void) {
  // Deklariere Variablen
  int n;
  float x;
  double y;
  char c;
  char str[30];

  // Lese Werte ein
  printf("Bitte einen int-Wert eingeben: ");
  scanf("%d", &n);

  printf("Bitte einen float-Wert eingeben: ");
  scanf("%f", &x);

  printf("Bitte einen double-Wert eingeben: ");
  scanf("%lf", &y);

  printf("Bitte einen char-Wert eingeben: ");
  scanf(" %c", &c);  // Hinweis: Leerzeichen vor %c, um eventuelle vorherige Leerzeichen zu ignorieren

  printf("Bitte einen Zeichenkette eingeben: ");
  scanf("%s", str);

  // Gib Variablen aus
  printf("n = %d\n", n);
  printf("x = %f\n", x);
  printf("y = %lf\n", y);
  printf("c = %c\n", c);
  printf("str = %s\n", str);

  return 0;
}
