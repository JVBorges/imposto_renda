/* Integrantes : João Vitor Borges      Ciencia da Computação
                 Vinicius Blanco        Ciencia da Computação
                 Vinicius de Freitas    Ciencia da Computação     */
#include<stdio.h>
int main()
{
	float rend_tributaveis,previdencia,pensao,outros,valor_imposto,base_ir,aliquota_efetiva;
	int num_dp;
	printf("**************************************************\n");
    printf("*                                                *\n");
	printf("*                IMPOSTO DE RENDA                *\n");
	printf("*                                                *\n");
	printf("**************************************************\n");
	printf("\nDeclare sua renda tributavel: ");
	scanf("%f",&rend_tributaveis);
	printf("Declare sua previdencia social: ");
	scanf("%f",&previdencia);
	printf("Quantidade de dependentes: ");                  //Declaração dos valores.
	scanf("%d",&num_dp);
	printf("Pensao alimenticia: ");
	scanf("%f",&pensao);
	printf("Declare outras deducoes: ");
	scanf("%f",&outros);
	base_ir = rend_tributaveis - previdencia - (num_dp * 189.59) - pensao - outros; //Calculo da base.
	printf("\n**************************************************\n");

    //Verificação do valor da base para obtenção do valor do imposto de renda e da aliquota; exibição dos resultados.
	if(base_ir <= 1903.98){
		printf("\nIsento do Imposto de renda\n");
        printf("\n**************************************************\n");
	}else{
		// Ciro: a 1ª condição deste if é desnecessária (Corretude: -0.25)
		if(base_ir >= 1903.99 && base_ir <= 2826.65){
			valor_imposto = (base_ir - 1903.98) * 0.075;
			aliquota_efetiva = (valor_imposto / base_ir) * 100;
			printf("\nBase de calculo: %.2f\n",base_ir);
			printf("Valor do imposto: %.2f\nAliquota efetiva: %.f%%\n",valor_imposto,aliquota_efetiva);
            printf("\n**************************************************\n");
		}else{
			// Ciro: a 1ª condição deste if é desnecessária (Corretude: -0.25)		
			if(base_ir >= 2826.66 && base_ir <= 3751.05){
				valor_imposto = ((base_ir - 2826.65) * 0.15) + 69.20;
				aliquota_efetiva = (valor_imposto / base_ir) * 100;
                printf("\nBase de calculo: %.2f\n",base_ir);
                printf("Valor do imposto: %.2f\nAliquota efetiva: %.f%%\n",valor_imposto,aliquota_efetiva);
                printf("\n**************************************************\n");
			}else{
				// Ciro: a 1ª condição deste if é desnecessária (Corretude: -0.25)
				if(base_ir >= 3751.06 && base_ir <= 4664.68){
					valor_imposto = ((base_ir - 3751.05) * 0.225) + 69.20 + 138.66;
					aliquota_efetiva = (valor_imposto / base_ir) * 100;
                    printf("\nBase de calculo: %.2f\n",base_ir);
                    printf("Valor do imposto: %.2f\nAliquota efetiva: %.f%%\n",valor_imposto,aliquota_efetiva);
                    printf("\n**************************************************\n");
				}else{
					valor_imposto = ((base_ir - 4664.68) * 0.275) + 69.20 + 138.66 + 205.57;
					aliquota_efetiva = (valor_imposto / base_ir) * 100;
                    printf("\nBase de calculo: %.2f\n",base_ir);
                    printf("Valor do imposto: %.2f\nAliquota efetiva: %.f%%\n",valor_imposto,aliquota_efetiva);
                    printf("\n**************************************************\n");
				}
			}
		}
	}
	// Ciro: deveria exibir a alíquota efetiva com pelo menos 1 casa de precisão (Interface: -0.5)
return 0;
}


/*---------------------
       AVALIAÇÃO
  ---------------------
  - Corretude...:  9.25
  - Interface...:  9.50
  - Legibilidade: 10.00 
  - Nota........:  9.35
  ---------------------*/
