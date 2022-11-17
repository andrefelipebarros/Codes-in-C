
 #include <stdio.h>
 #include <iostream>

 int main()
 {
 	int v=6,c1=0,c2=0,c3=0,c4=0,nul=0,total,st;
 	printf("---------------ELEICOES CARIOCAS---------------");
 	while(v!=0)
 	{
 		printf("\n\n 1-Pedro\n 2-Ana \n 3-Maria \n 4-Joao \n 5-Nulo");
 		printf("\n ---------------Selecione o numero do seu candidato e pressione ENTER---------------");
 		scanf("%i",&v);
 		
 		switch(v)
 		{
 			case 0:
 				printf("\n VOTACAO ENCERRADA!");
 				break;
 			
 			case 1:
 				c1=c1+1;
 				printf("Pedro - VOTO REGISTRADO!");
 				break;
 				
 			case 2:
 				c2=c2+1;
 				printf("Ana - VOTO REGISTRADO!");
 				break;
 				
 			case 3:
 				c3=c3+1;
 				printf("Maria - VOTO REGISTRADO!");
 				break;
 				
 			case 4:
 				c4=c4+1;
 				printf("Joao - VOTO REGISTRADO!");
 				break;
 				
 			case 5:
 				nul=nul+1;
 				printf("Nulo - VOTO REGISTRADO!");
 				break;
 			
			 default:
			 	printf("CANDIDATO INEXISTENTE!");
				break;
			
			
		 }
	 }
 	
 	printf("RESULTADO DAS ELEIÇÕES:\n Pedro\t %i\n Ana\t %i\n Maria\t %i\n Joao\t %i\n \n VOTOS NULO %i\t",c1,c2,c3,c4,nul);
 	total = c1 + c2 + c3 + c4 + nul;
 	
 	if((c1 == c2), (c2 == c3), (c3 == c4), (c1 == c3), (c2 == c4)){
 	    
 	    printf("Ocorrerá segundo turno!");
 	}
 	else{
 	    printf("Não Ocorrerá segundo turno!");
 	}
 	
 	
 	
 	getchar();
 	printf("\n\n");
 	system("pause");
 	return(0);
 }
