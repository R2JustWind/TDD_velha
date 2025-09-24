// Copyright 2025 Arthur Soares

/**
 * \file testa_velha.cpp
 */

#include "/Users/arthur/TDD_velha/velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "/Users/arthur/TDD_velha/catch.hpp"



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
