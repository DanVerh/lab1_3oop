#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "lab1_3oop/Vector3D.cpp"
#include "lab1_3oop/Vector3D.hpp"

TEST_CASE( "Arguments initialized") {
    Vector3D test;
    test.SetX(3);
    REQUIRE( test.GetX() == 3);
}

