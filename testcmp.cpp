#include <iostream>
#include "mycomplex.h"                 //?????????? ???? ???? ?3

using namespace std;

int main()                      //??????? ???????
{
    Complex A, B(-4), C(23.0, 45.9);             //?????????? ??????????? ??????????: A-?????? ?????????; B=-4; C=23.0

    cout << A << "," << B << "," << C << endl;       //????? ?????? A,B,C ?? ?????
    A = B + C;                          //?????? ?????????? A
    cout << "A = B + C, A = " << A << endl;          //????? ?????????? A ????? ???????
    Complex M = B - C;                   //?????? ? ?????????? ??????????? ?????????? M
    cout << "M = B - C, M = " << M << endl;      //????? ?????????? M ????? ???????
    cout << "M * A = " << M * A << endl;         //????? ???????????? ?????????? M ? A
    cout << "M / 4.45 = " << M / 4.45 << endl;      //????? ???????? ?? ??????? M ?? 4.45

    Complex D;                        //?????????? ??????????? ?????????? D
    cout << "Enter complex number D = ";           //?????? ?????? ??????????? ?????????? D
    cin >> D;                         //????????? ?????????? D
    A += C + D;                       //?????????? ? ????? ??????????? ?????????? A ????? ?????????? C ? D
    cout << "D = " << D << "\nA = " << A << endl;      //????? ?????????? D ? A
    return 0;                         //?????????? 0
}
