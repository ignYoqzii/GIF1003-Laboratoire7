# Laboratoire 7 — Révision  
**GIF-1003 — Programmation avancée en C++**  
Université Laval — Faculté des sciences et de génie  
Département d’informatique et de génie logiciel

---

## Contenu du laboratoire

Ce laboratoire regroupe plusieurs exercices de révision portant sur :

- Les fonctions  
- La résolution de problèmes  
- L’implémentation de classes  
- Les tableaux  
- La surcharge d’opérateurs  

---

## 1. Analyse de réussite d’un examen

Écrire un programme complet en C++ permettant :

- De saisir les résultats de **10 étudiants**  
  - `0` → échec  
  - `1` → réussite  
- D’afficher :
  - Le nombre d’étudiants ayant réussi  
  - Le nombre d’étudiants ayant échoué  
- Si **80% ou plus** des étudiants réussissent, afficher :  
  **« Relever le niveau de l'examen »**

---

## 2. Génération d’un nom d’utilisateur

Écrire un programme C++ qui :

1. Demande :
   - Le prénom  
   - Le nom  
   - La date de naissance (jour, mois, année)
2. Génère un nom d’utilisateur en concaténant :
   - Les **2 premières lettres du prénom**
   - Les **3 premières lettres du nom**
   - Le **jour** de naissance
   - Le **mois** de naissance

Exemple :  
Prénom *Marc*, Nom *Tremblay*, Naissance *12/04* → **MaTre1204**

---

## 3. Génération multiple de noms d’utilisateur

Écrire un programme C++ qui :

- Demande le prénom et le nom d’un utilisateur
- Génère un nom d’utilisateur formé de :
  - Les initiales (ex. Marc Potvin → **MP**)  
  - Un numéro séquentiel basé sur ces initiales  
    - Marc Potvin → **MP1**  
    - Michèle Poitras → **MP2**  
    - Stéphane Kirouac → **SK1**
- Conserve une **liste complète** des noms d’utilisateur
- Permet :
  - D’afficher la liste sur demande
  - De retrouver le nom et prénom à partir d’un nom d’utilisateur

---

## 4. Débordement — Factorielle

Écrire un programme qui :

- Calcule les factorielles de **1 à 5**
- Affiche les résultats sous forme de tableau

Question :  
> Quelle difficulté empêche de calculer facilement **20!** ?

Réponse attendue :  
→ Le **débordement** des types entiers (valeur trop grande pour `int` ou `long`).

---

## 5. Jeu TicTacToe — Classe

Créer une classe `TicTacToe` contenant :

- Un tableau `3 x 3` d’entiers (initialisé à 0 dans le constructeur)
- Un programme permettant à **deux joueurs** de jouer :
  - Joueur 1 → place un `1`
  - Joueur 2 → place un `2`
- Chaque coup doit être joué dans une case vide
- Après chaque coup :
  - Vérifier s’il y a un gagnant
  - Sinon déterminer si la partie est nulle

---

## 6. Classe *Polynome*

Créer une classe `Polynome` représentant un polynôme de la forme :

$a_0 + a_1x + a_2x^2 + \dots + a_nx^n$ avec $n < 10$.

Fonctionnalités requises :

- Constructeur créant un polynôme **nul** de degré `n`
- Méthode pour insérer le coefficient du *iᵉ* terme
- Méthode pour accéder au coefficient du *iᵉ* terme
- Méthode pour **évaluer** le polynôme pour une valeur donnée de `x`

Écrire un programme de démonstration utilisant toutes les méthodes.

---

## 7. Classe *Complexe* — Surcharge d’opérateurs

Créer une classe `Complexe` permettant d’effectuer des opérations sur les nombres complexes de la forme :

$a + ib$

Utiliser des attributs `double`.

Fonctionnalités :

- Constructeur avec valeurs par défaut
- Méthodes pour :
  - **Addition**  
    $(a + ib) + (c + id) = (a + c) + i(b + d)$
  - **Soustraction**  
    $(a + ib) - (c + id) = (a - c) + i(b - d)$
  - **Multiplication**  
    $(a + ib)(c + id) = (ac - bd) + i(ad + bc)$
  - **Conjugué**  
    $a + ib \rightarrow a - ib$
  - **Affichage** sous la forme `(a, b)`

Écrire un programme pilote pour tester la classe.
