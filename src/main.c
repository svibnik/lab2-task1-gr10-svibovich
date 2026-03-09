#include <stdio.h>

/*
 * Автор: Свибович Никита, группа 10
 * Задание: поиск всех шестизначных счастливых номеров
 */

/**
 * Проверяет, является ли шестизначное число "счастливым"
 * @param number шестизначное число
 * @return 1 если счастливое, 0 если нет
 */
int is_lucky(int number) {
    int digits[6];
    int temp = number;
    
    // Разбираем число на цифры
    for (int i = 5; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }
    
    // Сумма первых трёх цифр
    int sum1 = digits[0] + digits[1] + digits[2];
    // Сумма последних трёх цифр
    int sum2 = digits[3] + digits[4] + digits[5];
    
    return sum1 == sum2;
}

int main() {
    return 0;
}
