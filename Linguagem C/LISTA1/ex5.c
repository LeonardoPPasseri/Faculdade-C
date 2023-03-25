int calcularhorario(int hora,int minuto){
    int res;
    res = hora*60 + minuto;
    return res;
}

int difhorario(int horapre, int minutopre, int horache, int minutoche){
    int totalprevisto, totalchegada, dif;
    totalprevisto = calcularhorario(horapre,minutopre);
    totalchegada = calcularhorario(horache,minutoche);
    dif = totalchegada - totalprevisto;
    return dif;
}

