
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

} 

TEST_CASE( "Vitória do Jogador 1 (linha meio)", "[single-file]" ) {
	int teste2[3][3]= {   { 2, 1, 0 }, 
	                      { 2, 1, 0 },
						  { 0, 1, 2 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );

} 
 
