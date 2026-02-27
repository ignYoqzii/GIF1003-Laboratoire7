/**
 * @file main.cpp
 * @author yoqzii
 * @brief Ce programme gère une liste d'utilisateurs avec leurs prénoms, noms et noms d'utilisateur.
 * Il permet d'ajouter des utilisateurs, d'afficher les informations d'un utilisateur spécifique et d'afficher la liste de tous les utilisateurs.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "fonctionsUtilitaires.h"

using std::cin;
using std::getline;

array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> listeUtilisateurs;

int main()
{
    bool continuer = true;
    while (continuer)
    {
        cout << "==================================================" << "\n"
             << "                  Menu principal                  " << "\n"
             << "==================================================" << "\n\n"
             << "[1] Ajouter un utilisateur." << "\n"
             << "[2] Afficher les informations d'un utilisateur." << "\n"
             << "[3] Afficher la liste des utilisateurs." << "\n"
             << "[4] Quitter." << "\n"
             << endl;

        int choix;
        cout << "Entrez votre choix : ";
        cin >> choix;
        cin.ignore(1000, '\n');

        switch (choix)
        {
        case 1:
        {
            string prenom, nom;
            cout << "Entrez votre prénom : " << endl;
            getline(cin, prenom);
            cout << "Entrez votre nom : " << endl;
            getline(cin, nom);
            ajouterUtilisateur(listeUtilisateurs, prenom, nom);
            break;
        }
        case 2:
        {
            cout << "Entrez le nom d'utilisateur : ";
            string nomUtilisateur;
            cin >> nomUtilisateur;
            afficherInformationsUtilisateur(listeUtilisateurs, nomUtilisateur);
            break;
        }
        case 3:
            afficherListeUtilisateurs(listeUtilisateurs);
            break;
        case 4:
            cout << "Au revoir !" << endl;
            continuer = false;
            return 0;
        default:
            cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 4." << endl;
        }
    }
}