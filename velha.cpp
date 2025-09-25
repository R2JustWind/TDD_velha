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
    int x_counter = 0, o_counter = 0, x_line, o_line, x_column, o_column, blank_line, blank_column;
	int x_diagonal1, o_diagonal1, x_diagonal2, o_diagonal2, blank_diagonal1, blank_diagonal2;
	bool x_win = false, o_win = false, x_possible = false, o_possible = false;;
    for (int i = 0; i < 3; i++) {
		x_line = 0;
		o_line = 0;
		blank_line = 0;
		x_column = 0;
		o_column = 0;
		blank_column = 0;
		blank_diagonal1 = 0;
		blank_diagonal2 = 0;
		x_diagonal1 = 0;
		o_diagonal1 = 0;
		x_diagonal2 = 0;
		o_diagonal2 = 0;
        for (int j = 0; j < 3; j++) {
			if (velha[i][j] == 1) {
				x_counter++;
                x_line++;
			} else if (velha[i][j] == 2) {
				o_counter++;
				o_line++;
			} else {
				blank_line++;
			}
			if (velha[j][i] == 1) {
				x_column++;
			} else if (velha[j][i] == 2) {
				o_column++;
			} else {
				blank_column++;
			}
			if (velha[j][j] == 1) {
				x_diagonal1++;
			} else if (velha[j][j] == 2) {
				o_diagonal1++;
			} else {
				blank_diagonal1++;
			}
			if (velha[j][2-j] == 1) {
				x_diagonal2++;
			} else if (velha[j][2-j] == 2) {
				o_diagonal2++;
			} else {
				blank_diagonal2++;
			}
		}
		if(x_column == 3 || x_line == 3) {
			x_win = true; /*!< X teria ganhado o jogo */
		}else if ((x_column == 2 && blank_column == 1) || (x_line == 2 && blank_line == 1)) {
			x_possible = true; /*!< X possui a possibilidade de ganhar o jogo */
		}
		if(o_column == 3 || o_line == 3) {
			o_win = true; /*!< O teria ganhado o jogo */
		}else if ((o_column == 2 && blank_column == 1) || (o_line == 2 && blank_line == 1)) {
			o_possible = true; /*!< O tem a possibilidade de ganhar o jogo */
		}
		if(x_diagonal1 == 3 || x_diagonal2 == 3) {
			x_win = true; /*!< X teria ganhado o jogo */
		}else if ((x_diagonal1 == 2 && blank_diagonal1 == 1) || (x_diagonal2 == 2 && blank_diagonal2 == 1)) {
			x_possible = true; /*!< X possui a possibilidade de ganhar o jogo */
		}
		if(o_diagonal1 == 3 || o_diagonal2 == 3) {
			o_win = true; /*!< O teria ganhado o jogo */
		}else if ((o_diagonal1 == 2 && blank_diagonal1 == 1) || (o_diagonal2 == 2 && blank_diagonal2 == 1)) {
			o_possible = true; /*!< O tem a possibilidade de ganhar o jogo */
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
	if (x_possible || o_possible) {
		return -1; /*!< retorna -1 para jogos indefinidos */
	}
	if (x_counter + o_counter < 7) {
		return -1; /*!< retorna -1 para jogos indefinidos */
	}

    return 0; /*!< retorna zero para casos de empate */
}
