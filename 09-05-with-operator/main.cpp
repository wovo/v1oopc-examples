#include "ostream"
#include "vector.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

bool operator==( vector lhs, vector rhs ){
   return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

std::ostream & operator<<( std::ostream & lhs, vector pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}

TEST_CASE( "constructors, default" ){
   vector v;
   REQUIRE( v == vector( 1, 7 ) );   
}


