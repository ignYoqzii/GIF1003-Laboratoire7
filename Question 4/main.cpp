/**
 * @file main.cpp
 * @author yoqzii
 * @brief Ce programme calcule les factorielles de 1 à 5 et affiche le résultat de 20!.
 * Il met en évidence le problème de débordement (overflow) lorsque la valeur dépasse la capacité d'un entier signé.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <iostream>

using namespace std;

int factorielle(int p_nombre)
{
    if (p_nombre == 0)
    {
        return 1;
    }
    else
    {
        for (int i = p_nombre - 1; i > 0; --i)
        {
            p_nombre *= i;
        }
    }
    return p_nombre;
}

int main()
{
    cout << "=======================================" << "\n"
         << "   Calcul des factorielles de 1 à 5.   " << "\n"
         << "=======================================" << "\n"
         << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << "! = " << factorielle(i) << endl;
    }

    cout << "\n====================================================" << "\n"
         << "   Qu'arrive-t-il si on appelle factorielle(20) ?   " << "\n"
         << "====================================================" << "\n"
         << endl;

    cout << "20! = " << factorielle(20) << endl;

    cout << "Il y a un débordement (overflow) car '20!' est trop grand pour un entier signé." << endl;

    return 0;
}