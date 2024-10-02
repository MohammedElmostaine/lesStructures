#include <stdio.h>

typedef struct rec {
        float largeur;
        float longueur;
    }rectangle;


float airerec (rectangle rec1);
void challengeI();
void challengeII();
void challengeIII();
void challengeIV();

void challengeI(){
    typedef struct personne
    {
        char nom[20];
        char prenom[20];
        int age;
    }prs;
    prs personne1 = {"mohammed", "elmostaine", 25};
    printf("nom    : %s\nprenom : %s\nage    : %d\n", personne1.nom, personne1.prenom, personne1.age);

}

void challengeII(){
     typedef struct personne
    {
        char nom[20];
        char prenom[20];
        float note[5];
    }prs;
    prs personne1 = {"mohammed", "elmostaine",{15, 12, 14, 14, 12}};

    printf("nom    : %s\nprenom : %s\nnote   :\n", personne1.nom, personne1.prenom);
    for(int i = 0; i < 5; i++){
    printf("note %d : %.2f\n", i+1 ,personne1.note[i]);
    }
}


void challengeIII(){

    rectangle rec1 ={ 10, 21};
   printf("%.2f", airerec(rec1));

}


float airerec (rectangle rec1){
    return rec1.largeur * rec1.longueur;
}

void challengeIV(){
    struct point
    {
        int x;
        int y;    
    };
    struct point Point;
    struct point *p;
    p = &Point;
    printf("entrez le x de point :");
    scanf("%d", &(p->x));
    printf("entrez le y du point :");
    scanf("%d", &(p->y));
    printf("le x est : %d\n", p->x);
    printf("le y est : %d", p->y);


}



int main(){
        int choix;
         do {
            
            printf("\nExercices sur les Tableaux en C:\n");
            printf("1. Définition et Utilisation de Structure");
            printf("2. Structure avec Tableau.\n");
            printf("3. Passage de Structure en Argument.\n");
            printf("4. Structure avec Pointeurs.\n");
            printf("5. Structure et Fonction de Retour.\n");
            printf("0. Quitter\n");
            printf("Choisissez une option: ");
            scanf("%d", &choix);

            switch (choix)
            {
                case 1:
                    challengeI(); 
                case 2:
                    challengeII();
                    break;
                case 3:
                    challengeIII(); 
                    break;
                case 4:
                    challengeIV();
                    break;
                case 5:
                   
                    break;
            
            }
            
            
    } while (choix != 0);
    
    return 0;



}