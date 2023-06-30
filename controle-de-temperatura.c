#include <stdio.h> // Asenate de Melo Protti - TRO5V

int main() {
    
	int opcao, cooler;
	float tensao, temperatura;
    
    do {
       
    	printf("\nDigite o valor da tensao de saida: ");
    	scanf("%f", &tensao);
	 
    	temperatura = tensao * 100;
    	
    	if (temperatura < 0) {
	 		return 0;
	 	}
	 
    	printf("A temperatura dissipada e: %.3f graus celsius\n", temperatura);
	 
	 
    if (temperatura > 25 && temperatura > 18) {
     printf("\nO cooler esta ligado!\n");
     cooler = 1;
    } 
    
    else if (temperatura < 18 && temperatura < 25) {
    	printf("\nCooler desligado!\n");
    	cooler = 0;
	}
	
	else {
		printf ("\nCooler mantem o estado anterior\n");
			
			if (cooler == 1){
				
				printf ("\nEstado: ligado.");
			}
			
			if (cooler == 0){
				printf ("\nEstado: desligado.\n");
			}
	}
	 
    
    } while (tensao >= 0);

    return 0;
    
}
