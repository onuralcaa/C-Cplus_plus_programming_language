#include <stdio.h>

int main() {
    char operand;
    double num1, num2;

    printf("Islem secin (+, -, *, /): ");
    scanf("%c", &operand);

    printf("Iki sayi girin: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operand) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            else
                printf("Sıfıra bölme hatası!");
            break;
        default:
            printf("Gecersiz islem!");
    }

    return 0;
}

