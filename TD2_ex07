/*
VARIABLE
 U[3] tableau reel
 V[3] tableau reel
 x={'x','y','z'} CHAINE DE CHARACTER 
 i entier
 n entier
 DEBUT
 AFFICHER "Calcul produit scalaire de deux vecteur de dimensions n"
 AFFICHER "Entrer le dimension des deux vecteur(2 ou 3):"
 LIRE (n)
 SI (n>3) ALORS
     AFFICHER "Ce n'est pas possible car la dimension est superieur à 3"
 SINON SI (n==0) ALORS
     AFFICHER "comme le dimension est 0 , il n'y aps de vecteur"
 SINON SI(n==1) ALORS
     AFFICHER "Le dimension 1 n'est pas une vecteur"
 SINON
     POUR (i=0;i<n;i++) ALORS
         AFFICHER "Entrer le valeur " x[i] "de vecteur u"
         LIRE U[i]
         AFFICHER "Entrer le valeur " x[i] "de vecteur v"
         LIRE V[i]
     FIN POUR
 x=U[0]*V[0]+V[1]+U[1]+U[2]+V[0]
 FIN SI    
AFFICHER "Le produit scalaire des 2 vecteur u et v est:"
AFFICHER x    
*/
#include<stdio.h>
    int main()
        {
            float U[3],V[3],x1;
            int i,n;
            char x[4]= "xyz";
            printf("Calcul produit scalaire de deux vecteur de dimensions n\n");
            printf("Entrer le dimension des deux vecteur(2 ou 3):\n");
            scanf("%d",&n);
            if(n>3)
                {
                    printf("Ce n'est pas possible car la dimension est superieur à 3\n");
                }
            else if (n==0)
                {
                    printf("comme le dimension est 0 , il n'y a pas de vecteur");
                }
            else if (n==1)
                {
                    printf("Le dimension 1 n'est pas une vecteur mais une point");
                }
            else if (n==3)
                {
                    for(i=0;i<n;i++)
                    {
                        printf("Entrer le valeur %c de vecteur u:",x[i]);
                        scanf("%f",&U[i]);
                        printf("Entrer le valeur %c de vecteur v",x[i]);
                        scanf("%f",&V[i]);
                    }
                    x1=(U[0]*V[0]+U[1]*V[1]);
                    printf("\nLe produit scalaire des 2 vecteur u et v est:%f",x1);
                }
            else 
                {
                    for(i=0;i<n;i++)
                    {
                        printf("Entrer le valeur %c de vecteur u:",x[i]);
                        scanf("%f",&U[i]);
                        printf("Entrer le valeur %c de vecteur v",x[i]);
                        scanf("%f",&V[i]);
                    }
                    x1=(U[0]*V[0]+U[1]*V[1]+U[2]*V[2]);
                    printf("\nLe produit scalaire des 2 vecteur u et v est:%f",x1);
                }   
            return 0;
            
        }
