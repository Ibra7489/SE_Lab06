#include <iostream>
#include <cmath>
#include "mycomplex.h"      //подключаем свой файл №3

using namespace std;

Complex :: Complex(double aRe , double aIm)  //описание конструктора записи изменяемой действительной и мнимой части(Re и Im)-ничего не возвращает
{
    Re = aRe;//запись параметра действительной части
    Im = aIm;//запись параметра мнимой части
}

Complex :: Complex(const Complex & aRval)//описание конструктора копирования(передача по ссылке)
{
    Re = aRval.Re;//запись параметра действительной части
    Im = aRval.Im;//запись параметра мнимой части
}

Complex :: ~Complex()//описание деструктора класса, очистка памяти
{
    Re = 0.0;
    Im = 0.0;
}

void Complex :: Set(double aRe, double aIm)//описание метода саттера
{
    Re = aRe;//запись параметра действительной части
    Im = aIm;//запись параметра мнимой части
}

Complex :: operator double()//описание метода operator
{
    return abs();//возвращает значение метода вычисления модуля комплексного числа
}

    double Complex :: abs()//описание метода вычисления модуля комплексного числа
{
    return sqrt(Re * Re + Im * Im);//возвращает значение модуля
}

Complex Complex :: operator + (const Complex & aRval)//описание оператора сложения, комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re + aRval.Re;//запись переменной Result параметра действительной части
    Result.Im = Im + aRval.Im ;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}
Complex Complex :: operator - (const Complex & aRval)//описание оператора вычитания, комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re - aRval.Re;//запись переменной Result параметра действительной части
    Result.Im = Im - aRval.Im;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator + (const double & aRval)//описание оператора сложения, действительная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re + aRval;//запись переменной Result параметра действительной части
    Result.Im = Im;//мнимая часть без изменений
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator - (const double & aRval)//описание оператора вычитания, действительная переменная
{
    Complex Result( * this);//создание переменной Result класса Complex с указателем объекта на самого себя
    Result.Re = Re - aRval;//запись переменной Result параметра действительной части
    return Result;//возвращение записанных параметров действительной части
}

Complex Complex  :: operator * (const Complex & aRval)//описание оператора умножения, комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re * aRval.Re - Im * aRval.Im;//запись переменной Result параметра действительной части
    Result.Im = Re * aRval.Im + Im * aRval.Re;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator * (const double & aRval)//описание оператора умножения,действительная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re * aRval;//запись переменной Result параметра действительной части
    Result.Im = Im * aRval;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator / (const double & aRval)//описание оператора деления,действительная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = Re / aRval;//запись переменной Result параметра действительной части
    Result.Im = Im / aRval;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex & Complex :: operator += (const Complex & aRval)//описание оператора +=, комплексная переменная
{
    Re += aRval.Re;//запись параметра действительной части
    Im += aRval.Im;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator -= (const Complex & aRval)//описание оператора -=, комплексная переменная
{
    Re -= aRval.Re;//запись параметра действительной части
    Im -= aRval.Im;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator *= (const Complex & aRval)//описание оператора *=, комплексная переменная
{
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;//запись параметра действительной части
    Im = Im * aRval.Re + tmpRe * aRval.Im;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator += (const double & aRval)//описание оператора +=, действительная переменная
{
    Re += aRval;//запись параметра действительной части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator -= (const double & aRval)//описание оператора -=, действительная переменная
{
    Re -= aRval;//запись параметра действительной части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator *= (const double & aRval)//описание оператора *=, действительная переменная
{
    Re *= aRval;//запись параметра действительной части
    Im *= aRval;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator /= (const double & aRval)//описание оператора /=, действительная переменная
{
    Re /= aRval;//запись параметра действительной части
    Im /= aRval;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator = (const Complex & aRval)//описание оператора присваивания, комплексная переменная
{
    Re = aRval.Re;//запись параметра действительной части
    Im = aRval.Im;//запись параметра мнимой части
    return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator = (const double & aRval)//описание оператора присваивания, действительная переменная
{
    Re = aRval;//запись параметра действительной части
    Im = 0.0;//обнуление мнимой части
    return *this;//возвращение указателя на самого себя
}

istream & operator >> (istream & stream, Complex & aRval)//перегрузка оператора >>
{
    char tmp[256];
    stream >> aRval.Re >>
    aRval.Im >> tmp;
    return stream;
}

ostream & operator << (ostream & stream, Complex & aRval)//перегрузка оператора <<
{
    stream << aRval.Re;
    if (!(aRval.Im < 0))
    stream << '+';
    stream << aRval.Im << 'i';
    return stream;
}

Complex operator + (const double & aLval, const Complex & aRval)//описание оператора сложения, одна действительная переменная и одна комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = aLval + aRval.Re;//запись переменной Result параметра действительной части
    Result.Im = aRval.Im;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex operator - (const double & aLval, const Complex & aRval)//описание оператора вычитания, одна действительная переменная и одна комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = aLval - aRval.Re;//запись переменной Result параметра действительной части
    Result.Im = -aRval.Im;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex operator * (const double & aLval, const Complex & aRval)//описание оператора умножения, одна действительная переменная и одна комплексная переменная
{
    Complex Result;//создание переменной Result класса Complex
    Result.Re = aLval * aRval.Re;//запись переменной Result параметра действительной части
    Result.Im = aLval * aRval.Im;//запись переменной Result параметра мнимой части
    return Result;//возвращение записанных параметров действительной и мнимой части
}
