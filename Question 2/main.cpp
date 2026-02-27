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
#include <string>

using namespace std;

int main()
{
    cout << "===============================" << "\n"
         << "   Créateur de mots de passe   " << "\n"
         << "==============================="
         << "\n"
         << endl;

    string prenom, nom;
    cout << "Entrez votre prénom (sans accents) : ";
    getline(cin, prenom);
    cout << "Entrez votre nom (sans accents) : ";
    getline(cin, nom);

    string jour, mois;
    cout << "Entrez votre date de naissance (JJ MM) : ";
    cin >> jour >> mois;

    string motDePasse = prenom.substr(0, 2) + nom.substr(0, 3) + jour + mois;

    cout << "Votre mot de passe généré est : " << motDePasse << endl;

    return 0;
}