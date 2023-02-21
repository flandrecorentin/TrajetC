/*************************************************************************
                           Catalogue  -  Objet Catalogue
                             -------------------
    début                : 13/11/2021
    copyright            : (C) 2021 par FLANDRE Corentin et THOMAS Colin
    e-mail               : corentin.flandre@insa-lyon.fr                
                           colin.thomas1@insa-lyon.fr
*************************************************************************/

//---------- Interface du module <Catalogue> (fichier Catalogue.h) -------------------
#if ! defined ( Catalogue_H )
#define Catalogue_H
#include "Trajet.h"
#include "ListeTrajet.h"
class Catalogue{
  
//------------------------------------------------------------------------
// Rôle du module <Catalogue>
//
//
//------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
  // typedef struct unTrajet{
  //   Trajet data;
  //   unTrajet* next;
  // } unTrajet;

  // typedef struct{
  //   int size;
  //   unTrajet * PointeurTrajet;
  // } ListeTrajet;
//////////////////////////////////////////////////////////////////  PUBLIC
public:
//---------------------------------------------------- Fonctions publiques
// type Nom ( liste de paramètres );
// Mode d'emploi :
//
// Contrat :
//
//
Catalogue();
// Mode d'emploi :
// Constructeur de Catalogue
// Contrat :
//

~Catalogue(); // VIRTUAL OU PAS ? 
// Mode d'emploi :
// Destructeur d'un Trajet 
// Contrat :
//

void AjouterUnTrajet(Trajet * $unTrajet);
// Mode d'emploi : Ajoute le trajet rentré en parametres à la liste de
// trajets
// Contrat : Entrer un pointeur de Trajet correctement initialisé
//

void Chercher(const char * Depart, const char * Arrivee);
// Mode d'emploi : 
// Chercher un trajet dans la liste du catalogue à partir de son Départ et son Arrivee
// Contrat :
// Entrer un Départ et une Arrivee qui sont des tableaux de char constants se terminant par \0

void Charger(const char * nomCharge, const char * nomMode, const char* parametre1, const char* parametre2);
// Mode d'emploi : 
// Charger un fichier existant 
// Contrat :
// Il faut que le nom nomCharge renseigne soit valide sinon erreur

string ModeChargement(const char * mode);
// Mode d'emploi : 
// Verifie le mode de chargement
// Contrat :
// 
bool ModeIntervalle (const char* n, const char* m);
// Mode d'emploi : 
// Verifie la cohérence de l'intervalle pour le chargement
// Contrat :
// 


void Sauvegarder(const char * nomSauvegarde,const char * condition);
// Mode d'emploi : 
// Entrer le nom de sauvegarde et la condition
// La sauvegarde est proposée d'être) écrasée si le 
    // nom existe déjà
// Contrat : 
//   nomSauvegarde : Entrer un nom de fichier 
//    accepté par le système d'exploitation
//   condition :
//    N ou C ou S ou
//    D suivi d'une virgule et du nom du Départ
//    A suivi d'une virgule et du nom d'arrivée
//    AD suivi d'une virgule, du nom du départ, 
//      d'une autre virgule, du nom d'arrivee



const void AffichageCatalogue();
// Mode d'emploi :
// Destructeur d'un Trajet 
// Contrat :
//
protected:
  ListeTrajet maListeTrajet; // Déclaration de ma liste de trajets
  int size; // Taille de La liste de trajets
};
#endif // Catalogue_H

