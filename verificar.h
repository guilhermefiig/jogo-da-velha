#include <stdio.h> 

int verificar(char matriz[3][3]){ 
   
   
   // analizar as outras condições de vitória de ambos jogadores 
   
   int flag = -1;
   
   // condições do jogador 1 ganhar 
   
   if (matriz[0][0] == 'x' && matriz[0][1] == 'x' && matriz[0][2] == 'x'){
   	return 1; 
   	
    } 
   if (matriz[1][0] == 'x' && matriz[1][1] == 'x' && matriz[1][2] == 'x'){
	return 1; 
		
	}
   if (matriz[2][0] == 'x' && matriz[2][1] == 'x' && matriz[2][2] == 'x'){
	return 1;
	
	} 
   if (matriz[0][0] == 'x' && matriz[1][1] == 'x' && matriz[2][2] == 'x'){
   	return 1; 
   	 
    } 
   if (matriz[2][0] == 'x' && matriz[1][1] == 'x' && matriz[0][2] == 'x'){
   	return 1; 
   }
    if (matriz[0][0] == 'x' && matriz[1][0] == 'x' && matriz[2][0] == 'x'){
   	return 1;  
  	 
   } 
   if (matriz[0][1] == 'x' && matriz[1][1] == 'x' && matriz[2][1] == 'x'){
   	return 1;  
  	 
   } 

   if (matriz[0][1] == 'x' && matriz[1][1] == 'x' && matriz[2][1] == 'x'){
   	return 1;  
  	 
   } 
   
   if (matriz[0][2] == 'x' && matriz[1][2] == 'x' && matriz[2][2] == 'x'){
   	return 1;   	 
   } 
   
   // condições do jogador 2 ganhar  
   if (matriz[0][0] == 'o' && matriz[0][1] == 'o' && matriz[0][2] == 'o'){
   	return 2; 
   	
    } 
   if (matriz[1][0] == 'o' && matriz[1][1] == 'o' && matriz[1][2] == 'o'){
	return 2; 
		
	}
   if (matriz[2][0] == 'o' && matriz[2][1] == 'o' && matriz[2][2] == 'o'){
	return 2;
	
	} 
   if (matriz[0][0] == 'o' && matriz[1][1] == 'o' && matriz[2][2] == 'o'){
   	return 2; 
   	 
    } 
   if (matriz[2][0] == 'o' && matriz[1][1] == 'o' && matriz[0][2] == 'o'){
   	return 2; 
   }
    if (matriz[0][0] == 'o' && matriz[1][0] == 'o' && matriz[2][0] == 'o'){
   	return 2;  
  	 
   } 
   if (matriz[0][1] == 'o' && matriz[1][1] == 'o' && matriz[2][1] == 'o'){
   	return 2;  
  	 
   } 

   if (matriz[0][1] == 'o' && matriz[1][1] == 'o' && matriz[2][1] == 'o'){
   	return 2;  
  	 
   } 
   
   if (matriz[0][2] == 'o' && matriz[1][2] == 'o' && matriz[2][2] == 'o'){
   	return 2;   	 
   } 
 
   //condições de empate
   
  
   
	return flag;     
}
