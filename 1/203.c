#include <stdio.h>

int main(void) {

  int n;
  float x;
  double y;
  char c;
  char str[30];

  while (1) {
    printf("Bitte einen int-Wert eingeben: ");
    if (scanf("%d", &n) == 1) {break;}
    printf("Ungültige Eingabe für int-Wert!\n");
    while (getchar() != '\n') { }
  }

  while (1) {
    printf("Bitte einen float-Wert eingeben: ");
    if (scanf("%f", &x) == 1) {break;}
    printf("Ungültige Eingabe für float-Wert!\n");
    while (getchar() != '\n') { }
  }

  while (1) {
    printf("Bitte einen double-Wert eingeben: ");
    if (scanf("%lf", &y) == 1) {break;}
    printf("Ungültige Eingabe für double-Wert!\n");
    while (getchar() != '\n') { }
  }

  while (1) {
    printf("Bitte einen char-Wert eingeben: ");
    if (scanf(" %c", &c) == 1) {break;}
    printf("Ungültige Eingabe für char-Wert!\n");
        while (getchar() != '\n') { }
  }
  
  while (1) {
    printf("Bitte eine Zeichenkette eingeben: ");
    if (scanf("%s", str) == 1) {break;}
    printf("Ungültige Eingabe für Zeichenkette!\n");
    while (getchar() != '\n') { }
  }


  printf("n = %d\n", n);
  printf("x = %f\n", x);
  printf("y = %lf\n", y);
  printf("c = %c\n", c);
  printf("str = %s\n", str);

  return 0;
}