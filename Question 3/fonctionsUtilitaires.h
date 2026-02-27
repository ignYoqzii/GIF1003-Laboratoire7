/**
 * @file fonctionsUtilitaires.h
 * @author yoqzii
 * @brief Ce fichier contient les déclarations des fonctions utilitaires pour gérer une liste d'utilisateurs,
 * y compris l'ajout d'utilisateurs, l'affichage des informations d'un utilisateur spécifique et l'affichage de la liste de tous les utilisateurs.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef FONCTIONS_UTILITAIRES_H
#define FONCTIONS_UTILITAIRES_H

#include <iostream>
#include <sstream>
#include <array>
#include <string>

using std::array;
using std::cout;
using std::endl;
using std::ostringstream;
using std::string;

constexpr int MAX_UTILISATEURS = 10;

enum INFORMATIONS
{
    PRENOM,             // 0
    NOM,                // 1
    NOM_UTILISATEUR,    // 2
    NOMBRE_INFORMATIONS // 3
};

void ajouterUtilisateur(array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs, const string &p_prenom, const string &p_nom);
void afficherInformationsUtilisateur(const array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs, const string &p_nomUtilisateur);
void afficherListeUtilisateurs(const array<array<string, NOMBRE_INFORMATIONS>, MAX_UTILISATEURS> &p_listeUtilisateurs);

#endif // FONCTIONS_UTILITAIRES_H