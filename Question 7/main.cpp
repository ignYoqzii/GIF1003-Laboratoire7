/**
 * @file main.cpp
 * @author yoqzii
 * @brief Programme de test pour la classe Complexe qui représente des nombres complexes et leurs opérations
 * de base telles que l'addition, la soustraction, la multiplication et le conjugué.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "Complexe.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Complexe c1(2.0, 3.0);
    Complexe c2(4.0, -1.0);

    cout << "Complexe 1: " << c1 << endl;
    cout << "Complexe 2: " << c2 << endl;

    Complexe somme = c1 + c2;
    Complexe difference = c1 - c2;
    Complexe produit = c1 * c2;
    Complexe conjugueC1 = c1.conjugue();

    cout << "Somme: " << somme << endl;
    cout << "Différence: " << difference << endl;
    cout << "Produit: " << produit << endl;
    cout << "Conjugué de C1: " << conjugueC1 << endl;

    return 0;
}