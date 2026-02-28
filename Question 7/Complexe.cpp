/**
 * @file Complexe.cpp
 * @author yoqzii
 * @brief Implémentation de la classe Complexe pour représenter des nombres complexes
 * avec des opérations de base telles que l'addition, la soustraction, la multiplication et le conjugué.
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "Complexe.h"

using std::ostream;

Complexe::Complexe(double p_partieReelle, double p_partieImaginaire)
    : m_partieReelle(p_partieReelle), m_partieImaginaire(p_partieImaginaire)
{
}

Complexe Complexe::operator+(const Complexe &p_complexe) const
{
    return Complexe(m_partieReelle + p_complexe.m_partieReelle, m_partieImaginaire + p_complexe.m_partieImaginaire);
}

Complexe Complexe::operator-(const Complexe &p_complexe) const
{
    return Complexe(m_partieReelle - p_complexe.m_partieReelle, m_partieImaginaire - p_complexe.m_partieImaginaire);
}

Complexe Complexe::operator*(const Complexe &p_complexe) const
{
    double partieReelle = m_partieReelle * p_complexe.m_partieReelle - m_partieImaginaire * p_complexe.m_partieImaginaire;
    double partieImaginaire = m_partieReelle * p_complexe.m_partieImaginaire + m_partieImaginaire * p_complexe.m_partieReelle;
    return Complexe(partieReelle, partieImaginaire);
}

Complexe Complexe::conjugue() const
{
    return Complexe(m_partieReelle, -m_partieImaginaire);
}

ostream &operator<<(ostream &p_os, const Complexe &p_complexe)
{
    p_os << "(" << p_complexe.m_partieReelle << ", " << p_complexe.m_partieImaginaire << ")";
    return p_os;
}