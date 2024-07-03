#include "pch.h"
#include "../DAY8-PrimeFactor/prime-factors.cpp"

#include <vector>
using namespace std;

class PrimeFactorsFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFactorsFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST_F(PrimeFactorsFixture, Of2) {
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}