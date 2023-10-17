#include <stdio.h>
#include <stdlib.h>
void evento12(){
    // contexto
    printf("Navegando pelo espaço por milhares anos-luz \n");
    printf("Uma nave espacial amigável receptou o sinal\n");
    printf("Salvando a sua tripulação, levando a nave para o seu planeta natal \n");
    // chamar a função navegando()
    printf("Nesse planeta as condicões de vida para os seres humanos são difíceis \n ");
    printf("A atmosfera não é compatível, devido a instabilidade dos gases Oxigênio \n");
    printf("A pouca da formação de ozônio na atmosfera, No entanto, as duas nacões \n");
    printf("Vão compartilhar suas tecnologias para tentar reverter o cenário do planeta \n");
    printf("Mas, ao tentar contornar esse cenário, percebe-se que neste planeta a taxa de sobrevivência é de 50%% \n");
    // chamar a função mostrarlinha()
    printf("Sob esse cenário, escolha o caminho que você deseja seguir\n");
    printf("[01] - Continuar no planeta e sobreviver com uma taxa de 50%% da população \n");
    printf("[02] - Abaster a nave e contunar a missão em buscar de um planeta que esteja com uma taxa de 100%% de sobrevivência \n");
    
    // funcao verificaEscolha()
     escolha = verificaEscolha(2);
    //  condicão 01 para continuar no planeta
    if ( escolha ==1){
        printf("Metade dos humanos conseguem sobreviver e conviver em harmonia com a espécie nativa \n");
        // chamar a função voceGanhou()
    }
    // condição 02 para continuar a missão
    else if ( escolha ==2){
        // chamar a função navegando()
        // chamar a função evento13()
        system("cls");
    }
}
