
typedef struct Racional_st Racional_pt;

Racional_pt* criaRacional(long int num, long int den);

void destroiRacional(Racional_pt* R);

Racional_pt* copiaRacional(Racional_pt* R1, Racional_pt* R2);

int comparaRacionais(Racional_pt* R1, Racional_pt* R2);

int equivalencia(Racional_pt* R1, Racional_pt* R2);

int denominadorZero(Racional_pt* R);

int numeroZero(Racional_pt* R);

int ambosZero(Racional_pt* R);

Racional_pt* somaRacionais(Racional_pt* R1, Racional_pt* R2, Racional_pt* R3);