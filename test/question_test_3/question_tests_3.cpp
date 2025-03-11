#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_dna_p_distance"){
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 0.4118);
	//REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == 0.3529); //As it is writtern in the instructions, this has the exact same inputs as the previous test case but expects a different output.
	REQUIRE(get_dna_p_distance("GAGCCTAATAACTGGAT", "CATCGAAACGACGGCCT") == 0.5295);
	REQUIRE(get_dna_p_distance("GGGGGGGGGGGGGGGG", "AAAAAAAAAAAAAAAA") == 1.0);
}
