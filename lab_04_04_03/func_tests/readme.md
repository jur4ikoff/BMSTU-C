#  Тест для лабораторной работы №4, задание №4

## Позитивные тесты
| Номер | Описание | Входные данные | Выходные данные |
|-------|----------|----------------|-----------------|
| 1 | Введенная строка пустая | ` ` | NO |
| 2 | Корректный ввод номера с кодом страны | +7(999)-999-99-99 | YES |
| 3 | Корректный ввод номера с кодом страны (несколько символов) | +77777(999)-999-99-99 | YES |
| 4 | Корректный ввод номера без кода страны | (999)-999-99-99 | YES |
|| Допущение: тесты с отрицательным результатом без кода страны |||
| 5 | Длина кода оператора не равна 3 символам | (99)-999-99-99 | NO |
| 6 | Нет открывающей скобки у кода оператора | 999)-999-99-99 | NO |
| 7 | Нет закрывающей скобки у кода оператора | (999-999-99-99 | NO |
| 8 | Нет скобок у кода оператора | 999-999-99-99 | NO |
| 9 | Нет скобок у кода оператора, есть код страны| +77999-999-99-99 | NO |
| 10 | Нет дифиса между кодом оператора и номером| (999)999-99-99 | NO |
| 11 | Нет дифиса между номером| (999)-99999-99 | NO |
| 12 | Нет дифиса между номером| (999)-999-9999 | NO |
| 13 | Нет дифиса между номером| (999)999-99-99 | NO |
| 14 | Нет кода оператора | +7-999-99-99 | NO |
| 15 | Нет части номера| (999)-99-99 | NO |
| 16 | Нет части номера| (999)-999-99 | NO |
| 17 | символ в середине номера| (999)-999 t -99-99 | NO |
| 18 | символ перед номером | a +7(999)-999-99-99 | NO |
| 19 | символ после номера | +7(999)-999-99-99 a | NO |
| 20 | символ + без кода страны | +(999)-999-99-99 | NO |
| 21 | Пробельные символы перед номером |     +7(999)-999-99-99 | YES |
| 22 | Входная строка состоит только из пробельных символов | ` ` | NO |
| 23 | Отсутствует одна цифра в номере | +7(999)-999-9-99 | NO |
| 24 | Отсутствует одна цифра в номере | +7(999)-999-99-9 | NO |
| 25 | Отсутствует часть номера | +7 | NO |



## Негативные тесты
| Номер | Описание | Входные данные | Выходные данные |
|-------|----------|----------------|-----------------|
| 1 | Строка слишком длинная | 257 символов | String Overflow |
