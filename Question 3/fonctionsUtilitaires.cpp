/**
 * @file fonctionsUtilitaires.cpp
 * @author yoqzii
 * @brief Ce fichier contient les définitions des fonctions utilitaires pour gérer une liste d'utilisateurs,
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "fonctionsUtilitaires.h"

using std::array;
using std::cout;
using std::endl;
using std::ostringstream;
using std::string;

int nombreUtilisateurs = 0;

int nombreOccurences(const array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs, const char p_initialePrenom, const char p_initialeNom)
{
    int occurences = 0;
    for (int i = 0; i < nombreUtilisateurs; ++i)
    {
        if (p_listeUtilisateurs[i][NOM_UTILISATEUR][0] == p_initialePrenom && p_listeUtilisateurs[i][NOM_UTILISATEUR][1] == p_initialeNom)
        {
            occurences++;
        }
    }
    return occurences;
}

void ajouterUtilisateur(array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs, const string &p_prenom, const string &p_nom)
{
    if (nombreUtilisateurs < MAX_UTILISATEURS)
    {
        p_listeUtilisateurs[nombreUtilisateurs][PRENOM] = p_prenom;

        p_listeUtilisateurs[nombreUtilisateurs][NOM] = p_nom;

        char initialePrenom = toupper(p_prenom[0]);
        char initialeNom = toupper(p_nom[0]);
        int chiffre = nombreOccurences(p_listeUtilisateurs, initialePrenom, initialeNom) + 1;
        ostringstream oss;
        oss << initialePrenom << initialeNom << chiffre;
        string nomUtilisateur = oss.str();
        p_listeUtilisateurs[nombreUtilisateurs][NOM_UTILISATEUR] = nomUtilisateur;

        nombreUtilisateurs++;

        cout << "Utilisateur ajouté avec le nom d'utilisateur : " << nomUtilisateur << " !" << endl;
    }
    else
    {
        cout << "Nombre maximum d'utilisateurs atteint." << endl;
    }
}

void afficherInformationsUtilisateur(const array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs, const string &p_nomUtilisateur)
{
    for (int i = 0; i < nombreUtilisateurs; ++i)
    {
        if (p_listeUtilisateurs[i][NOM_UTILISATEUR] == p_nomUtilisateur)
        {
            cout << "Prénom : " << p_listeUtilisateurs[i][PRENOM] << endl;
            cout << "Nom : " << p_listeUtilisateurs[i][NOM] << endl;
            return;
        }
    }
    cout << "Utilisateur non trouvé." << endl;
}

void afficherListeUtilisateurs(const array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs)
{
    if (nombreUtilisateurs == 0)
    {
        cout << "Aucun utilisateur enregistré." << endl;
        return;
    }

    cout << "Liste des utilisateurs :" << endl;
    for (int i = 0; i < nombreUtilisateurs; ++i)
    {
        cout << "- " << p_listeUtilisateurs[i][NOM_UTILISATEUR] << endl;
    }
}