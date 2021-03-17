#include <stdio.h>
// peso em outra planeta
 main() {
 int Pterra,gravidade;

//in
 printf("peso na Terra:\n");
 scanf("%i", &Pterra);
 printf("escolha um numero de 1 a 6:\n");
 scanf("%d", &gravidade);

//out
float Pplaneta=(Pterra/10);

switch(gravidade){
  case 1:
Pplaneta=(Pterra/10)*0.37;
  printf("peso em Mercúrio=%f",Pplaneta);
  break;
  case 2:
  Pplaneta=Pplaneta*0.88;
  printf("peso em Vênus=%f",Pplaneta);
  break;
  case 3:
  Pplaneta=Pplaneta*0.38;
  printf("peso em Marte=%f",Pplaneta);
  break;
  case 4:
  Pplaneta=Pplaneta*2.64;
  printf("peso em Jupiter=%f",Pplaneta);
  break;
  case 5:
  Pplaneta=Pplaneta*1.15;
  printf("peso em Saturno=%f",Pplaneta);
  break;
  case 6:
  Pplaneta=Pplaneta*1.17;
  printf("peso em Urano=%f",Pplaneta);
  break;
}
}