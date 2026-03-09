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
    int count = 0;
    
    printf("Шестизначные счастливые номера:\n");
    
    // Перебираем все шестизначные числа
    for (int i = 100000; i <= 999999; i++) {
        if (is_lucky(i)) {
            printf("%d ", i);
            count++;
            
            // Печатаем по 10 чисел в строке
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    
    printf("Всего найдено счастливых номеров: %d\n", count);
    
    return 0;
}
