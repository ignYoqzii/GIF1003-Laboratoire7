/**
 * @file TicTacToe.h
 * @author yoqzii
 * @brief Déclaration de la classe TicTacToe
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <array>
#include <string>

class TicTacToe
{
public:
    TicTacToe(); // Constructeur pour initialiser la grille et le joueur actuel
    void afficherGrille() const;
    bool jouerCoup(int p_ligne, int p_colonne);
    bool verifierGagnant() const;
    bool verifierMatchNul() const;
    char reqJetonDuJoueurFormate() const;

private:
    // Grille de jeu initialisée à 0
    std::array<std::array<int, 3>, 3> m_grille = {
        {{0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}}};
    int m_jetonDuJoueur = 1; // 1 pour X, 2 pour O
    void changerJoueur();
};

#endif // TICTACTOE_H