#include <stdio.h>
int main() {
    int cdc;
    int pop;
    int pt;
    float area;
    float pib;
    char cidade[50];
  
  
//cdc = Código da cidade
//pop = População
//pt = Pontos Turísticos

    printf("Código da cidade: \n");
    scanf ("%d", &cdc);

    printf ("População: \n");
    scanf ("%d", &pop);

    printf ("Área: \n");
    scanf ("%f", &area);

    printf ("PIB: \n");
    scanf ("%f", &pib);    

    printf ("Nome da cidade: \n");
    scanf ("%s", &cidade);
    printf ("\n");

    printf ("Código da Cidade: %d\n", cdc);
    printf ("Cidade: %s\n", cidade);
    printf ("Área: %f\n", area);
    printf ("População: %d\n", pop);
    printf ("PIB: %f\n", pib);
    printf ("\n");

    float densi = (float) pop / area;
    float pibp = (float) pib / pop;
// densi = Densidade populacional
// pibp = PIB per Capita  

    printf ("Densidade Populacional: %.2f\n", densi);
    printf("PIB per Capita: %.2f\n", pibp);


    return 0;
}
