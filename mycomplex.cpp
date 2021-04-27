#include <iostream>
#include <cmath>
#include "mycomplex.h"      //���������� ���� ���� �3

using namespace std;

Complex :: Complex(double aRe , double aIm)  //�������� ������������ ������ ���������� �������������� � ������ �����(Re � Im)-������ �� ����������
{
    Re = aRe;//������ ��������� �������������� �����
    Im = aIm;//������ ��������� ������ �����
}

Complex :: Complex(const Complex & aRval)//�������� ������������ �����������(�������� �� ������)
{
    Re = aRval.Re;//������ ��������� �������������� �����
    Im = aRval.Im;//������ ��������� ������ �����
}

Complex :: ~Complex()//�������� ����������� ������, ������� ������
{
    Re = 0.0;
    Im = 0.0;
}

void Complex :: Set(double aRe, double aIm)//�������� ������ �������
{
    Re = aRe;//������ ��������� �������������� �����
    Im = aIm;//������ ��������� ������ �����
}

Complex :: operator double()//�������� ������ operator
{
    return abs();//���������� �������� ������ ���������� ������ ������������ �����
}

    double Complex :: abs()//�������� ������ ���������� ������ ������������ �����
{
    return sqrt(Re * Re + Im * Im);//���������� �������� ������
}

Complex Complex :: operator + (const Complex & aRval)//�������� ��������� ��������, ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re + aRval.Re;//������ ���������� Result ��������� �������������� �����
    Result.Im = Im + aRval.Im ;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}
Complex Complex :: operator - (const Complex & aRval)//�������� ��������� ���������, ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re - aRval.Re;//������ ���������� Result ��������� �������������� �����
    Result.Im = Im - aRval.Im;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex Complex :: operator + (const double & aRval)//�������� ��������� ��������, �������������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re + aRval;//������ ���������� Result ��������� �������������� �����
    Result.Im = Im;//������ ����� ��� ���������
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex Complex :: operator - (const double & aRval)//�������� ��������� ���������, �������������� ����������
{
    Complex Result( * this);//�������� ���������� Result ������ Complex � ���������� ������� �� ������ ����
    Result.Re = Re - aRval;//������ ���������� Result ��������� �������������� �����
    return Result;//����������� ���������� ���������� �������������� �����
}

Complex Complex  :: operator * (const Complex & aRval)//�������� ��������� ���������, ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re * aRval.Re - Im * aRval.Im;//������ ���������� Result ��������� �������������� �����
    Result.Im = Re * aRval.Im + Im * aRval.Re;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex Complex :: operator * (const double & aRval)//�������� ��������� ���������,�������������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re * aRval;//������ ���������� Result ��������� �������������� �����
    Result.Im = Im * aRval;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex Complex :: operator / (const double & aRval)//�������� ��������� �������,�������������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = Re / aRval;//������ ���������� Result ��������� �������������� �����
    Result.Im = Im / aRval;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex & Complex :: operator += (const Complex & aRval)//�������� ��������� +=, ����������� ����������
{
    Re += aRval.Re;//������ ��������� �������������� �����
    Im += aRval.Im;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator -= (const Complex & aRval)//�������� ��������� -=, ����������� ����������
{
    Re -= aRval.Re;//������ ��������� �������������� �����
    Im -= aRval.Im;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator *= (const Complex & aRval)//�������� ��������� *=, ����������� ����������
{
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;//������ ��������� �������������� �����
    Im = Im * aRval.Re + tmpRe * aRval.Im;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator += (const double & aRval)//�������� ��������� +=, �������������� ����������
{
    Re += aRval;//������ ��������� �������������� �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator -= (const double & aRval)//�������� ��������� -=, �������������� ����������
{
    Re -= aRval;//������ ��������� �������������� �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator *= (const double & aRval)//�������� ��������� *=, �������������� ����������
{
    Re *= aRval;//������ ��������� �������������� �����
    Im *= aRval;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator /= (const double & aRval)//�������� ��������� /=, �������������� ����������
{
    Re /= aRval;//������ ��������� �������������� �����
    Im /= aRval;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator = (const Complex & aRval)//�������� ��������� ������������, ����������� ����������
{
    Re = aRval.Re;//������ ��������� �������������� �����
    Im = aRval.Im;//������ ��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

Complex & Complex :: operator = (const double & aRval)//�������� ��������� ������������, �������������� ����������
{
    Re = aRval;//������ ��������� �������������� �����
    Im = 0.0;//��������� ������ �����
    return *this;//����������� ��������� �� ������ ����
}

istream & operator >> (istream & stream, Complex & aRval)//���������� ��������� >>
{
    char tmp[256];
    stream >> aRval.Re >>
    aRval.Im >> tmp;
    return stream;
}

ostream & operator << (ostream & stream, Complex & aRval)//���������� ��������� <<
{
    stream << aRval.Re;
    if (!(aRval.Im < 0))
    stream << '+';
    stream << aRval.Im << 'i';
    return stream;
}

Complex operator + (const double & aLval, const Complex & aRval)//�������� ��������� ��������, ���� �������������� ���������� � ���� ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = aLval + aRval.Re;//������ ���������� Result ��������� �������������� �����
    Result.Im = aRval.Im;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex operator - (const double & aLval, const Complex & aRval)//�������� ��������� ���������, ���� �������������� ���������� � ���� ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = aLval - aRval.Re;//������ ���������� Result ��������� �������������� �����
    Result.Im = -aRval.Im;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}

Complex operator * (const double & aLval, const Complex & aRval)//�������� ��������� ���������, ���� �������������� ���������� � ���� ����������� ����������
{
    Complex Result;//�������� ���������� Result ������ Complex
    Result.Re = aLval * aRval.Re;//������ ���������� Result ��������� �������������� �����
    Result.Im = aLval * aRval.Im;//������ ���������� Result ��������� ������ �����
    return Result;//����������� ���������� ���������� �������������� � ������ �����
}
