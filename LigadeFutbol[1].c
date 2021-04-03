#include<stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

struct Equipos_futbol{
		char Equipo[10];
		int golespartido;
		int gf;
		int gc;
		int dg;
		int pts;
		int pj;
		
		
	
}Equipos[20];

struct Equipos_futbol2{
		char Equipo[10];
		int golespartido;
		int gf;
		int gc;
		int dg;
		int pts;
		int pj;
		
		
	
}Equipos2[20];




int main(){
	
	int cont=0; 
	
	for(cont=0;cont<20;cont++){
	Equipos[cont].gc=0;
	Equipos[cont].gf=0;
	Equipos[cont].golespartido=0;
	Equipos[cont].pj=0;
	Equipos[cont].pts=0;	
		
		
	}
	
	printf("--Bienvenido al Programa de LaLiga--");
	printf("\n\n_Ahora registre los equipos a participar_\n");
	printf("\nPor favor digite un maximo de 10 caracteres o el programa podria fallar...\n");
	cont=0;
	do{
	
		fflush(stdin);
		printf("\nDigite el equipo %i: ", cont+1);gets(Equipos[cont].Equipo);
		
		cont++;
	}while(cont<20);
	int marijuana;
	int lector_de_char[20];
	for(marijuana=0;marijuana<20;marijuana++){
		lector_de_char[marijuana]=strlen(Equipos[marijuana].Equipo);
	}
	for(marijuana=0;marijuana<20;marijuana++){
		if(lector_de_char[marijuana]==1){
			Equipos[marijuana].Equipo[1]=' ';
			Equipos[marijuana].Equipo[2]=' ';
			Equipos[marijuana].Equipo[3]=' ';
			Equipos[marijuana].Equipo[4]=' ';
			Equipos[marijuana].Equipo[5]=' ';
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==2){
			Equipos[marijuana].Equipo[2]=' ';
			Equipos[marijuana].Equipo[3]=' ';
			Equipos[marijuana].Equipo[4]=' ';
			Equipos[marijuana].Equipo[5]=' ';
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==3){
			Equipos[marijuana].Equipo[3]=' ';
			Equipos[marijuana].Equipo[4]=' ';
			Equipos[marijuana].Equipo[5]=' ';
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==4){
			Equipos[marijuana].Equipo[4]=' ';
			Equipos[marijuana].Equipo[5]=' ';
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==5){
			Equipos[marijuana].Equipo[5]=' ';
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==6){
			Equipos[marijuana].Equipo[6]=' ';
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==7){
			Equipos[marijuana].Equipo[7]=' ';
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==8){
			Equipos[marijuana].Equipo[8]=' ';
			Equipos[marijuana].Equipo[9]=' ';
		}
		if(lector_de_char[marijuana]==9){
			Equipos[marijuana].Equipo[9]=' ';
		}
	}
	
	int cont2=1,cont3=2,cont4=3,cont5=4,cont6=5,cont7=6,cont8=7,cont9=8,cont10=9,cont11=10,cont12=11,cont13=12,cont14=13,cont15=14,cont16=15,cont17=16,cont18=17,cont19=18,cont20=19;
		int aux=cont11, aux2=cont12, aux3=cont13,aux4=cont14, aux5=cont15, aux6=cont16,aux7=cont17, aux8=cont18, aux9=cont19,aux10=cont20, aux11=cont10, aux12=cont9,aux13=cont8, aux14=cont7, aux15=cont6,aux16=cont5, aux17=cont4, aux18=cont3, aux19=cont2;
		int i, i2, pos, auxi, auxi2, auxi3, auxi4; 
		char auxi1[100];
		int i3=1;
		
	    fflush(stdin);
	for(cont=0;cont<38;cont++){
		for(i=0;i<20;i++){
			Equipos[i].golespartido=0;
		}
		fflush(stdin);
		printf("\n--Jornada %i--",cont+1);
		
		printf("\n%s vs %s",Equipos[0].Equipo, Equipos[cont11].Equipo); printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[0].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont11].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont2].Equipo, Equipos[cont12].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont2].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont12].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont3].Equipo, Equipos[cont13].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont3].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont13].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont4].Equipo, Equipos[cont14].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont4].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont14].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont5].Equipo, Equipos[cont15].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont5].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont15].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont6].Equipo, Equipos[cont16].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont6].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont16].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont7].Equipo, Equipos[cont17].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont7].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont17].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont8].Equipo, Equipos[cont18].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont8].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont18].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont9].Equipo, Equipos[cont19].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont9].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont19].golespartido);fflush(stdin);
		printf("\n%s vs %s",Equipos[cont10].Equipo, Equipos[cont20].Equipo);printf("   Anote el resultado del partido: ");scanf("%i", &Equipos[cont10].golespartido);printf("\t\t\t\t\t\t\t     vs ");scanf("%i", &Equipos[cont20].golespartido);fflush(stdin);
		
				if(Equipos[0].golespartido>Equipos[cont11].golespartido){
					Equipos[0].pj++;Equipos[cont11].pj++;
					Equipos[0].pts=Equipos[0].pts+3;
					Equipos[0].gf=Equipos[0].gf+Equipos[0].golespartido; Equipos[cont11].gf=Equipos[cont11].gf+Equipos[cont11].golespartido;
					Equipos[0].gc=Equipos[0].gc+Equipos[cont11].golespartido; Equipos[cont11].gc=Equipos[cont11].gc+Equipos[0].golespartido;
					Equipos[0].dg=Equipos[0].gf-Equipos[0].gc; Equipos[cont11].dg=Equipos[cont11].gf-Equipos[cont11].gc;
			
				}else if(Equipos[0].golespartido==Equipos[cont11].golespartido){
					Equipos[0].pj++;Equipos[cont11].pj++;
					Equipos[0].pts=Equipos[0].pts+1; Equipos[cont11].pts=Equipos[cont11].pts+1;
					Equipos[0].gf=Equipos[0].gf+Equipos[0].golespartido; Equipos[cont11].gf=Equipos[cont11].gf+Equipos[cont11].golespartido;
					Equipos[0].gc=Equipos[0].gc+Equipos[cont11].golespartido; Equipos[cont11].gc=Equipos[cont11].gc+Equipos[0].golespartido;
					Equipos[0].dg=Equipos[0].gf-Equipos[0].gc; Equipos[cont11].dg=Equipos[cont11].gf-Equipos[cont11].gc;
			
				} else if(Equipos[0].golespartido<Equipos[cont11].golespartido){
					Equipos[0].pj++;Equipos[cont11].pj++;
					Equipos[cont11].pts=Equipos[cont11].pts+3;
					Equipos[0].gf=Equipos[0].gf+Equipos[0].golespartido; Equipos[cont11].gf=Equipos[cont11].gf+Equipos[cont11].golespartido;
					Equipos[0].gc=Equipos[0].gc+Equipos[cont11].golespartido; Equipos[cont11].gc=Equipos[cont11].gc+Equipos[0].golespartido;
					Equipos[0].dg=Equipos[0].gf-Equipos[0].gc; Equipos[cont11].dg=Equipos[cont11].gf-Equipos[cont11].gc;
				
				}
				if(Equipos[cont2].golespartido>Equipos[cont12].golespartido){
					Equipos[cont2].pj++;Equipos[cont12].pj++;
					Equipos[cont2].pts=Equipos[cont2].pts+3;
					Equipos[cont2].gf=Equipos[cont2].gf+Equipos[cont2].golespartido; Equipos[cont12].gf=Equipos[cont12].gf+Equipos[cont12].golespartido;
					Equipos[cont2].gc=Equipos[cont2].gc+Equipos[cont12].golespartido; Equipos[cont12].gc=Equipos[cont12].gc+Equipos[cont2].golespartido;
					Equipos[cont2].dg=Equipos[cont2].gf-Equipos[cont2].gc; Equipos[cont12].dg=Equipos[cont12].gf-Equipos[cont12].gc;
			
				}else if(Equipos[cont2].golespartido==Equipos[cont12].golespartido){
					Equipos[cont2].pj++;Equipos[cont12].pj++;
					Equipos[cont2].pts=Equipos[cont2].pts+1;Equipos[cont12].pts=Equipos[cont12].pts+1;
					Equipos[cont2].gf=Equipos[cont2].gf+Equipos[0].golespartido; Equipos[cont12].gf=Equipos[cont12].gf+Equipos[cont12].golespartido;
					Equipos[cont2].gc=Equipos[cont2].gc+Equipos[cont12].golespartido; Equipos[cont12].gc=Equipos[cont12].gc+Equipos[cont2].golespartido;
					Equipos[cont2].dg=Equipos[cont2].gf-Equipos[cont2].gc; Equipos[cont12].dg=Equipos[cont12].gf-Equipos[cont12].gc;
			
				} else if(Equipos[cont2].golespartido<Equipos[cont12].golespartido){
					Equipos[cont2].pj++;Equipos[cont12].pj++;
					Equipos[cont12].pts=Equipos[cont12].pts+3;
					Equipos[cont2].gf=Equipos[cont2].gf+Equipos[cont2].golespartido; Equipos[cont12].gf=Equipos[cont12].gf+Equipos[cont12].golespartido;
					Equipos[cont2].gc=Equipos[cont2].gc+Equipos[cont12].golespartido; Equipos[cont12].gc=Equipos[cont12].gc+Equipos[cont2].golespartido;
					Equipos[cont2].dg=Equipos[cont2].gf-Equipos[cont2].gc; Equipos[cont12].dg=Equipos[cont12].gf-Equipos[cont12].gc;
				
				}
				if(Equipos[cont3].golespartido>Equipos[cont13].golespartido){
					Equipos[cont3].pj++;Equipos[cont13].pj++;
					Equipos[cont3].pts=Equipos[cont3].pts+3;
					Equipos[cont3].gf=Equipos[cont3].gf+Equipos[cont3].golespartido; Equipos[cont13].gf=Equipos[cont13].gf+Equipos[cont13].golespartido;
					Equipos[cont3].gc=Equipos[cont3].gc+Equipos[cont13].golespartido; Equipos[cont13].gc=Equipos[cont13].gc+Equipos[cont3].golespartido;
					Equipos[cont3].dg=Equipos[cont3].gf-Equipos[cont3].gc; Equipos[cont13].dg=Equipos[cont13].gf-Equipos[cont13].gc;
			
				}else if(Equipos[cont3].golespartido==Equipos[cont13].golespartido){
					Equipos[cont3].pj++;Equipos[cont13].pj++;
					Equipos[cont3].pts=Equipos[cont3].pts+1;Equipos[cont13].pts=Equipos[cont13].pts+1;
					Equipos[cont3].gf=Equipos[cont3].gf+Equipos[cont3].golespartido; Equipos[cont13].gf=Equipos[cont13].gf+Equipos[cont13].golespartido;
					Equipos[cont3].gc=Equipos[cont3].gc+Equipos[cont13].golespartido; Equipos[cont13].gc=Equipos[cont13].gc+Equipos[cont3].golespartido;
					Equipos[cont3].dg=Equipos[cont3].gf-Equipos[cont3].gc; Equipos[cont13].dg=Equipos[cont13].gf-Equipos[cont13].gc;
			
				} else if(Equipos[cont3].golespartido<Equipos[cont13].golespartido){
					Equipos[cont3].pj++;Equipos[cont13].pj++;
					Equipos[cont13].pts=Equipos[cont13].pts+3;
					Equipos[cont3].gf=Equipos[cont3].gf+Equipos[cont3].golespartido; Equipos[cont13].gf=Equipos[cont13].gf+Equipos[cont13].golespartido;
					Equipos[cont3].gc=Equipos[cont3].gc+Equipos[cont13].golespartido; Equipos[cont13].gc=Equipos[cont13].gc+Equipos[cont3].golespartido;
					Equipos[cont3].dg=Equipos[cont3].gf-Equipos[cont3].gc; Equipos[cont13].dg=Equipos[cont13].gf-Equipos[cont13].gc;
				
				}
				if(Equipos[cont4].golespartido>Equipos[cont14].golespartido){
					Equipos[cont4].pj++;Equipos[cont14].pj++;
					Equipos[cont4].pts=Equipos[cont4].pts+3;
					Equipos[cont4].gf=Equipos[cont4].gf+Equipos[cont4].golespartido; Equipos[cont14].gf=Equipos[cont14].gf+Equipos[cont14].golespartido;
					Equipos[cont4].gc=Equipos[cont4].gc+Equipos[cont14].golespartido; Equipos[cont14].gc=Equipos[cont14].gc+Equipos[cont4].golespartido;
					Equipos[cont4].dg=Equipos[cont4].gf-Equipos[cont4].gc; Equipos[cont14].dg=Equipos[cont14].gf-Equipos[cont14].gc;
			
				}else if(Equipos[cont4].golespartido==Equipos[cont14].golespartido){
					Equipos[cont4].pj++;Equipos[cont14].pj++;
					Equipos[cont4].pts=Equipos[cont4].pts+1; Equipos[cont14].pts=Equipos[cont14].pts+1;
					Equipos[cont4].gf=Equipos[cont4].gf+Equipos[cont4].golespartido; Equipos[cont14].gf=Equipos[cont14].gf+Equipos[cont14].golespartido;
					Equipos[cont4].gc=Equipos[cont4].gc+Equipos[cont14].golespartido; Equipos[cont14].gc=Equipos[cont14].gc+Equipos[cont4].golespartido;
					Equipos[cont4].dg=Equipos[cont4].gf-Equipos[cont4].gc; Equipos[cont14].dg=Equipos[cont14].gf-Equipos[cont14].gc;
			
				} else if(Equipos[cont4].golespartido<Equipos[cont14].golespartido){
					Equipos[cont4].pj++;Equipos[cont14].pj++;
					Equipos[cont14].pts=Equipos[cont14].pts+3;
					Equipos[cont4].gf=Equipos[cont4].gf+Equipos[cont4].golespartido; Equipos[cont14].gf=Equipos[cont14].gf+Equipos[cont14].golespartido;
					Equipos[cont4].gc=Equipos[cont4].gc+Equipos[cont14].golespartido; Equipos[cont14].gc=Equipos[cont14].gc+Equipos[cont4].golespartido;
					Equipos[cont4].dg=Equipos[cont4].gf-Equipos[cont4].gc; Equipos[cont14].dg=Equipos[cont14].gf-Equipos[cont14].gc;
				
				}
				if(Equipos[cont5].golespartido>Equipos[cont15].golespartido){
					Equipos[cont5].pj++;Equipos[cont15].pj++;
					Equipos[cont5].pts=Equipos[cont5].pts+3;
					Equipos[cont5].gf=Equipos[cont5].gf+Equipos[cont5].golespartido; Equipos[cont15].gf=Equipos[cont15].gf+Equipos[cont15].golespartido;
					Equipos[cont5].gc=Equipos[cont5].gc+Equipos[cont15].golespartido; Equipos[cont15].gc=Equipos[cont15].gc+Equipos[cont5].golespartido;
					Equipos[cont5].dg=Equipos[cont5].gf-Equipos[cont5].gc; Equipos[cont15].dg=Equipos[cont15].gf-Equipos[cont15].gc;
			
				}else if(Equipos[cont5].golespartido==Equipos[cont15].golespartido){
					Equipos[cont5].pj++;Equipos[cont15].pj++;
					Equipos[cont5].pts=Equipos[cont5].pts+1;Equipos[cont15].pts=Equipos[cont15].pts+1;
					Equipos[cont5].gf=Equipos[cont5].gf+Equipos[cont5].golespartido; Equipos[cont15].gf=Equipos[cont15].gf+Equipos[cont15].golespartido;
					Equipos[cont5].gc=Equipos[cont5].gc+Equipos[cont15].golespartido; Equipos[cont15].gc=Equipos[cont15].gc+Equipos[cont5].golespartido;
					Equipos[cont5].dg=Equipos[cont5].gf-Equipos[cont5].gc; Equipos[cont15].dg=Equipos[cont15].gf-Equipos[cont15].gc;
			
				} else if(Equipos[cont5].golespartido<Equipos[cont15].golespartido){
					Equipos[cont5].pj++;Equipos[cont15].pj++;
					Equipos[cont15].pts=Equipos[cont15].pts+3;
					Equipos[cont5].gf=Equipos[cont5].gf+Equipos[cont5].golespartido; Equipos[cont15].gf=Equipos[cont15].gf+Equipos[cont15].golespartido;
					Equipos[cont5].gc=Equipos[cont5].gc+Equipos[cont15].golespartido; Equipos[cont15].gc=Equipos[cont15].gc+Equipos[cont5].golespartido;
					Equipos[cont5].dg=Equipos[cont5].gf-Equipos[cont5].gc; Equipos[cont15].dg=Equipos[cont15].gf-Equipos[cont15].gc;
				
				}
				if(Equipos[cont6].golespartido>Equipos[cont16].golespartido){
					Equipos[cont6].pj++;Equipos[cont16].pj++;
					Equipos[cont6].pts=Equipos[cont6].pts+3;
					Equipos[cont6].gf=Equipos[cont6].gf+Equipos[cont6].golespartido; Equipos[cont16].gf=Equipos[cont16].gf+Equipos[cont16].golespartido;
					Equipos[cont6].gc=Equipos[cont6].gc+Equipos[cont16].golespartido; Equipos[cont16].gc=Equipos[cont16].gc+Equipos[cont6].golespartido;
					Equipos[cont6].dg=Equipos[cont6].gf-Equipos[cont6].gc; Equipos[cont16].dg=Equipos[cont16].gf-Equipos[cont16].gc;
			
				}else if(Equipos[cont6].golespartido==Equipos[cont16].golespartido){
					Equipos[cont6].pj++;Equipos[cont16].pj++;
					Equipos[cont6].pts=Equipos[cont6].pts+1;Equipos[cont16].pts=Equipos[cont16].pts+1;
					Equipos[cont6].gf=Equipos[cont6].gf+Equipos[cont6].golespartido; Equipos[cont16].gf=Equipos[cont16].gf+Equipos[cont16].golespartido;
					Equipos[cont6].gc=Equipos[cont6].gc+Equipos[cont16].golespartido; Equipos[cont16].gc=Equipos[cont16].gc+Equipos[cont6].golespartido;
					Equipos[cont6].dg=Equipos[cont6].gf-Equipos[cont6].gc; Equipos[cont16].dg=Equipos[cont16].gf-Equipos[cont16].gc;
			
				} else if(Equipos[cont6].golespartido<Equipos[cont16].golespartido){
					Equipos[cont6].pj++;Equipos[cont16].pj++;
					Equipos[cont16].pts=Equipos[cont16].pts+3;
					Equipos[cont6].gf=Equipos[cont6].gf+Equipos[cont6].golespartido; Equipos[cont16].gf=Equipos[cont16].gf+Equipos[cont16].golespartido;
					Equipos[cont6].gc=Equipos[cont6].gc+Equipos[cont16].golespartido; Equipos[cont16].gc=Equipos[cont16].gc+Equipos[cont6].golespartido;
					Equipos[cont6].dg=Equipos[cont6].gf-Equipos[cont6].gc; Equipos[cont16].dg=Equipos[cont16].gf-Equipos[cont16].gc;
				
				}
				if(Equipos[cont7].golespartido>Equipos[cont17].golespartido){
					Equipos[cont7].pj++;Equipos[cont17].pj++;
					Equipos[cont7].pts=Equipos[cont7].pts+3;
					Equipos[cont7].gf=Equipos[cont7].gf+Equipos[cont7].golespartido; Equipos[cont17].gf=Equipos[cont17].gf+Equipos[cont17].golespartido;
					Equipos[cont7].gc=Equipos[cont7].gc+Equipos[cont17].golespartido; Equipos[cont17].gc=Equipos[cont17].gc+Equipos[cont7].golespartido;
					Equipos[cont7].dg=Equipos[cont7].gf-Equipos[cont7].gc; Equipos[cont17].dg=Equipos[cont17].gf-Equipos[cont17].gc;
			
				}else if(Equipos[cont7].golespartido==Equipos[cont17].golespartido){
					Equipos[cont7].pj++;Equipos[cont17].pj++;
					Equipos[cont7].pts=Equipos[cont7].pts+1;Equipos[cont17].pts=Equipos[cont17].pts+1;
					Equipos[cont7].gf=Equipos[cont7].gf+Equipos[cont7].golespartido; Equipos[cont17].gf=Equipos[cont17].gf+Equipos[cont17].golespartido;
					Equipos[cont7].gc=Equipos[cont7].gc+Equipos[cont17].golespartido; Equipos[cont17].gc=Equipos[cont17].gc+Equipos[cont7].golespartido;
					Equipos[cont7].dg=Equipos[cont7].gf-Equipos[cont7].gc; Equipos[cont17].dg=Equipos[cont17].gf-Equipos[cont17].gc;
			
				} else if(Equipos[cont7].golespartido<Equipos[cont17].golespartido){
					Equipos[cont7].pj++;Equipos[cont17].pj++;
					Equipos[cont17].pts=Equipos[cont17].pts+3;
					Equipos[cont7].gf=Equipos[cont7].gf+Equipos[cont7].golespartido; Equipos[cont17].gf=Equipos[cont17].gf+Equipos[cont17].golespartido;
					Equipos[cont7].gc=Equipos[cont7].gc+Equipos[cont17].golespartido; Equipos[cont17].gc=Equipos[cont17].gc+Equipos[cont7].golespartido;
					Equipos[cont7].dg=Equipos[cont7].gf-Equipos[cont7].gc; Equipos[cont17].dg=Equipos[cont17].gf-Equipos[cont17].gc;
				
				}
				if(Equipos[cont8].golespartido>Equipos[cont18].golespartido){
					Equipos[cont8].pj++;Equipos[cont18].pj++;
					Equipos[cont8].pts=Equipos[cont8].pts+3;
					Equipos[cont8].gf=Equipos[cont8].gf+Equipos[cont8].golespartido; Equipos[cont18].gf=Equipos[cont18].gf+Equipos[cont18].golespartido;
					Equipos[cont8].gc=Equipos[cont8].gc+Equipos[cont18].golespartido; Equipos[cont18].gc=Equipos[cont18].gc+Equipos[cont8].golespartido;
					Equipos[cont8].dg=Equipos[cont8].gf-Equipos[cont8].gc; Equipos[cont18].dg=Equipos[cont18].gf-Equipos[cont18].gc;
			
				}else if(Equipos[cont8].golespartido==Equipos[cont18].golespartido){
					Equipos[cont8].pj++;Equipos[cont18].pj++;
					Equipos[cont8].pts=Equipos[cont8].pts+1;Equipos[cont18].pts=Equipos[cont18].pts+1;
					Equipos[cont8].gf=Equipos[cont8].gf+Equipos[cont8].golespartido; Equipos[cont18].gf=Equipos[cont18].gf+Equipos[cont18].golespartido;
					Equipos[cont8].gc=Equipos[cont8].gc+Equipos[cont18].golespartido; Equipos[cont18].gc=Equipos[cont18].gc+Equipos[cont8].golespartido;
					Equipos[cont8].dg=Equipos[cont8].gf-Equipos[cont8].gc; Equipos[cont18].dg=Equipos[cont18].gf-Equipos[cont18].gc;
			
				} else if(Equipos[cont8].golespartido<Equipos[cont18].golespartido){
					Equipos[cont8].pj++;Equipos[cont18].pj++;
					Equipos[cont18].pts=Equipos[cont18].pts+3;
					Equipos[cont8].gf=Equipos[cont8].gf+Equipos[cont8].golespartido; Equipos[cont18].gf=Equipos[cont18].gf+Equipos[cont18].golespartido;
					Equipos[cont8].gc=Equipos[cont8].gc+Equipos[cont18].golespartido; Equipos[cont18].gc=Equipos[cont18].gc+Equipos[cont8].golespartido;
					Equipos[cont8].dg=Equipos[cont8].gf-Equipos[cont8].gc; Equipos[cont18].dg=Equipos[cont18].gf-Equipos[cont18].gc;
				
				}
				if(Equipos[cont9].golespartido>Equipos[cont19].golespartido){
					Equipos[cont9].pj++;Equipos[cont19].pj++;
					Equipos[cont9].pts=Equipos[cont9].pts+3;
					Equipos[cont9].gf=Equipos[cont9].gf+Equipos[cont9].golespartido; Equipos[cont19].gf=Equipos[cont19].gf+Equipos[cont19].golespartido;
					Equipos[cont9].gc=Equipos[cont9].gc+Equipos[cont19].golespartido; Equipos[cont19].gc=Equipos[cont19].gc+Equipos[cont9].golespartido;
					Equipos[cont9].dg=Equipos[cont9].gf-Equipos[cont9].gc; Equipos[cont19].dg=Equipos[cont19].gf-Equipos[cont19].gc;
			
				}else if(Equipos[cont9].golespartido==Equipos[cont19].golespartido){
					Equipos[cont9].pj++;Equipos[cont19].pj++;
					Equipos[cont9].pts=Equipos[cont9].pts+1; Equipos[cont19].pts=Equipos[cont19].pts+1;
					Equipos[cont9].gf=Equipos[cont9].gf+Equipos[cont9].golespartido; Equipos[cont19].gf=Equipos[cont19].gf+Equipos[cont19].golespartido;
					Equipos[cont9].gc=Equipos[cont9].gc+Equipos[cont19].golespartido; Equipos[cont19].gc=Equipos[cont19].gc+Equipos[cont9].golespartido;
					Equipos[cont9].dg=Equipos[cont9].gf-Equipos[cont9].gc; Equipos[cont19].dg=Equipos[cont19].gf-Equipos[cont19].gc;
			
				} else if(Equipos[cont9].golespartido<Equipos[cont19].golespartido){
					Equipos[cont9].pj++;Equipos[cont19].pj++;
					Equipos[cont19].pts=Equipos[cont19].pts+3;
					Equipos[cont9].gf=Equipos[cont9].gf+Equipos[cont9].golespartido; Equipos[cont19].gf=Equipos[cont19].gf+Equipos[cont19].golespartido;
					Equipos[cont9].gc=Equipos[cont9].gc+Equipos[cont19].golespartido; Equipos[cont19].gc=Equipos[cont19].gc+Equipos[cont9].golespartido;
					Equipos[cont9].dg=Equipos[cont9].gf-Equipos[cont9].gc; Equipos[cont19].dg=Equipos[cont19].gf-Equipos[cont19].gc;
				
				}
				if(Equipos[cont10].golespartido>Equipos[cont20].golespartido){
					Equipos[cont10].pj++;Equipos[cont20].pj++;
					Equipos[cont10].pts=Equipos[cont10].pts+3;
					Equipos[cont10].gf=Equipos[cont10].gf+Equipos[cont10].golespartido; Equipos[cont20].gf=Equipos[cont20].gf+Equipos[cont20].golespartido;
					Equipos[cont10].gc=Equipos[cont10].gc+Equipos[cont20].golespartido; Equipos[cont20].gc=Equipos[cont20].gc+Equipos[cont10].golespartido;
					Equipos[cont10].dg=Equipos[cont10].gf-Equipos[cont10].gc; Equipos[cont20].dg=Equipos[cont20].gf-Equipos[cont20].gc;
			
				}else if(Equipos[cont10].golespartido==Equipos[cont20].golespartido){
					Equipos[cont10].pj++;Equipos[cont20].pj++;
					Equipos[cont10].pts=Equipos[cont10].pts+1; Equipos[cont20].pts=Equipos[cont20].pts+1;
					Equipos[cont10].gf=Equipos[cont10].gf+Equipos[cont10].golespartido; Equipos[cont20].gf=Equipos[cont20].gf+Equipos[cont20].golespartido;
					Equipos[cont10].gc=Equipos[cont10].gc+Equipos[cont20].golespartido; Equipos[cont20].gc=Equipos[cont20].gc+Equipos[cont10].golespartido;
					Equipos[cont10].dg=Equipos[cont10].gf-Equipos[cont10].gc; Equipos[cont20].dg=Equipos[cont20].gf-Equipos[cont20].gc;
			
				} else if(Equipos[cont10].golespartido<Equipos[cont20].golespartido){
					Equipos[cont10].pj++;Equipos[cont20].pj++;
					Equipos[cont20].pts=Equipos[cont20].pts+3;
					Equipos[cont10].gf=Equipos[cont10].gf+Equipos[cont10].golespartido; Equipos[cont20].gf=Equipos[cont20].gf+Equipos[cont20].golespartido;
					Equipos[cont10].gc=Equipos[cont10].gc+Equipos[cont20].golespartido; Equipos[cont20].gc=Equipos[cont20].gc+Equipos[cont10].golespartido;
					Equipos[cont10].dg=Equipos[cont10].gf-Equipos[cont10].gc; Equipos[cont20].dg=Equipos[cont20].gf-Equipos[cont20].gc;
				
				}
				
				for(i2=0;i2<20;i2++){
					Equipos2[i2].gc=Equipos[i2].gc;
					Equipos2[i2].gf=Equipos[i2].gf;
					Equipos2[i2].pj=Equipos[i2].pj;
					Equipos2[i2].pts=Equipos[i2].pts;
					Equipos2[i2].dg=Equipos[i2].dg;
					strcpy(Equipos2[i2].Equipo, Equipos[i2].Equipo);
				}
				
				
				
				for(i2=0;i2<20;i2++){
					pos=i2;
					auxi=Equipos2[i2].pts;
					auxi2=Equipos2[i2].dg;
					auxi3=Equipos2[i2].gf;
					auxi4=Equipos2[i2].gc;
					strcpy(auxi1, Equipos2[i2].Equipo);
					
					while((pos>0)&&(auxi<Equipos2[pos-1].pts)){
					
						Equipos2[pos].pts=Equipos2[pos-1].pts;
						Equipos2[pos].dg=Equipos2[pos-1].dg;
						Equipos2[pos].gf=Equipos2[pos-1].gf;
						Equipos2[pos].gc=Equipos2[pos-1].gc;
						strcpy(Equipos2[pos].Equipo,Equipos2[pos-1].Equipo);
						pos--;
							
					}
					Equipos2[pos].pts=auxi;
					Equipos2[pos].dg=auxi2;
					Equipos2[pos].gf=auxi3;
					Equipos2[pos].gc=auxi4;
					strcpy(Equipos2[pos].Equipo, auxi1);
					
					while((pos>0)&&(auxi==Equipos2[pos-1].pts)&&(auxi2<Equipos2[pos-1].dg)){
						Equipos2[pos].pts=Equipos2[pos-1].pts;
						Equipos2[pos].dg=Equipos2[pos-1].dg;
						Equipos2[pos].gf=Equipos2[pos-1].gf;
						Equipos2[pos].gc=Equipos2[pos-1].gc;
						strcpy(Equipos2[pos].Equipo,Equipos2[pos-1].Equipo);
						pos--;
						
					} 
					
							
					Equipos2[pos].pts=auxi;
					Equipos2[pos].dg=auxi2;
					Equipos2[pos].gf=auxi3;
					Equipos2[pos].gc=auxi4;
					strcpy(Equipos2[pos].Equipo, auxi1);
						
					}
				
				
				
				printf("\n Equipos      PTS   DG   GF   GC   PJ");
				i3=1;
				for(i2=19;i2>=0;i2--){
					if(i2<=10){
						
						printf("\n%i.-%s", i3, Equipos2[i2].Equipo);
					printf("%i    %i    %i     %i    %i\n",Equipos2[i2].pts, Equipos2[i2].dg,Equipos2[i2].gf,Equipos2[i2].gc,Equipos2[i2].pj);
					i3++;
					} else if(i2>10){
					printf("\n%i.-%s", i3, Equipos2[i2].Equipo);
					printf(" %i    %i    %i    %i    %i\n",Equipos2[i2].pts, Equipos2[i2].dg,Equipos2[i2].gf,Equipos2[i2].gc,Equipos2[i2].pj);
					i3++;
					}
				}
		
		
		
		cont2=aux18;
		aux18=cont3;
		cont11=aux19;
		aux19=cont2;
		cont12=aux;
		aux=cont11;
		cont13=aux2;
		aux2=cont12;
		cont14=aux3;
		aux3=cont13;
		cont15=aux4;
		aux4=cont14;
		cont16=aux5;
		aux5=cont15;
		cont17=aux6;
		aux6=cont16;
		cont18=aux7;
		aux7=cont17;
		cont19=aux8;
		aux8=cont18;
		cont20=aux9;
		aux9=cont19;
		cont10=aux10;
		aux10=cont20;
		cont9=aux11;
		aux11=cont10;
		cont8=aux12;
		aux12=cont9;
		cont7=aux13;
		aux13=cont8;
		cont6=aux14;
		aux14=cont7;
		cont5=aux15;
		aux15=cont6;
		cont4=aux16;
		aux16=cont5;
		cont3=aux17;
		aux17=cont4;
		cont2=aux18;
		aux18=cont3;
		
		
		fflush(stdin);
		getch();
	}
	
	printf("\n\nFin del programa...");getch();
	return 0;
}

	
