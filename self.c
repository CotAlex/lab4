/*Леднёв Алексей Алексеевич
 ПИ 1-1
 Самостоятельная работа*/
#include <stdio.h>
#include <math.h> 
int main() {
    double a, result;
    int command;
    printf("Введите число:\n");
    if (scanf("%lf", &a) != 1) {
        printf("Ошибка чтения строки!\n");
        return 1;
    }
    printf("Выберите операцию:\n");
    printf("1 - метры в сантиметры\n2 - килограммы в граммы\n3 - Цельсия в Фаренгейта\n4 - часы в минуты\n");
    scanf("%d", &command);
    switch(command){
        case 1:
            result = a * 100.0;
            printf("Результат: %.2lf\n", result);
            break;
        case 2:
            result = a * 1000.0;
            printf("Результат: %.2lf\n", result);
            break;
        case 3:
            result = a * 9.0 / 5.0 + 32.0;
            printf("Результат: %.2lf\n", result);
            break;
        case 4:
            result = a * 60.0;
            printf("Результат: %.2lf\n", result);
            break;
    }
    return 0;
}
