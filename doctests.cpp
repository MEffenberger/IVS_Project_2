#include "doctest.h"
#include "mathlib.h"


TEST_CASE("Scitani") {
    CHECK(my_add(1, 1) == 2);
    CHECK(my_add(5, 3) == 8);
    CHECK(my_add(-5, 3) == -2);
    CHECK(my_add(5, -3) == 2);
    CHECK(my_add(-5, -3) == -8);
    CHECK(my_add(0, 0) == 0);
    CHECK(my_add(5, 0) == 5);
    CHECK(my_add(0, 5) == 5);
    CHECK(my_add(-5, 0) == -5);
    CHECK(my_add(0, -5) == -5);
    CHECK(my_add(1.1, 2.2) == doctest::Approx(3.3));
    CHECK(my_add(-1.1, 2.2) == doctest::Approx(1.1));
    CHECK(my_add(1.1, -2.2) == doctest::Approx(-1.1));
    CHECK(my_add(-1.1, -2.2) == doctest::Approx(-3.3));
}

TEST_CASE("Odcitani") {
    CHECK(my_sub(1, 1) == 0);
    CHECK(my_sub(5, 3) == 2);
    CHECK(my_sub(-5, 3) == -8);
    CHECK(my_sub(5, -3) == 8);
    CHECK(my_sub(-5, -3) == -2);
    CHECK(my_sub(0, 0) == 0);
    CHECK(my_sub(5, 0) == 5);
    CHECK(my_sub(0, 5) == -5);
    CHECK(my_sub(-5, 0) == -5);
    CHECK(my_sub(0, -5) == 5);
    CHECK(my_sub(1.1, 2.2) == doctest::Approx(-1.1));
    CHECK(my_sub(-1.1, 2.2) == doctest::Approx(-3.3));
    CHECK(my_sub(1.1, -2.2) == doctest::Approx(3.3));
    CHECK(my_sub(-1.1, -2.2) == doctest::Approx(1.1));
}

TEST_CASE("Nasobeni") {
    CHECK(my_mul(1, 1) == 1);
    CHECK(my_mul(5, 3) == 15);
    CHECK(my_mul(-5, 3) == -15);
    CHECK(my_mul(5, -3) == -15);
    CHECK(my_mul(-5, -3) == 15);
    CHECK(my_mul(0, 0) == 0);
    CHECK(my_mul(5, 0) == 0);
    CHECK(my_mul(0, 5) == 0);
    CHECK(my_mul(-5, 0) == 0);
    CHECK(my_mul(0, -5) == 0);
    CHECK(my_mul(1.1, 2.2) == doctest::Approx(2.42));
    CHECK(my_mul(-1.1, 2.2) == doctest::Approx(-2.42));
    CHECK(my_mul(1.1, -2.2) == doctest::Approx(-2.42));
    CHECK(my_mul(-1.1, -2.2) == doctest::Approx(2.42));
};

TEST_CASE("Deleni") {
    CHECK(my_div(2, 1) == 2);
    REQUIRE_THROWS_AS(my_div(4, 0), std::runtime_error);

}
    

TEST_CASE("Faktorial") {};
TEST_CASE("Mocnina s prirozenym exponentem") {};
TEST_CASE("Obecna odmocnina") {};
TEST_CASE("Absolutni hodnota") {
    CHECK(my_abs(2) == 2);
    CHECK(my_abs(-2) == 2);
    CHECK(my_abs(0) == 0);
    CHECK(my_abs(1.1) == doctest::Approx(-1.1));
    CHECK(my_abs(-1.1) == doctest::Approx(1.1));
}
