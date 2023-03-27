// matrícula, nota da primeira prova, nota da segunda prova, nota do primeiro trabalho e nota do segundo trabalho.

// matrícula, média das provas, média dos trabalhos e média final.

float calcular_media(float num1,float num2){
    float res;
    res = (num1+num2)/2;
    return res;
}

void main(){
    int matricula;
    float nota1,nota2,trab1,trab2,mediaProva,mediaTrab,mediaFinal;

    prinf("Digite a matricula:");
    scanf("%d",matricula);
    prinf("Digite a primeira nota da prova:");
    scanf("%f",nota1);
    prinf("Digite a segunda nota da prova:");
    scanf("%f",nota2);
    prinf("Digite a primeira nota do trabalho:");
    scanf("%f",trab1);
    prinf("Digite a segunda nota do trabalho:");
    scanf("%f",trab2);

    mediaProva = calcular_media(nota1,nota2);
    mediaTrab = calcular_media(trab1,trab2);
    mediaFinal = calcular_media(mediaProva,mediaTrab);

    printf("Matricula:%d...MediaDaProva:%f(2)...MediaDoTrabalho:%f...MediaFinal:%f",matricula,mediaProva,mediaTrab,mediaFinal);
}