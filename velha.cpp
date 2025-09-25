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
    int x_counter = 0, o_counter = 0, x_line = 0, o_line = 0, x_column = 0, o_column = 0, blank_line = 0, blank_column = 0;
	bool x_win = false, o_win = false, x_possible = false, o_possible = false;;
    for (int i = 0; i < 3; i++) {
		x_line = 0;
		o_line = 0;
		blank_line = 0;
		x_column = 0;
		o_column = 0;
		blank_column = 0;
        for (int j = 0; j < 3; j++) {
			if (velha[i][j] == 1) {
				x_counter++;
                x_line++;
			} else if (velha[i][j] == 2) {
				o_counter++;
				o_line++;
			}else {
				blank_line++;
			}
			if (velha[j][i] == 1) {
				x_column++;
			} else if (velha[j][i] == 2) {
				o_column++;
			} else {
				blank_column++;
			}
		}
		if(x_column == 3 || x_line == 3) {
			x_win = true; /*!< retorna 1 para vitória do jogador 1 */
		}else if ((x_column == 2 && blank_column == 1) || (x_line == 2 && blank_line == 1)) {
			x_possible = true;
		}
		if(o_column == 3 || o_line == 3) {
			o_win = true; /*!< retorna 2 para vitória do jogador 2 */
		}else if ((o_column == 2 && blank_column == 1) || (o_line == 2 && blank_line == 1)) {
			o_possible = true;
		}
    }
	if (x_counter > o_counter + 1) {
		return -2; /*!< retorna -2 para jogos impossíveis */
	}else if (o_counter > x_counter + 1) {
		return -2; /*!< retorna -2 para jogos impossíveis */
	}
    if (x_win && o_win) {
        return -2; /*!< retorna -2 para jogos impossíveis */
    }else if (x_win) {
		return 1; /*!< retorna 1 para vitória do jogador 1 */
	}else if (o_win) {
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
	if (x_possible || o_possible) {
		return -1; /*!< retorna -1 para jogos indefinidos */
	}
	if (x_counter + o_counter < 7) {
		return -1; /*!< retorna -1 para jogos indefinidos */
	}

    return 0; /*!< retorna zero para teste */
}
