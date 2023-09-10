#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "CircularBuffer2d.h"

TEST_CASE("Create circular buffer 2d")
{
    CircularBuffer2d<int, 8, 8> cbuf2d;
    CHECK(cbuf2d.isEmpty() == true);
    CHECK(cbuf2d.isFull() == false);
}