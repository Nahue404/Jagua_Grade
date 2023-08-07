#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <Windows.h>

//Definición de la función limpiar
//Identifica que sistema operativo utiliza para borrar la consola

void limpiar() {
	#ifdef _WIN32
	    system("cls");  // Windows
	#elif defined(__unix__) || defined(__linux__) || defined(__APPLE__)
	    system("clear");  // Unix/Linux/macOS
	#endif
}

void color(){
	//CAMBIA EL COLOR A BLANCO
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
// Definición de la función logo
void logo() {
    //CAMBIA EL COLOR A BLANCO
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);//verde
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Amarillo

    		
	printf("...................................................................................................\n");
	printf("............................................;oolllcc:;,'...........................................\n");
	printf("............................;ldxxxdlc;'......lO0000000Okxdoc:;'....................................\n");
	printf("..........................'dO00000000Okoc,....oO0000000000000Okxoc;'...............................\n");
	printf("..........................l00000000000000ko;..,x0000000000000000000kdl;'...........................\n");
	printf("..........................o0000000000000000Ox:'lO00000000000OO000000000kdc,........................\n");
	printf("...............'cldkc.....o000000000000000000OxdO0000000000d;,oO0000000000Oxl,.....................\n");
	printf("..............,x0000k:....:O000000000000000000000000000000Oc..;k0000000000000Od:...................\n");
	printf("..............o000000k:....o0000000000000000000000000000000d;,oO000000000000000Od:.................\n");
	printf(".............cO0000000Oo'..,x0000000000000000000000000000000Ok0000000000000000000Oo,...............\n");
	printf("............,x0000000000kc'.;x0000000000000000Oxddk0000000000000000000Oolk000000000x;..............\n");
	printf("............cO000000000000kl:ck000000000000000l...;k000000000000000000k;'o0000000000d'.............\n");
	printf("...........'d000000000000000Okk00000000000000Oo...;k00000000000000000OkdodxxO0000000k,.............\n");
	printf("...........,k000000000000000000000000000000000Oxdxk0000000000Okxdoc:;,'.....,:oO0000d'.............\n");
	printf("...........,k00000000000000000000000000000000000000000Okxol:;,'................:k00O:..............\n");
	printf("...........,k00000000000000000OxkO0000000000000Okkxoc:,'........................cO0k;..............\n");
	printf("...........,k0000000000000000k:.'d000000000Okdl:,''.............................;k0Ol..............\n");
	printf("...........,k0000000000000000d'..:O00000000Okxddxxxxxxxxxxxxddollc:;............,k00Oo'............\n");
	printf("...........,k0000000000000000x,..lO00000000000000000000000000000000Oko;.........:O0000x;...........\n");
	printf("...........,k0000000Odlx00000Odclk000000000000000000000000000000000000Oo'.......l000000Ol'.........\n");
	printf("...........'d0000000d'.;k00000000000000000000000000000000000000000000000o......'x00000000x:........\n");
	printf("............l0000000l..'d00000000000000000000000000000000000000000000000x'.....:O000000000Oo,......\n");
	printf("............,k000000o..,x00000000000000000000000000000000000000000000000l......o000000000000kc.....\n");
	printf(".............lO00000kc;oO000000000000000000000000000000000000000000000Oo'.....:k00000000000000d;...\n");
	printf(".............,d0000000O0000000000000000000000000000000000000000000000kc......'d00000000000kdlll:...\n");
	printf("..............;k000000000000000000000000000000000000000000000000000Od,.......lO000000000Oo'........\n");
	printf("...............cO0000000000000000000000000000000000000000000000000x:........:k0000000000k;.........\n");
	printf("................cO0000000000000000000000000000000000000000000000kl'........;x00000000000O:.........\n");
	printf(".................:k0000000000000000000000000000000000000000000Od,.........,x0000000000000x;........\n");
	printf("..................;k000000000000000000000000000000000000000000d'..........l0000000000000Ol'........\n");
	printf("...................,dO000000000000000000000000000000000000000O:...........:O0000000000ko;..........\n");
	printf(".....................ck000000000000000000000000000000000000000o............,lxkOOOkdo:,............\n");
	printf("......................,oO0000000000000OxolcccclodxxO0000000000Oo'.............',,'.................\n");
	printf("........................;oO00000000ko:'............,:lxO00000000ko:'...............................\n");
	printf("..........................,lk000Od:'...................,:okO0000000Oxoc::;;;'......................\n");
	printf("............................'cdd;..........................;coxkO00000000Oxl'......................\n");
	printf("...............................................................';:cclllc:,.........................\n");
	printf("...................................................................................................\n");
	printf("...................................................................................................\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("	   d88b  .d8b.   d888b  db    db  .d8b.           d888b  d8888b.  .d8b.  d8888b. d88888b	\n");
	printf("	   `8P' d8' `8b 88' Y8b 88    88 d8' `8b         88' Y8b 88  `8D d8' `8b 88  `8D 88'		\n");
	printf("	    88  88ooo88 88      88    88 88ooo88         88      88oobY' 88ooo88 88   88 88ooooo	\n");
	printf("	    88  88~~~88 88  ooo 88    88 88~~~88         88  ooo 88`8b   88~~~88 88   88 88~~~~~	\n");
	printf("	db. 88  88   88 88. ~8~ 88b  d88 88   88         88. ~8~ 88 `88. 88   88 88  .8D 88.		\n");
	printf("	Y8888P  YP   YP  Y888P  ~Y8888P' YP   YP C88888D  Y888P  88   YD YP   YP Y8888D' Y88888P	\n");
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---¡La clave hacia el rendimiento estudiantil, gestiona y mejora tu desempeño académico con Jagua Grade!---");
	printf("\n");
	printf("\n");
	printf("==================================================================================================================");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}

int main() {
    setlocale(LC_ALL, ""); // Configurar localización para permitir imprimir caracteres acentuados
	
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------Variables-de-entrada----------------------------------------------------------------------------------------------

	int cantidad_materias;							     //Cantidad de materias que lleva el alumno
	int beneficios;								 		//Si tiene beneficio
	int tipo_evalua;								   //Cómo deseas cargar sus notas
	int parciales;								      //(1) Si esta hasta primera parcial o segunda o final
	int C_M, B_B, T_E, B_P;							 //Banderas para poder cargar el valor de nuevo de las operaciones si cargo mal 
	
//--------------------Variables-de-la-eleccion-(1)---------------------------------------------------------------------------------------
	
	int puntos_procesos;						 	  //Puntos de proceso para cargar
	int total_puntos = 0;							 //Suma de los puntos de proceso
	int total_puntos_requeridos = 0;		   		//La suma del total de puntos de cada materias
	int puntos_faltantes;					  	   //Puntos que le faltan para habilitar el final 
	int EP,EP1,EP2,PF, EP3;					   	  //Banderas para poder cargar el valor de nuevo de las parciales si cargo mal
	
	    
//--------------------Variables-de-la-eleccion-(2)----------------------------------------------------------------------------------------		
	
	int calificacion;							  //calificacion de cada materia
	int total_calificacion; 					 //total de la suma de calificaciones
    float promedio_nota;					 	//Promedio de notas que obtuvo
    int i,j,k;								   //Contadores para cada ciclos-C_j: C.Materias, C_i:Puntajes de P. y C_k:
    int prog; 							   	  //Continuar o no con el programa
    
	
//-----------------------------------------------IMPRESIONES-Y-RECOLECCION-DE-DATOS-------------------------------------------------------
    do{
	    //Imprime el logo de la aplicacion
		logo();
		
		printf("					=================================\n");
        printf("					          MENÚ PRINCIPAL         \n");
        printf("					=================================\n");
        printf("\n\n");
        
		//CAMBIA EL COLOR A BLANCO
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		
		printf("Ingrese la cantidad de materias que llevas en el Semestre: ");
	    scanf("%i", &cantidad_materias);
	    printf("\n\n\n");
	    
	    
		//Si carga mal los datos otra vez el bobo
		if(cantidad_materias < 1 || cantidad_materias > 11){
			printf("Error: La cantidad de materias ingresada no es válida. Por favor, ingrese un valor entre 1 y 11\n");
			//Le notificamos que vuelva a ingresar
			printf("Atención:¡Por favor, vuelva a ingresar su cantidad de materias!\n");
	
		    C_M = 1;
			//Si se pasa de menso
			while (C_M == 1){
		    	printf("Ingrese la cantidad de materias que llevas en el Semestre: ");
				scanf("%d", &cantidad_materias);
			                       		
				if(cantidad_materias < 1 || cantidad_materias > 11){
					printf("Error: La cantidad de materias ingresada no es válida. Por favor, ingrese un valor entre 1 y 12\n");
					//Le notificamos que vuelva a ingresar
					printf("Atención:¡Por favor, vuelva a ingresar su cantidad de materias!\n");
				}
			
				else{
					C_M = 0;	
				}
			}
		}
		 
		printf("\n\n\n");
		
	    printf("Tienes algún beneficio;\n");
	    printf("	(1) Ninguno\n");
	    printf("	(2) Beca completa 100%%\n");
	    printf("	(3) Media Beca 50%%\n");
	    printf("Ingrese su selección: ");
		scanf("%d", &beneficios);
		
		//Si carga mal los datos otra vez el bobo
		if(beneficios < 1 || beneficios > 3){
			printf("Error: La elección de beneficios no es válida. Por favor, ingrese un valor entre 1 y 3\n");
			//Le notificamos que vuelva a ingresar
			printf("Atención:¡Por favor, vuelva a ingresar!\n");
	
		    B_B = 1;
			//Si se pasa de menso
			while (B_B == 1){
		    	printf("Tienes algún beneficio;\n");
	    		printf("	(1) Ninguno\n");
	    		printf("	(2) Beca completa 100%%\n");
	    		printf("	(3) Media Beca 50%%\n");
	    		printf("Ingrese su selección: ");
				scanf("%d", &beneficios);
			                       		
				if(beneficios < 1 || beneficios > 3){
					printf("Error: La elección de beneficios no es válida. Por favor, ingrese un valor entre 1 y 3\n");
					//Le notificamos que vuelva a ingresar
					printf("Atención:¡Por favor, vuelva a ingresar!\n");
				}
			
				else{
					B_B = 0;	
				}
			}
		} 
	
		printf("\n\n\n");
		
		printf("¿Cómo deseas cargar tus notas?\n");
		printf("	(1)	Cargar notas de proceso incluyendo (EP1,EP2 Y EF) por materia\n");
		printf("	(2)	Cargar nota final por materia\n");
		printf("Ingrese su selección: ");
		scanf("%d", &tipo_evalua);
		
		//Si carga mal los datos otra vez el bobo
		if(tipo_evalua < 1 || tipo_evalua > 2){
			printf("Error: La elección de como cargar tus notas no es válida. Por favor, ingrese un valor entre 1 y 2\n");
			//Le notificamos que vuelva a ingresar
			printf("Atención:¡Por favor, vuelva a ingresar!\n");
	
		    T_E = 1;
			//Si se pasa de menso
			while (T_E == 1){
		    	printf("¿Cómo deseas cargar tus notas?\n");
				printf("	(1)	Cargar notas de proceso incluyendo (EP1,EP2 Y EF) por materia\n");
				printf("	(2)	Cargar nota final por materia\n");
				printf("Ingrese su selección: ");
				scanf("%d", &tipo_evalua);
			                       		
				if(tipo_evalua < 1 || tipo_evalua > 2){
					printf("Error: La elección de como cargar tus notas no es válida. Por favor, ingrese un valor entre 1 y 2\n");
					//Le notificamos que vuelva a ingresar
					printf("Atención:¡Por favor, vuelva a ingresar!\n");
				}
			
				else{
					T_E = 0;	
				}
			}
		}
	
		
		//Limpiamos la consola y pasamo a su elección
		limpiar();
//---------------------------------------------------LOGICA--------PRINCIPAL-------------------------------------------------------------
		
//---------------------------------------------------(1)-Cargar-notas-de-proceso-incluyendo-(EP1,EP2 Y EF)-por-materia-------------------
		
	    if(tipo_evalua == 1){
	    	//Imprime el logo de la aplicacion
			logo();
			
	    	printf("		======================================================================================\n");
        	printf("				CARGAR NOTAS DE PROCESO INCLUYENDO (EP1, EP2 Y EF) POR MATERIA\n");
        	printf("		======================================================================================\n");
        	printf("\n\n");
        	
			color();
	    	
			printf("En qué etapa académica te encuentras actualmente;\n");
		    printf("	(1) Examen Parcial 1\n");
		    printf("	(2) Examen Parcial 2\n");
		    printf("	(3) Examen Final\n");
		    printf("Ingrese su selección: ");
		    scanf("%d", &parciales);
		    
			//Si carga mal los datos otra vez el bobo
			if(parciales < 1 || parciales > 3){
				printf("Error: La elección de su etapa académica no es válida. Por favor, ingrese un valor entre 1 y 3\n");
				//Le notificamos que vuelva a ingresar
				printf("Atención:¡Por favor, vuelva a ingresar!\n");
		
			    B_P = 1;
				//Si se pasa de menso
				while (B_P == 1){
			    	printf("En qué etapa académica te encuentras actualmente;\n");
				    printf("	(1) Examen Parcial 1\n");
				    printf("	(2) Examen Parcial 2\n");
				    printf("	(3) Examen Final\n");
				    printf("Ingrese su selección: ");
				    scanf("%d", &parciales);
				                       		
					if(parciales < 1 || parciales > 3){
						printf("Error: La elección de su etapa académica no es válida. Por favor, ingrese un valor entre 1 y 3\n");
						//Le notificamos que vuelva a ingresar
						printf("Atención:¡Por favor, vuelva a ingresar!\n");
					}
				
					else{
						B_P = 0;	
					}
				}
			}
			
		    printf("\n\n\n");
		
			//SI MATERIA ES MAYOR QUE CERO Y MENOR O IGUAL QUE 11 PARA VERIFICAR NUEVAMENTE
		    if(cantidad_materias > 0 || cantidad_materias <= 11){
		        if(parciales == 1){
		            for(j = 1; j <= cantidad_materias; j++){
		            	
		            	//Cambiar el color para identificar en las distintas materias que calculo...
		            	
		            	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
						
		                printf("\nMateria Nº %d:\n", j);
		                
						//Se cambia al predeterminado del sistema...
						SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
												
//-----------------------------(1)-Examen-Parcial-1------------------------------------------------------------------------------------------
			
						for(i = 1; i <= 4; i++) {
		                    printf("Ingrese el puntaje del Proceso %d: ", i);
		                    scanf("%d", &puntos_procesos);
		                    
		                    //Si carga mal los datos de proceso
							if(puntos_procesos<0 || puntos_procesos>3){
								printf("Error: El puntaje del Proceso no es válido. Por favor, ingrese un valor en un rango del 1 al 3\n");
								//Disminuimos el contador para volver a cargar
								i= i-1;
								//Le notificamos que vuelva a ingresar
								printf("Atención:¡Por favor, vuelva a ingresar su puntaje de Proceso!\n");
							}
							//Si carga bien se aumenta su total de puntos
							else{
								total_puntos += puntos_procesos;
								//Bandera Auxiliar para poder cargar los datos si se equivoca 
								EP = 0;	
							}
							
							//Si ya cargo cuatro proceso entonces ya va poder cargar su EP1
		                    if(i == 4){
		                        printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        scanf("%d", &puntos_procesos);
		                        
		                        //Si carga mal los datos otra vez el bobo
								if(puntos_procesos<0 || puntos_procesos>13){
									printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje de Proceso!\n");
									
									//Por si se equivoca pueda cargar su nota de nuevo las veces que este mal, da un true para entrar al ciclo
									EP = 1;
		//---------------------------------------------------------------------------------------------
									while(EP == 1){
										printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
		                        		//Si se pasa de menso
										if(puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje de Proceso!\n");
										}
										else{
											//Sale del ciclo dando un false a la bandera
											EP = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
							
								total_puntos += puntos_procesos;
								 
		                    }
		                }
		                //Le informa su total de puntos por materia
		                printf("\n\n");
		                printf("Tienes un total de %d puntos\n",total_puntos); 
		                
		                
		                if (total_puntos < 30) {
				            puntos_faltantes = 30 - total_puntos;
				            printf("\nTe faltan %d puntos para habilitar el Examen Final de la Materia Nº %d!\n", puntos_faltantes, cantidad_materias-1);
				        }
		                printf("\n\n\n");
		                
		                //Se actualiza la variable para poder calcular la siguiente materia
		                total_puntos = 0;
		            }
		        } 
		        
//-----------------------------(2)-Examen Parcial-2------------------------------------------------------------------------------------------
				
				else if(parciales == 2) {
		            for(j = 1; j <= cantidad_materias; j++) {
		            	
		                //Cambiar el color para identificar en las distintas materias que calculo...
		            	
		            	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
						
		                printf("\nMateria Nº %d:\n", j);
		                
		                //Se cambia al predeterminado del sistema...
						SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						
		                for(i = 1; i <= 8; i++) {
		                    printf("Ingrese el puntaje del Proceso %d: ", i);
		                    scanf("%d", &puntos_procesos);
		                
		                    //Si carga mal los datos de proceso
							if(puntos_procesos<0 || puntos_procesos>3){
								printf("Error: El puntaje del Proceso no es válido. Por favor, ingrese un valor en un rango del 1 al 3\n");
								//Disminuimos el contador para volver a cargar
								i= i-1;
								//Le notificamos que vuelva a ingresar
								printf("Atención:¡Por favor, vuelva a ingresar su puntaje de Proceso!\n");
							}
							
							//Si carga bien se aumenta su total de puntos
					
							else{
								total_puntos += puntos_procesos;
								//Bandera Auxiliar para poder cargar los datos si se equivoca 
								EP1 = 0;
								EP2 = 0;
							}
								
							
							
							//Si ya cargo cuatro proceso entonces ya va poder cargar su EP1
							//--Modifique para que inicialice el valor de la bandera en = 0--
		//---------------------------------------------------------------------------------------------					
		                    if(i == 4 &&  EP1 == 0) {
		                        printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        scanf("%d", &puntos_procesos);
		                        
		                        //Si carga mal los datos otra vez el bobo
								if(puntos_procesos<0 || puntos_procesos>13){
									printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 1!\n");
									EP1 = 1;
									//Si se pasa de menso
									while (EP1 == 1){
										printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
		                        		//Si se pasa de menso
										if (puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 1!\n");
										}
										else{
											//Sale del ciclo dando un false a la bandera
											EP1 = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
							
								//Para saber que ya entro
								EP1 = 1;
		                        total_puntos += puntos_procesos;	
		                    }
		//---------------------------------------------------------------------------------------------
							//Si ya cargo ocho proceso entonces ya va poder cargar su EP2 
							else if (i == 8 && EP2 == 0){
		                        printf("Ingrese el puntaje del Examen Parcial 2: ");
		                        scanf("%d", &puntos_procesos);

								 //Si carga mal los datos otra vez el bobo
								if(puntos_procesos<0 || puntos_procesos>13){
									printf("Error: El puntaje del Examen Parcial 2 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 2!\n");
									EP2 = 1;
									//Si se pasa de menso
									while(EP2 == 1){
										printf("Ingrese el puntaje del Examen Parcial 2: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
		                        		//Si se pasa de menso
										if(puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Parcial 2 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 2!\n");
										}
										else{
											//Sale del ciclo dando un false a la bandera
											EP2 = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
							
								//Para saber que ya entro
								EP2 = 1;
		                        total_puntos += puntos_procesos;
		                    }
		                }
		                
		                //Le informa su total de puntos por materia
		                printf("\n\n");
		                printf("Tienes un total de %d puntos\n",total_puntos); 
		                
		                
		                if (total_puntos < 30) {
				            puntos_faltantes = 30 - total_puntos;
				            printf("\nTe faltan %d puntos para habilitar el Examen Final de la Materia Nº %d!\n", puntos_faltantes, cantidad_materias-1);
				        }
				        
				        printf("\n\n\n");
		                //Se actualiza la variable para poder calcular la siguiente materia
		                total_puntos = 0;
		            }
		        }
//-----------------------------(3)-Examen-Final------------------------------------------------------------------------------------------ 
				else if (parciales == 3) {
		            for (j = 1; j <= cantidad_materias; j++) {
		                //Cambiar el color para identificar en las distintas materias que calculo...
		            	
		            	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
						
		                printf("\nMateria Nº %d:\n", j);
		                
		                //Se cambia al predeterminado del sistema...
						SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						
		                for (i = 1; i <= 8; i++) {
		                    printf("Ingrese el puntaje del Proceso %d: ", i);
		                    scanf("%d", &puntos_procesos);

							//Si carga mal los datos de proceso
							if(puntos_procesos<0 || puntos_procesos>3){
								printf("Error: El puntaje del Proceso no es válido. Por favor, ingrese un valor en un rango del 1 al 3\n");
								//Disminuimos el contador para volver a cargar
								i= i-1;
								
								//Le notificamos que vuelva a ingresar
								printf("Atención:¡Por favor, vuelva a ingresar su puntaje de Proceso!\n");
							}
							//Si carga bien se aumenta su total de puntos
							else{
								total_puntos += puntos_procesos;
								//Bandera Auxiliar para poder cargar los datos si se equivoca 
								EP1 = 0;
								EP2 = 0;
								EP3 = 0;
							}
							
		//---------------------------------------------------------------------------------------------	
		                    if(i == 4 &&  EP1 == 0) {
		                        printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        scanf("%d", &puntos_procesos);
		                        
		                        //Si carga mal los datos otra vez el bobo
								if(puntos_procesos<0 || puntos_procesos>13){
									printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 1!\n");
									EP1 = 1;
									//Si se pasa de menso
									while (EP1 == 1){
										printf("Ingrese el puntaje del Examen Parcial 1: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
		                        		//Si se pasa de menso
										if (puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Parcial 1 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 1!\n");
										}
										else{
											//Sale del ciclo dando un false a la bandera
											EP1 = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
							
								//Para saber que ya entro
								EP1 = 1;
		                        total_puntos += puntos_procesos;
								
		                    } 
		//---------------------------------------------------------------------------------------------
							//Si ya cargo ocho proceso entonces ya va poder cargar su EP2 
							else if (i == 8 && EP2 == 0){
		                        printf("Ingrese el puntaje del Examen Parcial 2: ");
		                        scanf("%d", &puntos_procesos);

								//Si carga mal los datos otra vez el bobo
								if(puntos_procesos<0 || puntos_procesos>13){
									printf("Error: El puntaje del Examen Parcial 2 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 2!\n");
									EP2 = 1;
									//Si se pasa de menso
									while(EP2 == 1){
										printf("Ingrese el puntaje del Examen Parcial 2: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
		                        		//Si se pasa de menso
										if(puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Parcial 2 no es válido. Por favor, ingrese un valor en un rango del 1 al 13\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Parcial 2!\n");
										}
										else{
											//Sale del ciclo dando un false a la bandera
											EP2 = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
								
								//Para saber que ya entro
								EP2 = 1;
		                        total_puntos += puntos_procesos;	
		                    
		//---------------------------------------------------------------------------------------------            
								printf("Ingrese el puntaje del Proceso Final: ");
		                        scanf("%d", &puntos_procesos);

								//Si carga mal los datos otra vez el burro
								if (puntos_procesos<0 || puntos_procesos>20 &&  EP3 == 0){
									printf("Error: El puntaje del Proceso Final no es válido. Por favor, ingrese un valor en un rango del 1 al 20\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Proceso Final!\n");
									PF = 1;
									//Ya es el colmo
									while (PF == 1){
										printf("Ingrese el puntaje del Proceso Final: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
										if (puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Proceso Final no es válido. Por favor, ingrese un valor en un rango del 1 al 20\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Proceso Final!\n");
										}
										else{
											PF = 0;	
										}
									}
								}
								//Si carga bien se aumenta su total de puntos
							
								//Para saber que ya entro
								PF = 1;
		                    	total_puntos += puntos_procesos;
		//---------------------------------------------------------------------------------------------
		                      
		                        printf("Ingrese el puntaje del Examen Final: ");
		                        scanf("%d", &puntos_procesos);
		                        
								//Si carga mal los datos otra vez el burro
								if (puntos_procesos<0 || puntos_procesos>30){
									printf("Error: El puntaje del Examen Final no es válido. Por favor, ingrese un valor en un rango del 1 al 20\n");
									//Le notificamos que vuelva a ingresar
									printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Final!\n");
									EP3 = 1;
									//Ya es el colmo
									while (EP3 == 1){
										printf("Ingrese el puntaje del Proceso Final: ");
		                        		scanf("%d", &puntos_procesos);
		                        		
										if (puntos_procesos<0 || puntos_procesos>13){
											printf("Error: El puntaje del Examen Final no es válido. Por favor, ingrese un valor en un rango del 1 al 20\n");
											//Le notificamos que vuelva a ingresar
											printf("Atención:¡Por favor, vuelva a ingresar su puntaje del Examen Final!\n");
										}
										else{
											EP3 = 0;	
										}
									}
								}
							
								total_puntos += puntos_procesos;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
								if(total_puntos >= 1 && total_puntos <= 60){
									total_calificacion = total_calificacion + 1;
								}
								else if(total_puntos >= 61 && total_puntos <= 70){
									total_calificacion = total_calificacion + 2;
								}
								else if(total_puntos >= 71 && total_puntos <= 80){
									total_calificacion = total_calificacion + 3;
								}
								else if(total_puntos >= 81 && total_puntos <= 90){
									total_calificacion = total_calificacion + 4;
								}
								else if(total_puntos >= 91 && total_puntos <= 100){
									total_calificacion = total_calificacion + 5;
								}
							}
						}
		            }
		        }
		//---------------------------------------------------------------------------------------------
	
		        // PROMEDIO DE NOTAS Y SI MANTUVO SU BECA
				if (beneficios == 1) {
				    promedio_nota = total_calificacion / (float)cantidad_materias;
				    printf("Tu promedio de nota es %.2f.\n", promedio_nota);
				} 
				else if (beneficios == 2) {
					promedio_nota = total_calificacion / (float)cantidad_materias;
				   	printf("Tu promedio de nota es %.2f.\n", promedio_nota);
				       
				    if (promedio_nota < 4.8) {
				        printf("No tienes los puntos necesarios para mantener tu Beca completa 100%%.\n");
				    }
				    else{
				        printf("¡Felicidades, mantuviste tu beca!\n");
					}
				} 
				else if (beneficios == 3) {
					promedio_nota = total_calificacion / (float)cantidad_materias;
				    printf("Tu promedio de nota es %.2f.\n", promedio_nota);
				        
				    if (promedio_nota < 4.5) {
				        printf("No tienes los puntos necesarios para mantener tu Media Beca 50%%.\n");
				    }
				    else{
				       	printf("¡Felicidades, mantuviste tu beca!");
					}
				} 
		    }
		        
		    //total_puntos_requeridos += total_puntos;
		}
		//Por si acaso
		else {
		    if (cantidad_materias > 12) {
		        printf("Error: No puedes ingresar más de 12 materias.\n");
				break;
		    } 
			else if (cantidad_materias < 1) {
		        printf("Error: No puedes ingresar menos de 1 materia.\n");
				break;
		    }
		}

//---------------------------------------------------------------------------------------------------------------------------------------------
		if(tipo_evalua == 2){
		
			//Imprime el logo de la aplicacion
			logo();
				
			printf("					=================================\n");
	        printf("			   		  CARGAR NOTA FINAL POR MATERIA\n");
	        printf("					=================================\n");
	        printf("\n\n");
	
			color();
			//SI MATERIA ES MAYOR QUE CERO Y MENOR O IGUAL QUE 11
			if(cantidad_materias > 0 || cantidad_materias <= 11) {
			    for(j = 1; j <= cantidad_materias; j++) {
			    	//Cambiar el color para identificar en las distintas materias que calculo...
		            	
		           	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		               
			        printf("\nMateria Nº %d:\n", j);
			        
			        //Se cambia al predeterminado del sistema...
					SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
						
			        printf("Ingrese su calificación (1,2,3,4 o 5):");
			        scanf("%d", &calificacion);
					//Si ingreso mal 
			        if(calificacion < 1 ||calificacion > 5 ){
						printf("Error: No puedes ingresar una calificacion con ese valor. Vuelve a ingresar\n");
						j = j-1;
			        }
			        else{
						total_calificacion += calificacion;
					}
			    } 
			}
			//Por si acaso 
			else {
			    if (cantidad_materias > 12) {
			        printf("Error: No puedes ingresar más de 12 materias.\n");
					break;
			    } 
				else if (cantidad_materias < 1) {
			        printf("Error: No puedes ingresar menos de 1 materia.\n");
					break;
			    }
			}
//---------------------------------------------------------------------------------------------------------------------------			    
			// PROMEDIO DE NOTAS Y SI MANTUVO SU BECA
			if (beneficios == 1) {
			    promedio_nota = total_calificacion / (float)cantidad_materias;
			    printf("Tu promedio de nota es %.2f.\n", promedio_nota);
			} 
			else if (beneficios == 2) {
				promedio_nota = total_calificacion / (float)cantidad_materias;
			    printf("Tu promedio de nota es %.2f.\n", promedio_nota);
			       
			    if (promedio_nota < 4.8) {
			        printf("No tienes los puntos necesarios para mantener tu Beca completa 100%%.\n");
			    }
			    else{
			        printf("¡Felicidades, mantuviste tu beca\n!");
				}
			} 
			else if(beneficios == 3){
				promedio_nota = total_calificacion / (float)cantidad_materias;
			    printf("Tu promedio de nota es %.2f.\n", promedio_nota);
			}
				
			if(promedio_nota < 4.5){
			    printf("No tienes los puntos necesarios para mantener tu Media Beca 50%%.\n");
			}
			else{
			    printf("¡Felicidades, mantuviste tu beca!\n");
			}
		}
		
	    printf("\n\n");
	    printf("¿Desea realizar el cálculo de nuevo? Sí(1)/No(0): ");
	    scanf("%d", &prog);
		limpiar();		   
	}while(prog!=0);
	
	
	printf("\n\n");
	printf("=====================================================================================================\n");
	printf("					FIN_DEL_PROGRAMA\n");
	printf("=====================================================================================================\n");
    system("PAUSE");
	return 0;
}


