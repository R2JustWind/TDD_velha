// Copyright 2025 Arthur Soares

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

int VerificaVelha(int velha[3][3]) {
    int X_counter = 0, O_counter = 0;
	bool X_win = false, O_win = false;
    for (int i = 0; i < 3; i++) {
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] &&
            velha[2][i] == 1) {
                X_win = true;; /*!< retorna 1 para vitória do jogador 1 */
        }
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] &&
            velha[2][i] == 2) {
                O_win = true; /*!< retorna 2 para vitória do jogador 1 */
        }
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2] &&
            velha[i][2] == 1) {
                X_win = true; /*!< retorna 1 para vitória do jogador 1 */
        }
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2] &&
            velha[i][2] == 2) {
                O_win = true; /*!< retorna 2 para vitória do jogador 1 */
			}
        for (int j = 0; j < 3; j++) {
			if (velha[i][j] == 1) {
				X_counter++;
			} else if (velha[i][j] == 2) {
				O_counter++;
			}
		}
    }
	if (X_counter > O_counter + 1) {
		return -2; /*!< retorna -2 para jogos impossíveis */
	}else if (O_counter > X_counter + 1) {
		return -2; /*!< retorna -2 para jogos impossíveis */
	}
    if (X_win && O_win) {
        return -2; /*!< retorna -2 para jogos impossíveis */
    }else if (X_win) {
		return 1; /*!< retorna 1 para vitória do jogador 1 */
	}else if (O_win) {
		return 2; /*!< retorna 2 para vitória do jogador 2 */
	}
    if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] &&
        velha[2][2] == 1) {
        return 1;
    }
    if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] &&
        velha[2][0] == 1) {
        return 1;
    }
    if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] &&
        velha[2][2] == 2) {
        return 2;
    }
	if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] &&
        velha[2][0] == 2) {
        return 2;
    }

    return 0; /*!< retorna zero para teste */
}
