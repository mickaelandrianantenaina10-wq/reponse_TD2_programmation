/*
FONCTIONS_UTILISEES
VARIABLES
  i EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE 
  pmax EST_DU_TYPE NOMBRE
  max EST_DU_TYPE NOMBRE
  l EST_DU_TYPE NOMBRE
  k EST_DU_TYPE NOMBRE
  T EST_DU_TYPE LISTE
  j EST_DU_TYPE NOMBRE
  N EST_DU_TYPE NOMBRE
  TPOS EST_DU_TYPE LISTE
  TNEG EST_DU_TYPE LISTE
  compteur EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrer la dimension de notre tableau T qui ne depasse pas de 50:"
  LIRE N
  s PREND_LA_VALEUR 0
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    AFFICHER* "Entrer un nombre pour le tableau T:"
    LIRE T[i]
    s PREND_LA_VALEUR s+T[i]
    FIN_POUR
    AFFICHER "Les element du tableau T sont:"
    POUR (i=0;i<N;i++) FAIRE
    	AFFICHER T[i]
    FIN POUR
  AFFICHER* "les somme des element du tableau T est:"
  AFFICHER* s
  max PREND_LA_VALEUR T[0]
  POUR i ALLANT_DE 1 A N-1
    DEBUT_POUR
    SI (T[i]>max) ALORS
      DEBUT_SI
      max PREND_LA_VALEUR T[i]
      FIN_SI
    FIN_POUR
  AFFICHER* "La valeur maximal est:"
  AFFICHER max
  AFFICHER "  et il est le "
  compteur PREND_LA_VALEUR 0
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    SI (T[i]==max) ALORS
      DEBUT_SI
      compteur PREND_LA_VALEUR compteur+1
      pmax PREND_LA_VALEUR i+1
      SI (compteur>1) ALORS
        DEBUT_SI
        AFFICHER " et "
        FIN_SI
      AFFICHER pmax
      AFFICHER "e"
      FIN_SI
    FIN_POUR
  AFFICHER* " nombre a entrer"
  j PREND_LA_VALEUR 0
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    SI (T[i]!=0) ALORS
      DEBUT_SI
      T[j] PREND_LA_VALEUR T[i]
      j PREND_LA_VALEUR j+1
      FIN_SI
    FIN_POUR
  AFFICHER* "Les nouveau valeur de notre tableau T sans '0':"
  POUR i ALLANT_DE 0 A j-1
    DEBUT_POUR
    AFFICHER* T[i]
    FIN_POUR
  N PREND_LA_VALEUR j
  l PREND_LA_VALEUR 0
  k PREND_LA_VALEUR 0
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    SI (T[i]>0) ALORS
      DEBUT_SI
      TPOS[l] PREND_LA_VALEUR T[i]
      l PREND_LA_VALEUR l+1
      FIN_SI
      SINON
        DEBUT_SINON
        TNEG[k] PREND_LA_VALEUR T[i]
        k PREND_LA_VALEUR k+1
        FIN_SINON
    FIN_POUR
  AFFICHER* "les contenue du tableau TPOS sont :"
  SI (l==0) ALORS
    DEBUT_SI
    AFFICHER* "rien"
    FIN_SI
  POUR i ALLANT_DE 0 A l-1
    DEBUT_POUR
    AFFICHER* TPOS[i]
    FIN_POUR
  AFFICHER* "les contenue du tableau TNEG sont :"
  SI (k==0) ALORS
    DEBUT_SI
    AFFICHER* "rien"
    FIN_SI
  POUR i ALLANT_DE 0 A k-1
    DEBUT_POUR
    AFFICHER* TNEG[i]
    FIN_POUR
  //exercice5
  AFFICHER* "Affichage des element du tableau T dans l'ordre inverse:"
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    AFFICHER* T[N-1-i]
    FIN_POUR
FIN_ALGORITHME
*/
#include<stdio.h>
int main()
	{
		int i,pmax,l,k,j,N,compteur;
		float s,max,TNEG[50];
		double TPOS[50],T[50];
		//exercice1
		printf("Entrer la dimension de notre tableau T qui ne depasse pas de 50:\n");
		scanf("%d",&N);
		s=0;
		for (i=0;i<N;i++)
			{
				printf("Entrer un nombre pour le tableau T:");
				scanf ("%lf",&T[i]);
				s=s+T[i];
			}
		printf("\nLes element du tableau T sont:\n");	
		for(i=0;i<N;i++)
			{
				printf("%f \n",T[i]);
			}
	    printf("la somme des element du tableau T est:%f ",s);
	    //exercice2
	    max=T[0];
	    for (i=0;i<N;i++)
	    	{
	    		if (T[i]>max)
	    			{
	    				max=T[i];
	    			}
	    	}
	    printf("\nLe valeur maximal est:%f",max);
	    printf("  et il est le ");
	    compteur=0;
	    for (i=0;i<N;i++)
	    	{
	    		if (T[i]==max)
	    		{
	    			compteur=compteur+1;
	    			pmax=i+1;
	    			if (compteur>1)
	    				{
	    					printf(" et ");
	    				}
	    			printf("%de",pmax);	
	    		}
	    	}
	    	printf(" nombre a entrer\n");
	    //exercice3
	    j=0;
	    for(i=0;i<N;i++)
	    	{
	    		if(T[i]!=0)
	    			{
	    				T[j]=T[i];
	    				j=j+1;
	    			}
	    	}
	    printf("les nouveau valeur du tableau T sans '0':\n");
	    for(i=0;i<j;i++)
	    	{
	    		printf("%f \n",T[i]);
	    	}
	    //exercice4	
	    N=j;
	    l=0;
	    k=0;
	    for(i=0;i<N;i++)
	    	{
	    		if(T[i]>0)
	    			{
	    				TPOS[l]=T[i];
	    				l=l+1;
	    			}
	    		else
	    			{
	    				TNEG[k]=T[i];
	    				k=k+1;
	    			}
	    	}
	    printf("Les contenu de TPOS sont:\n");
	    	if(l==0)
	    		{
	    			printf("rien\n");
	    		}
	    	else
	    	{
	    		for(i=0;i<l;i++)
	    			{
	    				printf("%f \n",TPOS[i]);
	    			}
	    	}		
	    	printf("Les contenu de TNEG sont:\n");
	    	if(k==0)
	    		{
	    			printf("rien\n");
	    		}
	    	else
	    		{
	    			for(i=0;i<k;i++)
	    				{
	    					printf("%f \n",TNEG[i]);
	    				}
	    		}		
	    //exercice5
	    printf("Affichage des element du tableau T dans l'ordre inverse:\n");
	    for(i=0;i<N;i++)
	    	{
	    		printf("%f \n",T[N-1-i]);
	    	}
	    return 0;
	}
