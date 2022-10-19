/**
 * @file Individu.h
 * @author Mathis
 * @brief spécifie une classe Individu en relation réciproque avec sa Voiture
 * @details Ce fichier implante un Individu définis par un nom, prenom.
 * 
 * La classe définit également la voiture conduite par l'individu
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*
  Spécifie une classe Individu en relation réciproque avec sa Voiture
  Auteur : Lopistéguy
  Version : 0.1
  Date : 12/08/2022
*/

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief Représente un Individu
 * @warning Actuellement, un Individu est associé à une Voiture
 * @deprecated Utiliser la classe Personne
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom; 

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
  
  /**
   * @brief Construit un nouvel objet Individu a partir de son nom et prenom
   * 
   */  
    Individu(string = "", string = "");
    // destructeur
    ~Individu();
/**
 * @brief retourne l'identité de l'individu
 * 
 * @return une chaine de caractère
 * @bug Une espace de trop entre le nom et le prénom
 * @todo ajouter un attribut pour choisir si on retourne une chaine de typer "nom prenom" ou "prenom nom"
 */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la voiture conduite par l'individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H