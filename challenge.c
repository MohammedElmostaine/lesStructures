#include <stdio.h>






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

void airerec ()
/*void challengeIII(){
   typedef struct rec {
        int largeur;
        int longueur;
    }rectangle
    rectangle 

}


int main(){

challengeII();


}

/* scanf("%d", &choix);
            getchar();

            switch (choix)
            {
            case 1:
                ajouter( );
                break;
            case 2:
                afficher();
                break;
            case 3:
                rechercher();
                break;
            case 4:
                modifier();
                break;
            case 5:
                supprimer();
                break;
            case 0:
                
                break;
    
            default:
            printf("-choix invalide \n");
            
            }


        } while (choix != 0);
}