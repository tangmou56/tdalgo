/* Menu du TP 2 - Base de donnees sur des personnes*/
#include<stdio.h>
#include<string.h>
#define N 50

/* Definition du type date (jour, mois, annee) */
typedef struct { int jour, mois, an; } t_date;

/* Definition du type sexe avec la convention INSEE */
typedef enum { homme = 1, femme } t_sexe;

/* Definition du type personne (prenom, sexe, date de naissance) */
typedef struct { char prenom[20] ; t_sexe sexe ; t_date naissance ; } t_personne ;

void ajouter_personne(t_personne* amis, int* nb_amis);
void afficher_anniv(t_personne* amis, int nb_amis);
void afficher_nombre_fh(t_personne* amis, int nb_amis);
void afficher_base(t_personne* amis, int nb_amis);
void afficher_cadet(t_personne* amis, int nb_amis);