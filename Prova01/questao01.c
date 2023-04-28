#include <stdio.h>
#include <stdlib.h>


void entrada01(float *raio){
    printf("digite o valor do raio");
    scanf("%f", raio);
}

void processamento01(float *raio, float *area, float *diametro, float *perimetro, float *volume){
    *diametro = 2 * *raio;
    *area = (3.14 * (*raio * *raio));
    *perimetro = 2 * 3.14 * *raio;
    *volume = (4/3) * 3.14 * *raio * *raio * *raio;

}

void saida01(float raio, float area, float diametro, float perimetro, float volume){
    printf("volume = %.5f \n", volume);
    printf("area = %.2f \n", area);
    printf("perimetro = %.2f \n", perimetro);
    printf("diametro = %.2f \n", diametro);
}

void questao01 (void){
    float r, a, d, p, v;

    entrada01(&r);

    processamento01(&r, &a, &d, &p, &v);

    saida01(r, a, d, p, v);

}
