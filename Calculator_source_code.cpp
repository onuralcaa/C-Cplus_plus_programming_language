#include <stdio.h>

//Onur ALACA - 04.03.2024 - Basic Calculator

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
                printf("Sýfýra bölme hatasý!");
            break;
        default:
            printf("Gecersiz islem!");
    }

    return 0;
}

