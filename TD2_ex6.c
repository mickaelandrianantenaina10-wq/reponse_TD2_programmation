/*FONCTIONS_UTILISEES
VARIABLES
  i EST_DU_TYPE NOMBRE
  j EST_DU_TYPE NOMBRE
  A EST_DU_TYPE LISTE
  B EST_DU_TYPE LISTE
  M EST_DU_TYPE NOMBRE
  N EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrer la dimension du tableau A et qu'il ne depasse pas de 100:"
  AFFICHER* "Il faut que la dimension du tableau A et superieur a B"
  LIRE M
  AFFICHER "Entrer la dimension du tableau D et qu'il ne depasse pas de 50:"
  LIRE N
  POUR i ALLANT_DE 0 A M-1
    DEBUT_POUR
    AFFICHER "Entrer un nombre pour le tableau A:"
    LIRE A[i]
    FIN_POUR
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    AFFICHER "Entrer un nombre pour le tableau B:"
    LIRE B[i]
    FIN_POUR
  j PREND_LA_VALEUR 0
  POUR i ALLANT_DE M A M+N-1
    DEBUT_POUR
    A[i] PREND_LA_VALEUR B[j]
    j PREND_LA_VALEUR j+1
    FIN_POUR
  AFFICHER* "Le nouveau valeur du Tableau A est:"
  POUR i ALLANT_DE 0 A M+N-1
    DEBUT_POUR
    AFFICHER* A[i]
    FIN_POUR
FIN_ALGORITHME
*/
#include <stdio.h>
	int main()
		{
			float A[100],B[50];
			int M,N,i,j;
			printf("entrer la dimension du tableau A et qu'il ne depasse pas de '50':\n");
			scanf("%d",&M);
			printf("entrer la dimension du tableau B et qu'il ne depasse pas de 50:\n");
			scanf("%d",&N);
			for(i=0;i<M;i++)
			    {
			        printf("Entrer un nombre pour le tableau A:");
			        scanf("%f",&A[i]);
			    }
			for(i=0;i<N;i++)
			    {
			        printf("Entrer un nombre pour le tableau B:");
			        scanf("%f",&B[i]);
			    }
			j=0;
			for(i=M;i<M+N;i++)
			    {
			        A[i]=B[j];
			        j=j+1;
			    }
			printf("\n Le nouveau valeur du tableau A est:\n");    
			for(i=0;i<M+N;i++)
			    {
			        printf("%f \n",A[i]);
			    }
			return 0;
		}
