#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *pf;
	int i,nben;
	int matricule ;
	char nom[12],prenom[12];
	printf("Donner le nombre d'enregistrements ");
	scanf("%i",&nben);
	pf=fopen("INFORM.TXT","w");
	if(pf==NULL){
		printf("erreur.\n");
	}
	else 
	
	fclose(pf);	
	}
	return 0;
	//thanks
}
