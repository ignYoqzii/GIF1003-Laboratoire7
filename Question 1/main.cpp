/**
 * @file main.cpp
 * @author yoqzii
 * @brief
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <iostream>

using namespace std;

constexpr int NOMBRE_ETUDIANTS = 10;
constexpr int SEUIL_NIVEAU_EXAMEN = NOMBRE_ETUDIANTS * 0.8;

int main()
{
    int succes = 0, echec = 0;
    for (int i = 0; i < NOMBRE_ETUDIANTS; ++i)
    {
        int resultat;
        cout << "Entrez le résultat de l'étudiant " << i + 1 << ": ";
        cin >> resultat;

        if (resultat == 1)
        {
            succes++;
        }
        else
        {
            echec++;
        }
    }

    cout << "Nombre de succès : " << succes << "\n"
         << "Nombre d'échecs : " << echec << endl;

    if (succes >= SEUIL_NIVEAU_EXAMEN)
    {
        cout << "Relever le niveau de l'examen." << endl;
    }
}