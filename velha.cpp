/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Arthur Soares  
 * @param  velha é uma matriz 3x3 que representa a situação atual do jogo da velha
 * 
 *  A função analisa se o jogo da velha representado pela matriz é válido ou não,
 *  retornando 1 para vitória do jogador 1 e 2 para vitória do jogador 2, 0 para empate, 
 *  -1 para inváido e -2 para jogos impossíveis.
 */ 

int VerificaVelha( int velha[3][3] )
{
	if(velha[0][2] == 1 && velha[1][2] == 1 && velha[2][2] == 1){
		return 1; /*!< retorna 1 para vitória do jogador 1 */
	}
	if(velha[0][1] == 1 && velha[1][1] == 1 && velha[2][1] == 1){
		return 1; /*!< retorna 1 para vitória do jogador 1 */
	}
	if(velha[0][0] == 1 && velha[1][0] == 1 && velha[2][0] == 1){
		return 1; /*!< retorna 1 para vitória do jogador 1 */
	}
	return 0; /*!< retorna zero para teste */ 
}


