#include <stdio.h>

int main(){
	char estado[20], codigodacarta[20], nomedacidade1[20], nomedacidade2[20];
	int npt1, npt2;
	float km1, pib1, cdp1, cpc1, km2, pib2, cdp2, cpc2, SP;
	unsigned long int populacao1, populacao2;
	
	printf("primeira carta \n");
	
	printf("digite o seu estado: \n");
	scanf("%s", &estado);
	
	printf("digite o código da carta: \n");
	scanf("%s", &codigodacarta);
	
	printf("digite o nome da cidade: \n");
	scanf("%s", &nomedacidade1);
	
	printf("digite a população: \n");
	scanf("%d", &populacao1);
	
	printf("digite o número de pontos turísticos: \n");
	scanf("%d", &npt1);
	
	printf("digite a área em km²: \n");
	scanf("%f", &km1);
	
	printf("digite o PIB: \n");
	scanf("%f", &pib1);
	
	cdp1 = populacao1 / km1;
	cpc1 = pib1 / populacao1;
	
	
	printf("Estado: %s\n", estado);
	printf("Seu código da carta é:%s\n", codigodacarta);
	printf("Cidade:%s\n", nomedacidade1);
	printf("População:%d\n", populacao1);
	printf("Pontos Turísticos:%d\n", npt1);
	printf("Área(km²):%f\n", km1);
	printf("PIB:%f\n", pib1);
	printf("Densidade populacioanl:%f\n", cdp1);
	printf("PIB per capita:%f\n", cpc1);
	
	printf("Segunda carta \n");
	
	printf("digite o seu estado: \n");
	scanf("%s", &estado);
	
	printf("digite o código da carta: \n");
	scanf("%s", &codigodacarta);
	
	printf("digite o nome da cidade: \n");
	scanf("%s", &nomedacidade2);
	
	printf("digite a população: \n");
	scanf("%d", &populacao2);
	
	printf("digite o número de pontos turísticos: \n");
	scanf("%d", &npt1);
	
	printf("digite a área em km²: \n");
	scanf("%f", &km2);
	
	printf("digite o PIB: \n");
	scanf("%f", &pib2);
	
	cdp2 = populacao2 / km2;
	cpc2 = pib2 / populacao2;
	
	printf("Estado: %s\n", estado);
	printf("Seu código da carta é:%s\n", codigodacarta);
	printf("Cidade:%s\n", nomedacidade2);
	printf("População:%d\n", populacao2);
	printf("Pontos Turísticos:%d\n", npt2);
	printf("Área(km²):%f\n", km2);
	printf("PIB:%f\n", pib2);
	printf("Densidade populacional:%f\n", cdp2);
	printf("PIB per capita:%f\n", cpc2);
	
	float SP1, SP2;
	
	printf("carta1: %s (população: %d)\n", nomedacidade1, populacao2);
	printf("carta2: %s (população: %d)\n", nomedacidade2, populacao2);
	if (populacao1 > populacao2){
		printf("população: Carta 1 ganhou\n");
	} else {
		printf("população: carta 2 ganhou\n");
	}
	
	printf("carta 1: %s (pontos turísticos:%d)\n",nomedacidade1, npt1);
	printf("carta 2: %s (pontos turísticos:%d)\n",nomedacidade2, npt2);
	if (npt1 > npt2){
		printf("pontos turísticos: carta 1 ganhou\n");
	} else {
		printf("pontos turísticos: carta 2 ganhou\n");
	}
	
	printf("carta 1:%s (Área(km²):%.2f)\n", nomedacidade1, km1);
	printf("carta 2:%s (Área(km²):%.2f)\n", nomedacidade2, km2);
	if (km1 > km2){
		printf("Área(km²): carta 1 ganhou\n");
	} else {
		printf("Área(km²): carta 2 ganhou\n");
	}
	
	printf("carta 1:%s (PIB: %.2f)\n", nomedacidade1, pib1);
	printf("carta 2:%s (PIB: %.2f)\n", nomedacidade2, pib2);
	if (pib1 > pib2){
		printf("PIB: carta 1 ganhou\n");
	} else {
		printf ("PIB: carta 2 ganhou\n");
	}
	
	printf("carta 1:%s (Densidade populacional:%.2f)\n", nomedacidade1, cdp1);
	printf("carta 2:%s (Densidade populacional:%.2f)\n", nomedacidade2, cdp2);
	if (cdp1 < cdp2){
		printf("Densidade populacional: carta 1 ganhou\n");
	} else {
		printf ("Densidade populacional: carta 2 ganhou\n");
	}
	
	printf("carta 1:%s (PIB per capita:%.2f)\n", nomedacidade1, cpc1);
	printf("carta 2:%s (PIB per capita:%.2f)\n", nomedacidade2, cpc2);
	if (cpc1 > cpc2){
		printf("PIB per capita: carta 1 ganhou\n");
	} else {
		printf ("PIB per capita: carta 2 gannhou\n");
	}
	
	SP1 = (populacao1 + npt1 + km1 + pib1 + cpc1) / cdp1;
	SP2 = (populacao2 + npt2 + km2 + pib2 + cpc2) / cdp2;
	
	printf("carta 1:%s (Super Poder:%.2f)\n", nomedacidade1, SP1);
	printf("carta 2:%s (Super Poder:%.2f)\n", nomedacidade2, SP2);
	if (SP1 > SP2){
		printf("Super Poder da carta 1 é maior\n");
	} else {
		printf("Super poder da carta 2 é maior\n");
		
	}
		}