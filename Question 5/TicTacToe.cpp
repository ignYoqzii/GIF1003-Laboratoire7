/**
 * @file TicTacToe.cpp
 * @author yoqzii
 * @brief Implémentation de la classe TicTacToe
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "TicTacToe.h"

using std::cout;
using std::endl;

TicTacToe::TicTacToe()
{
    // Le constructeur initialise la grille et le joueur actuel
}

void TicTacToe::afficherGrille() const
{
    cout << "===========================" << "\n"
         << "        Tic Tac Toe        " << "\n"
         << "===========================" << "\n\n";

    // En-tête des colonnes
    cout << "     1   2   3\n";
    cout << "   +---+---+---+\n";

    for (size_t i = 0; i < m_grille.size(); ++i)
    {
        cout << " " << i + 1 << " |";

        for (size_t j = 0; j < m_grille[i].size(); ++j)
        {
            char symbole = (m_grille[i][j] == 1) ? 'X' : (m_grille[i][j] == 2) ? 'O'
                                                                               : ' ';
            cout << " " << symbole << " |";
        }

        cout << "\n   +---+---+---+\n";
    }
}

bool TicTacToe::jouerCoup(int p_ligne, int p_colonne)
{
    // Vérifie si les coordonnées sont valides
    if (p_ligne < 1 || p_ligne > 3 || p_colonne < 1 || p_colonne > 3)
    {
        cout << "Coordonnées invalides. Veuillez entrer des valeurs entre 1 et 3." << endl;
        return false;
    }

    // Vérifie si la case est déjà occupée
    if (m_grille[p_ligne - 1][p_colonne - 1] != 0)
    {
        cout << "Cette case est déjà occupée. Veuillez choisir une autre case." << endl;
        return false;
    }

    // Place le jeton du joueur actuel dans la grille
    m_grille[p_ligne - 1][p_colonne - 1] = m_jetonDuJoueur;

    // Change de joueur pour le prochain tour
    changerJoueur();
    return true;
}

void TicTacToe::changerJoueur()
{
    m_jetonDuJoueur = (m_jetonDuJoueur == 1) ? 2 : 1;
}

bool TicTacToe::verifierGagnant() const
{
    // Vérifie les lignes, les colonnes et les diagonales pour un gagnant
    for (size_t i = 0; i < 3; ++i)
    {
        // Vérifie les lignes
        if (m_grille[i][0] != 0 && m_grille[i][0] == m_grille[i][1] && m_grille[i][1] == m_grille[i][2])
        {
            return true;
        }
        // Vérifie les colonnes
        if (m_grille[0][i] != 0 && m_grille[0][i] == m_grille[1][i] && m_grille[1][i] == m_grille[2][i])
        {
            return true;
        }
    }

    // Vérifie les diagonales
    if (m_grille[0][0] != 0 && m_grille[0][0] == m_grille[1][1] && m_grille[1][1] == m_grille[2][2])
    {
        return true;
    }
    if (m_grille[0][2] != 0 && m_grille[0][2] == m_grille[1][1] && m_grille[1][1] == m_grille[2][0])
    {
        return true;
    }

    return false;
}

bool TicTacToe::verifierMatchNul() const
{
    // Vérifie s'il n'y a plus de cellules vides
    for (const auto &ligne : m_grille)
    {
        for (int cellule : ligne)
        {
            if (cellule == 0)
            {
                return false; // Il y a encore des cellules vides
            }
        }
    }
    return !verifierGagnant(); // Si aucune cellule n'est vide, vérifie s'il n'y a pas de gagnant
}

char TicTacToe::reqJetonDuJoueurFormate() const
{
    return (m_jetonDuJoueur == 1) ? 'X' : 'O';
}