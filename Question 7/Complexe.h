/**
 * @file Complexe.h
 * @author yoqzii
 * @brief Déclaration de la classe Complexe pour représenter des nombres complexes
 * @version 0.1
 * @date 2026-02-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef COMPLEXE_H
#define COMPLEXE_H

#include <sstream>

class Complexe
{
public:
    Complexe(double p_partieReelle = 0.0, double p_partieImaginaire = 0.0);

    Complexe operator+(const Complexe &p_complexe) const;
    Complexe operator-(const Complexe &p_complexe) const;
    Complexe operator*(const Complexe &p_complexe) const;
    Complexe conjugue() const;

    friend std::ostream &operator<<(std::ostream &p_os, const Complexe &p_complexe);

private:
    double m_partieReelle;
    double m_partieImaginaire;
};

#endif // COMPLEXE_H
