void evento05(){
    // Declaração da variável para o upgrade
    int opcao;
    // Declaração da variável para o comando (for)
    int i;
    // contexto
    printf("Após tanto tempo de viagem surge a oportunidade de um upgrade");
     printf("Com os conhecimentos adqueridos pela IA EVA nesse meio tempo \n");
    printf("Escolha qual upgrade que voce deseja escolher  \n");
    printf("[01] +2 unidades de sondas extras \n");
    printf("[02] +10%% de combustível extra \n");
    scanf("%d", &opcao);
    // Condição criada se a variável opcao for igual a 1
    if (opcao ==1){
        printf("Otima escolha!!\n");
        printf("com essa opção a sua nave ganha 2 sondas adicionais\n ");
        printf("para explorar outros planetas a serem descobertos \n");
        system("pause");
        system("cls");
        for(i =0; i <12; i++){
        printf("NAVEGANDO...\n");
        sleep(1);
        }
    }
     // Condição criada se a variável opcao for igual a 2
    else if ( opcao ==2){
         printf("Otima escolha!!\n");
        printf("Com essa opção a sua nave ganha 2 sondas adicionais\n ");
        printf("Para explorar outros planetas a serem descobertos \n");
         system("pause");
         system("cls");
        
        for ( i =0; i <12; i++){ 
        printf("NAVEGANDO...\n");
        sleep(1);
        }
    }
    // Finalização do contexto
    system("pause");
    system("cls");
    printf("Navegando pelo vasto universo, vendo aquele vazio com milhões de estrelas\n");
    printf("Acaba ficando em êxtase com a possibilidade se vai ou nao encontrar um novo \n");
    printf("Lugar para se chamar de casa provocando uma grande ansiedade, vendo a necessidade\n");
    printf("Repousar Logo, quando acorda a nave sobrevoa um planeta com anéis e cores semelhantes\n");
    printf("a da terra, até que recebe uma mensagem pelo sistema de comunicações\n");
}
