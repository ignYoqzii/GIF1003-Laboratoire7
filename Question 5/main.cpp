/**
 * @file main.cpp
 * @author yoqzii
 * @brief Point d'entrée du programme pour le jeu de Tic Tac Toe
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "TicTacToe.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    TicTacToe jeu;
    int ligne, colonne;

    while (true)
    {
        jeu.afficherGrille();
        cout << "Joueur " << jeu.reqJetonDuJoueurFormate() << ", entrez votre coup (LIGNE COLONNE) : ";
        cin >> ligne >> colonne;

        if (!jeu.jouerCoup(ligne, colonne))
        {
            continue; // Si le coup n'est pas valide, redemander au joueur de jouer
        }

        if (jeu.verifierGagnant())
        {
            jeu.afficherGrille();
            cout << "Félicitations ! Le joueur " << jeu.reqJetonDuJoueurFormate() << " a gagné !" << endl;
            break;
        }
        else if (jeu.verifierMatchNul())
        {
            jeu.afficherGrille();
            cout << "Match nul ! Personne n'a gagné." << endl;
            break;
        }
    }

    return 0;
}