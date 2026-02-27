/**
 * @file Polynome.h
 * @author yoqzii
 * @brief Déclaration de la classe Polynome qui représente un polynôme avec des méthodes pour insérer des coefficients, évaluer le polynôme et afficher sa représentation.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef POLYNOME_H
#define POLYNOME_H

#include <array>
#include <stdexcept>
#include <cmath>
#include <iostream>

constexpr int DEGREE_MAX = 10;

class Polynome
{
public:
    Polynome(int p_degree = 0);
    void insererCoefficient(int p_terme, double p_coefficient);
    int reqDegree() const;
    double reqCoefficient(int p_terme) const;
    double evaluerPolynome(double p_valeur) const;

    friend std::ostream &operator<<(std::ostream &p_os, const Polynome &p_polynome);

private:
    int m_degree;
    std::array<double, DEGREE_MAX> m_coefficients;
};

#endif // POLYNOME_H