#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <ctype.h>
#include <locale.h>
#define TAM 20


typedef struct
{
    char login[30]; 
    char senha[30]; 
} pessoa; pessoa p[1];  


int main()
{
	//Declarações de Variáveis	
	int m = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
	char login[30]; 
    char senha[30];
	// Rotina de validação de login	
    strcpy(p[0].login, "ADMIN"); 
    strcpy(p[0].senha, "ADMIN");
    
	printf("\n\n = = = = FACA SEU LOGIN NA PLATAFORMA DA BROTHERS THECNOLOGICAL SOLUTION = = = =  ");
    printf("\n\n[ ] USUARIO: ");
    scanf("%s", login); 
    printf("\n[ ] SENHA: ");
    scanf("%s", senha); 

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0))
	{ 
    	// Rotina inicial do programa, menu principal para acesso as próximas telas e funções   	
		printf("||   [1]  AGENDAMENTO              ||\n");
		printf("||   [2]  SAIR                     ||\n\n");              
        printf(" = = = = = = = = = = = = = = = = = =\n\n");		 
		m = getch();		
		// Rotina de switch case, selecionando os dias disponiveis para agendamento do cliente	
		switch(m)
		{
    		case '1':
    			system("cls");
    			printf("          = = = = DIAS DISPONIVEIS PARA AGENDAMENTO = = = =     \n\n");
    			printf("||  [X]  SELECIONE O DIA DA SEMANA QUE DESEJA AGENDAR SEU ATENDIMENTO: ||\n\n");
    			printf("       ||              [1]  Segunda-Feira              ||\n");
    			printf("       ||              [2]  Terca-Feira                ||\n");
    			printf("       ||              [3]  Quarta-Feira               ||\n");
    			printf("       ||              [4]  Quinta-Feira               ||\n");
    			printf("       ||              [5]  Sexta-Feira                ||\n");
    			printf("       ||              [6]  Sabado                     ||\n");
       			printf("       ||              [7]  Domingo                    ||\n\n");
       			printf("       = = = = = = = = = = = = = = = = = = = = = = = = =\n\n");
    			a = getch();
    			switch(a)
			{
    			// Rotina que disponibiliza a visualização dos horários disponiveis através do printf
			case '1':
    			system("cls");
				printf("  = = = = Dia Selecionado: Segunda-Feira = = = =  \n\n");
				printf("||        Horarios Disponiveis:     ||\n\n");
    			printf("  ||       [1]    09h00          ||\n");
    			printf("  ||       [2]    13h00          ||\n");
     			printf("  ||       [3]    17h00          ||\n");
    			printf("  ||       [4]    20h00          ||\n");
    			b = getch();
    	       	switch(b)
    			{		 
					// Rotina que reproduz a mensagem contendo as informações do agendamento do cliente		  				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 09h00 para a proxima Segunda-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 13h00 para a proxima Segunda-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 17h00 para a proxima Segunda-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 20h00 para a proxima Segunda-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
    				default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '2':
					// Rotina que disponibiliza a visualização dos horários disponiveis através do printf
					system("cls");
					printf("3 = = = = Dia Selecionado: Terca-Feira = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    08h00          ||\n");
    				printf("  ||       [2]    11h30          ||\n");
     				printf("  ||       [3]    17h00          ||\n");
    				printf("  ||       [4]    20h30          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{	
					// Rotina que reproduz a mensagem contendo as informações do agendamento do cliente			   				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 08h00 para a proxima Terca-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 11h30 para a proxima Terca-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 17h00 para a proxima Terca-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 20h30 para a proxima Terca-Feira!: \n\n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
    				default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '3':
					// Rotina que disponibiliza a visualização dos horários disponiveis através do printf
					system("cls");
					printf("3 = = = = Dia Selecionado: Quarta-Feira = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    11h00          ||\n");
    				printf("  ||       [2]    15h00          ||\n");
     				printf("  ||       [3]    16h00          ||\n");
    				printf("  ||       [4]    18h45          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{	
					// Rotina que reproduz a mensagem contendo as informações do agendamento do cliente		   				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 11h00 para a proxima Quarta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 15h00 para a proxima Quarta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 16h00 para a proxima Quarta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 18h45 para a proxima Quarta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
    				default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '4':
					// Rotina que disponibiliza a visualização dos horários disponiveis através do printf
					system("cls");
					printf("3 = = = = Dia Selecionado: Quinta-Feira = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    09h30          ||\n");
    				printf("  ||       [2]    12h45          ||\n");
     				printf("  ||       [3]    14h00          ||\n");
    				printf("  ||       [4]    18h00          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{	
					// Rotina que reproduz a mensagem contendo as informações do agendamento do cliente		   				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 09h30 para a proxima Quinta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 12h45 para a proxima Quinta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 14h00 para a proxima Quinta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 18h00 para a proxima Quinta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
	    			default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '5':
					// Rotina que disponibiliza a visualização dos horarios disponiveis atraves do printf
					system("cls");
					printf("3 = = = = Dia Selecionado: Sexta-Feira = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    10h00          ||\n");
    				printf("  ||       [2]    14h00          ||\n");
     				printf("  ||       [3]    19h00          ||\n");
    				printf("  ||       [4]    21h00          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{	
					// Rotina que reproduz a mensagem contendo as informacoes do agendamento do cliente		   				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 10h00 para a proxima Sexta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 14h00 para a proxima Sexta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 19h00 para a proxima Sexta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 21h00 para a proxima Sexta-Feira!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
					default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '6':
					// Rotina que disponibiliza a visualizacao dos horarios disponiveis atraves do comando printf
					printf("3 = = = = Dia Selecionado: Sabado = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    11h30          ||\n");
    				printf("  ||       [2]    16h00          ||\n");
     				printf("  ||       [3]    19h00          ||\n");
    				printf("  ||       [4]    20h00          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{		   
					// Rotina que reproduz a mensagem contendo as informacoes do agendamento do cliente					
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 11h30 para o proximo Sabado!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 16h00 para o proximo Sabado!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 19h00 para o proximo Sabado!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 20h00 para o proximo Sabado!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
					default:
    					system("cls");
    					printf("Dados Invalidos");
    					break;
					}
					break;
					case '7':
					// Rotina que disponibiliza a visualizacao dos horarios disponiveis atraves do comando printf	
					system("cls");
					printf("3 = = = = Dia Selecionado: Domingo = = = =  \n\n");
					printf("||        Horarios Disponiveis:     ||\n\n");
    				printf("  ||       [1]    10h00          ||\n");
    				printf("  ||       [2]    14h00          ||\n");
     				printf("  ||       [3]    19h00          ||\n");
    				printf("  ||       [4]    21h00          ||\n");
    				c = getch();
    	      	 	switch(c)
    			{	
					// Rotina que reproduz a mensagem contendo as informacoes do agendamento do cliente		   				
   				    case '1':
    					system("cls");
    					printf("Voce selecionou o Horario das 10h00 para o proximo Domingo!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '2':
    					system("cls");
    					printf("Voce selecionou o Horario das 14h00 para o proximo Domingo!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '3':
    					system("cls");
    					printf("Voce selecionou o Horario das 19h00 para o proximo Domingo!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;
    				case '4':
    					system("cls");
    					printf("Voce selecionou o Horario das 21h00 para o proximo Domingo!: \n");
    					printf("AGENDAMENTO REALIZADO COM SUCESSO, AGRADECEMOS A PREFERENCIA!!\n");
    					break;	
					default:
    					system("cls");
    					printf("Dados Invalidos");
     			break;		
				}
			}
		}			            
    }
	else
	{
		// Termino da rotina IF ELSE 
        printf("Login e/ou senha incorretos"); 
    }
    return 0;
}    
