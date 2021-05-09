#define CATCH_CONFIG_MAIN
#include "catch2.h"

using namespace std;

// Change me or remove me to fit your application
TEST_CASE("Example test case 1 description goes here", "[tag1]") {
	int x = 10;
	CHECK(x - 4 == 6.);
}

// Change me or remove me to fit your application
TEST_CASE("Example test case 2 description goes here", "[tag2]") {
	CHECK(true);
}

// Change me or remove me to fit your application
TEST_CASE("Example test case 3 description goes here", "[tag3]") {
	CHECK_FALSE(false);
}