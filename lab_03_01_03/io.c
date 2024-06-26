#include "io.h"

// Ввод длины матрицы
int input_len(size_t *array_len)
{
    // Ввод
    if (scanf("%zu", array_len) != 1)
    {
        printf("len must be integer number\n");
        return WRONG_INPUT;
    }

    // Обработка неверного ввода ввода
    if (*array_len > 10)
    {
        printf("len must be less then ten\n");
        return WRONG_ARRAY_LEN;
    }

    if (*array_len < 1)
    {
        printf("len must be more one\n");
        return WRONG_ARRAY_LEN;
    }

    return SUCCESS_OUTPUT;
}

// Ввод матрицы
int input_matx(int matx[N][M], size_t n, size_t m)
{
    int el;
    printf("Введите числа матрицы:\n");
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (scanf("%d", &el) != 1)
            {
                printf("Wrong Input\n");
                return WRONG_INPUT;
            }
            matx[i][j] = el;
        }
    }

    return SUCCESS_OUTPUT;
}

// Вывод списка
void print_array(int array[], int n)
{
    printf("answer: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
