#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int L1 = 100;
    int L2 = 200;
    int V1 = 100;
    int V2 = 10;
    int t = (L1 + L2) / (V1 + V2);
    printf("Два поезда длиной %d м и %d м движутся со скоростями %d м/с и %d м/с навстречу друг другу\n", L1, L2, V1, V2);
    printf("Продолжительность их прохождения один против другого составляет %d сек\n", t);
    return 0;
}
