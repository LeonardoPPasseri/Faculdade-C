float salario_base(float valor_hora,int horas){
    float salario;
    salario = valor_hora*horas;
    return salario;
}

float inss(float salario){
    float desconto;
    desconto = (salario * 0.11);

    if(desconto > 450.27){
        desconto = 450.27;
        return desconto;
    }else{
        return desconto;
    }
}

float imposto_renda(float salario){
    float imposto;

    if (salario <= 1800){
        imposto = 0;
        return imposto;
    }
    if(salario > 2900){
        imposto = salario * 0.275;
        return imposto;
    }
    else{
        imposto = salario * 0.15;
        return imposto;
    }
}

int main(){
    int matricula,horastrab;
    float valor_horatrab,salario,desconto_inss,impostoderenda,salarioliq;

    printf("Digite a matricula, valor da hora-trabalho, horas trabalhadas: ");
    scanf("%d%f%d",&matricula,&valor_horatrab,&horastrab);

    salario = salario_base(valor_horatrab,horastrab);
    desconto_inss = inss(salario);
    impostoderenda = imposto_renda(salario);


    salarioliq = salario - desconto_inss - impostoderenda;

    printf("\nMatricula: %d \nSalarioBase: %.2f \nINSS: %.2f \nImposto de Renda: %.2f \nSalario Liquido: %.2f",matricula,salario,desconto_inss,impostoderenda,salarioliq);

    return 0;
}