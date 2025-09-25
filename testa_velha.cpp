// Copyright 2025 Arthur Soares

/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"



TEST_CASE("Testa velha", "[single-file]") {
    int teste1[3][3]= {   { 2, 0, 1 },
                          { 2, 0, 1 },
                          { 0, 2, 1 }
                      };
    REQUIRE(VerificaVelha(teste1) == 1);
}

TEST_CASE("Vitória do Jogador 1 (coluna meio)", "[single-file]") {
    int teste2[3][3]= {   { 2, 1, 0 },
                          { 2, 1, 0 },
                          { 0, 1, 2 }
                      };
    REQUIRE(VerificaVelha(teste2) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (coluna esquerda)", "[single-file]") {
    int teste3[3][3]= {   { 1, 0, 2 },
                          { 1, 0, 0 },
                          { 1, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste3) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (linha superior)", "[single-file]") {
    int teste4[3][3]= {   { 1, 1, 1 },
                          { 1, 2, 0 },
                          { 0, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste4) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (linha do meio)", "[single-file]") {
    int teste5[3][3]= {   { 1, 2, 0 },
                          { 1, 1, 1 },
                          { 0, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste5) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (linha do inferior)", "[single-file]") {
    int teste6[3][3]= {   { 1, 2, 0 },
                          { 0, 2, 2 },
                          { 1, 1, 1 }
                      };
    REQUIRE(VerificaVelha(teste6) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (diagonal 1)", "[single-file]") {
    int teste7[3][3]= {   { 1, 2, 2 },
                          { 0, 1, 2 },
                          { 1, 0, 1 }
                      };
    REQUIRE(VerificaVelha(teste7) == 1);
}

TEST_CASE("Vitória do Jogardor 1 (diagonal 2)", "[single-file]") {
    int teste8[3][3]= {   { 1, 2, 1 },
                          { 0, 1, 2 },
                          { 1, 0, 2 }
                      };
    REQUIRE(VerificaVelha(teste8) == 1);
}

TEST_CASE("Vitória do Jogardor 2 (coluna direita)", "[single-file]") {
    int teste9[3][3]= {   { 1, 2, 2 },
                          { 0, 1, 2 },
                          { 1, 0, 2 }
                      };
    REQUIRE(VerificaVelha(teste9) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (coluna do meio)", "[single-file]") {
    int teste10[3][3]= {  { 1, 2, 1 },
                          { 0, 2, 1 },
                          { 1, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste10) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (coluna esquerda)", "[single-file]") {
    int teste11[3][3]= {  { 2, 0, 1 },
                          { 2, 0, 1 },
                          { 2, 1, 2 }
                      };
    REQUIRE(VerificaVelha(teste11) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (linha superior)", "[single-file]") {
    int teste12[3][3]= {  { 2, 2, 2 },
                          { 0, 0, 1 },
                          { 1, 1, 2 }
                      };
    REQUIRE(VerificaVelha(teste12) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (linha do meio)", "[single-file]") {
    int teste13[3][3]= {  { 0, 1, 1 },
                          { 2, 2, 2 },
                          { 1, 1, 2 }
                      };
    REQUIRE(VerificaVelha(teste13) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (linha inferior)", "[single-file]") {
    int teste14[3][3]= {  { 0, 1, 1 },
                          { 1, 2, 1 },
                          { 2, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste14) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (diagonal 1)", "[single-file]") {
    int teste15[3][3]= {  { 2, 1, 1 },
                          { 1, 2, 1 },
                          { 0, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste15) == 2);
}

TEST_CASE("Vitória do Jogardor 2 (diagonal 2)", "[single-file]") {
    int teste16[3][3]= {  { 1, 1, 2 },
                          { 1, 2, 1 },
                          { 2, 0, 0 }
                      };
    REQUIRE(VerificaVelha(teste16) == 2);
}

TEST_CASE("Caso inválido (todas as casas são X)", "[single-file]") {
    int teste17[3][3]= {  { 1, 1, 1 },
                          { 1, 1, 1 },
                          { 1, 1, 1 }
                      };
    REQUIRE(VerificaVelha(teste17) == -2);
}

TEST_CASE("Caso inválido (todas as casas são O)", "[single-file]") {
    int teste18[3][3]= {  { 2, 2, 2 },
                          { 2, 2, 2 },
                          { 2, 2, 2 }
                      };
    REQUIRE(VerificaVelha(teste18) == -2);
}

TEST_CASE("Caso inválido (ambos os jogadores ganham)", "[single-file]") {
    int teste19[3][3]= {  { 2, 2, 2 },
                          { 1, 1, 1 },
                          { 0, 0, 0 }
                      };
    REQUIRE(VerificaVelha(teste19) == -2);
}

TEST_CASE("Caso indefinido (nenhuma casa se encontra preenchida)", "[single-file]") {
    int teste20[3][3]= {  { 0, 0, 0 },
                          { 0, 0, 0 },
                          { 0, 0, 0 }
                      };
    REQUIRE(VerificaVelha(teste20) == -1);
}

TEST_CASE("Caso indefinido (Ainda restam casas a se preencher)", "[single-file]") {
    int teste21[3][3]= {  { 0, 2, 0 },
                          { 0, 1, 2 },
                          { 1, 0, 2 }
                      };
    REQUIRE(VerificaVelha(teste21) == -1);
}

TEST_CASE("Caso inválido (Quantidade de x's muito superior a de o's)", "[single-file]") {
    int teste22[3][3]= {  { 1, 1, 1 },
                          { 0, 1, 2 },
                          { 1, 0, 2 }
                      };
    REQUIRE(VerificaVelha(teste22) == -2);
}

TEST_CASE("Caso indefinido (Qualquer um ainda pode ganhar)", "[single-file]") {
    int teste23[3][3]= {  { 1, 1, 0 },
                          { 1, 2, 0 },
                          { 2, 2, 0 }
                      };
    REQUIRE(VerificaVelha(teste23) == -1);
}

TEST_CASE("Empate (Tudo preenchido, sem ganhador)", "[single-file]") {
    int teste24[3][3]= {  { 2, 1, 1 },
                          { 1, 2, 2 },
                          { 2, 2, 1 }
                      };
    REQUIRE(VerificaVelha(teste24) == 0);
}

TEST_CASE("Empate (Independente das jogadas, nenhum pode ganhar)", "[single-file]") {
    int teste25[3][3]= {  { 0, 2, 1 },
                          { 1, 1, 2 },
                          { 2, 1, 2 }
                      };
    REQUIRE(VerificaVelha(teste25) == 0);
}
