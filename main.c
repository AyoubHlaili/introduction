#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(){}


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
	{
		for(i=0;i<nben;i++){
			printf("Donnez les info de l'enregistrement %i\n",i+1);
			printf("Donner la matricule ");
			scanf("%i",&matricule);
			printf("Donner le nom ");
			scanf("%s",&nom);
			printf("Donner le prenom ");
			scanf("%s",&prenom);
			fprintf(pf,"%d\n%s\n%s\n",matricule,nom,prenom);
			
			
		}
	fclose(pf);	
	}
	return 0;
	//thanks
}
