#include <stdio.h>
int main(void)
{
    int s;
    s = 56;
    printf("Year has %d weeks\n", s);
    return 0;
}

/*
Директива написана неправильна (<> # stdio.h)
Фигурные скобки у main ни к чему не относятся
круглые скубки вместо фигурных
неправильно написан оператор присваиания
Отсутствует форматирование при выводе 
print вместо ptintf
отсутствует ; после "print"



test:
(base) ypopov2005@Air-Urij lab1 % ./1.exe
Year has 56 weeks*/
