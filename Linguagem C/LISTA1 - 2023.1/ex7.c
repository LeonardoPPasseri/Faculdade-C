int calcularnotas(int valor){
    int cem,cinquenta,vinte,dez,cinco,dois,um,total;
    cem = valor/100;
    valor = valor%100;
    cinquenta = valor/50;
    valor = valor%50;
    vinte = valor/20;
    valor = valor%20;
    dez = valor/10;
    valor = valor%10;
    cinco = valor/5;
    valor = valor%5;
    dois = valor/2;
    valor = valor%2;
    um = valor;
    total = cem + cinquenta + vinte + dez + cinco + dois + um;
    printf("%d cedulas");
}