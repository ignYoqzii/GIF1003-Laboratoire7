/**
 * @file main.cpp
 * @author yoqzii
 * @brief Ce programme teste la classe Polynome en créant des instances, en insérant des coefficients et en évaluant le polynôme.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "Polynome.h"

using std::cout;
using std::endl;

int main()
{
    Polynome P1;
    cout << "P1 = " << P1 << endl;

    Polynome P2(5);
    cout << "P2 = " << P2 << endl;

    for (int i = 0; i <= P2.reqDegree(); ++i)
    {
        P2.insererCoefficient(i, i + 1); // Juste pour tester
    }

    cout << "P2 après insertion = " << P2 << endl;

    cout << "P2(1) = " << P2.evaluerPolynome(1) << endl;

    return 0;
}