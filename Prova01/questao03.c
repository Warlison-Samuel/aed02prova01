#include <stdio.h>
#include <stdlib.h>


void entrada03(int *valorcompra, int *pagamento){
    printf("quanto custa o produto? ");
    scanf("%d", valorcompra);
    printf("quanto vc recebeu de pagamento? ");
    scanf("%d", pagamento);
}

void processamento03(int *valorcompra,int *pagamento,int *troco, int *nota100, int *nota10, int *nota1){
    if(valorcompra>pagamento){
        printf("PAGAMENTO NEGADO");
    }else{
        *troco = pagamento - valorcompra;
        *nota100 = *troco/100;
        *nota10 = *troco% 10;
        *troco = nota10;
        *nota1 = *troco;
    }
}

void saida03(int *nota100, int *nota10, int *nota1){
    printf("seu troco tem %d notas de 100 \n", *nota100 );
    printf("seu troco tem %d notas de 10\n", *nota10 );
    printf("seu troco tem %d notas de 1\n", *nota1 );
};


void questao03(void){
    int vcompra, pagamento, troco, n100, n10, n1;

    entrada03(&vcompra, &pagamento);
    processamento03(&vcompra, &pagamento, &troco, &n100, &n10, n1 );
    saida03(&n100, &n10, &n1);

}
