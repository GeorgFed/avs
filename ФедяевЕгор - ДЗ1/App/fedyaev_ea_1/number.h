#ifndef __number__
#define __number__

//------------------------------------------------------------------------------
// number.h - содержит описание обобщающе числа,
//------------------------------------------------------------------------------

#include "fraction.h"
#include "polar.h"
#include "complex.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся числа
struct number {
    // значения ключей для каждого из чисел
    enum key {FRACTION, COMPLEX, POLAR};
    key k; // ключ
    // используемые альтернативы
    union {
        fraction f;
        complex c;
        polar p;
    };
};

// Ввод обобщенной фигуры
number *In(ifstream &ifdt);

// Случайный ввод обобщенной фигуры
number *InRnd();

// Вывод обобщенной фигуры
void Out(number &s, ofstream &ofst);

// Вычисление периметра обобщенной фигуры
double ToReal(number &n);

#endif
