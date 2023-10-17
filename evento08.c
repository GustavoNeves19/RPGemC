#include <stdio.h>
void evento08(){
    // do while para loop da sonda 
    do
    {
        // contexto
         printf("Olhando através dos sensores,foi possívil visualizar e detecta um planeta majestoso\n"); 
         printf("Com um horizonte verdejante e oceanos reluzantes,Além de possuir uma estrela semelhante do sol\n");
        //  chamar a funcao navegando()
        printf("Diante dessa descoberta, escolha qual ação você irá realizar \n");
        printf("[01] - Pousar nesse planeta \n");
        printf("[02] - Investiga com uma sonda \n");
        printf("[03] - Continuar a viagem \n");
        escolha = verificaEscolha(3);
        // condição 01 para o ganhar o jogo
        if ( escolha==1){
            printf("MISSION SUCCESSFUL\n");
            printf("O pouso foi feito com segurança \n");
            printf("E o processso de adapatação foi feito com sucesso \n");
            printf("Parabéns, sua missão foi concluída com sucesso\n");
            // chamar a função voceGanhou()
        }
        // Condição 02 para investigação da sonda 
        else if ( escolha ==2){
            printf("Dados recebidos pela sonda: \n");
            printf("O planeta é coberto pora florestas exuberantes \n");
            printf("Com uma variadade de vida vegetal e animal \n");
            printf("A atmosfera é composta por Oxigênioe Nitrogênio para a vida humana \n");
        }
        // condição 03 para continuar a viagem
        else if (escolha==3){
            // chamar a função navegando()
            // chamar a função evento11()
        }

    } while (escolha==2);
}
