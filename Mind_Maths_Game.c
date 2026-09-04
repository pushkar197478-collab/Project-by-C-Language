#include <stdio.h>
int main()

{
    int x =3 , a = 3;
    char i, b, d, e, f;
    printf("Thing a random number");
    printf("Multiply by 2 in your number\n");
    printf("Are you done it, Then type 'P'\n");
    scanf(" %c", &b);

    x *= 2;

    printf("Then Add by 8 in your number\n");
    printf("Are you done it, Then type 'U'\n");
    scanf(" %c", &d);

    x += 8;
    printf("Then divide by 2 in your number\n");
    printf("Are you done it, Then type 'S'\n");
    scanf(" %c", &i);

    x /= 2;
    printf("Then subtract by number which you think in starting in your number\n");
    printf("Are you done it, Then type 'H'\n");
    scanf(" %c", &e);
    x -= a;

    printf("Are You Like To See Your Number\n");
    printf("Then type 'K'\n");
    scanf(" %c", &f);

    printf("Your Number is %d", 4);

    return 0;
}
