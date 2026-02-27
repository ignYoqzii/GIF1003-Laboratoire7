/**
 * @file Polynome.cpp
 * @author yoqzii
 * @brief Implémentation de la classe Polynome qui représente un polynôme avec des méthodes pour insérer des coefficients, évaluer le polynôme et afficher sa représentation.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "Polynome.h"

Polynome::Polynome(int p_degree) : m_degree(p_degree), m_coefficients{}
{
    if (m_degree < 0 || m_degree > DEGREE_MAX)
    {
        throw std::out_of_range("Le degré doit être entre 0 et " + std::to_string(DEGREE_MAX));
    }
}

void Polynome::insererCoefficient(int p_terme, double p_coefficient)
{
    if (p_terme < 0 || p_terme > m_degree)
    {
        throw std::out_of_range("Le terme doit être entre 0 et " + std::to_string(m_degree));
    }
    m_coefficients[p_terme] = p_coefficient;
}

int Polynome::reqDegree() const
{
    return m_degree;
}

double Polynome::reqCoefficient(int p_terme) const
{
    if (p_terme < 0 || p_terme > m_degree)
    {
        throw std::out_of_range("Le terme doit être entre 0 et " + std::to_string(m_degree));
    }
    return m_coefficients[p_terme];
}

double Polynome::evaluerPolynome(double p_valeur) const
{
    double resultat = 0.0;
    for (int i = 0; i <= m_degree; ++i)
    {
        resultat += m_coefficients[i] * std::pow(p_valeur, i);
    }
    return resultat;
}

std::ostream &operator<<(std::ostream &p_os, const Polynome &p_polynome)
{
    bool vide = true;

    for (int i = p_polynome.reqDegree(); i >= 0; --i)
    {
        double coefficient = p_polynome.reqCoefficient(i);
        if (coefficient != 0)
        {
            vide = false;

            if (i != p_polynome.reqDegree())
            {
                p_os << (coefficient > 0 ? " + " : " - ");
            }
            else if (coefficient < 0)
            {
                p_os << "-";
            }

            p_os << std::abs(coefficient);

            if (i >= 1)
            {
                p_os << "x";
                if (i > 1)
                    p_os << "^" << i;
            }
        }
    }

    if (vide)
        p_os << "0";

    return p_os;
}