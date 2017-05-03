// UnitTest.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
#include "gtest\gtest.h"
#include <Triangle.h>
#include <NextDate.h>
#include <Commission.h>
#include <iostream>
#include <time.h>

using namespace std;
//Equivalence class * 5
//char Output[5][30] = { "Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral" };

TEST(TriangleTest, BoundaryTest_weak_Robust_strong_Robust)
{
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(0, 0, 0));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 1));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 2));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 100));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 199));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 200));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(0, 0, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 1, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 1, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 2, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 2, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 2, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 2, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 2, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 2, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 2, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 100, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 100, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 100, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 100, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 100, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 100, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 100, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 199, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 199, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 199, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 199, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 199, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 199, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 199, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 200, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 200, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 200, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 200, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 200, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 200, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 200, 201));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(0, 201, 0));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 201, 1));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 201, 2));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 201, 100));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 201, 199));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 201, 200));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(0, 201, 201));


	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, 0, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, 0, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, 0));
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 2, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 2, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 2, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 100, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 100, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 100, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 100, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 100, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 100, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 100, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 199, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 199, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 199, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 199, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 199, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 199, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 199, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 200, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 200, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 200, 201));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, 201, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 201, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 201, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 201, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 201, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 201, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, 201, 201));

	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(2, 0, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 0, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 0, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 0, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 0, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(2, 0, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 1, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 1, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(2, 1, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 1, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 1, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 1, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 1, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 2, 0));
	EXPECT_EQ("Isosceles", Triangle_Test(2, 2, 1));
	EXPECT_EQ("Equilateral", Triangle_Test(2, 2, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 2, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 2, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 2, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 2, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 100, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 100, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 100, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(2, 100, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 100, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 100, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 100, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 199, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 199, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 199, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 199, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(2, 199, 199));
	EXPECT_EQ("Scalene", Triangle_Test(2, 199, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 199, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 200, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 200, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 200, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(2, 200, 100));
	EXPECT_EQ("Scalene", Triangle_Test(2, 200, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(2, 200, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(2, 200, 201));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(2, 201, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 201, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 201, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 201, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 201, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(2, 201, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(2, 201, 201));

	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(100, 0, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 0, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 0, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 0, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 0, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(100, 0, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 1, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 1, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 1, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 1, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 1, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 1, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 2, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 2, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 2, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 2, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 2, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 2, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 2, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 100, 0));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 100, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 100, 2));
	EXPECT_EQ("Equilateral", Triangle_Test(100, 100, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 100, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 100, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 100, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 199, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 199, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 199, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 199, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 199, 199));
	EXPECT_EQ("Scalene", Triangle_Test(100, 199, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 199, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 200, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 200, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 200, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(100, 200, 100));
	EXPECT_EQ("Scalene", Triangle_Test(100, 200, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(100, 200, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(100, 200, 201));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(100, 201, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 201, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 201, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 201, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 201, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(100, 201, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(100, 201, 201));

	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(199, 0, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 0, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 0, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 0, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 0, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(199, 0, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 1, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 1, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 1, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 1, 199));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 1, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 1, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 2, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 2, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 2, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 2, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 2, 199));
	EXPECT_EQ("Scalene", Triangle_Test(199, 2, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 2, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 100, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 100, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 100, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 100, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 100, 199));
	EXPECT_EQ("Scalene", Triangle_Test(199, 100, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 100, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 199, 0));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 199, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 199, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 199, 100));
	EXPECT_EQ("Equilateral", Triangle_Test(199, 199, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 199, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 199, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 200, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(199, 200, 1));
	EXPECT_EQ("Scalene", Triangle_Test(199, 200, 2));
	EXPECT_EQ("Scalene", Triangle_Test(199, 200, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 200, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(199, 200, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(199, 200, 201));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(199, 201, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 201, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 201, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 201, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 201, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(199, 201, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(199, 201, 201));

	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(200, 0, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 0, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 0, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 0, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 0, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(200, 0, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 1, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 1, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 1, 100));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 1, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 1, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 1, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 2, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 2, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 2, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 2, 100));
	EXPECT_EQ("Scalene", Triangle_Test(200, 2, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 2, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 2, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 100, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 100, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 100, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 100, 100));
	EXPECT_EQ("Scalene", Triangle_Test(200, 100, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 100, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 100, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 199, 0));
	EXPECT_EQ("Not Triangle", Triangle_Test(200, 199, 1));
	EXPECT_EQ("Scalene", Triangle_Test(200, 199, 2));
	EXPECT_EQ("Scalene", Triangle_Test(200, 199, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 199, 199));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 199, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 199, 201));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 200, 0));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 199));
	EXPECT_EQ("Equilateral", Triangle_Test(200, 200, 200));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(200, 200, 201));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(200, 201, 0));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 201, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 201, 2));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 201, 100));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 201, 199));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(200, 201, 200));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(200, 201, 201));

	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(201, 0, 0));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 0, 1));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 0, 2));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 0, 100));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 0, 199));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 0, 200));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(201, 0, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 1, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 1, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 1, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 1, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 1, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 1, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 2, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 2, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 2, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 2, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 2, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 2, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 2, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 100, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 100, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 100, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 100, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 100, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 100, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 100, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 199, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 199, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 199, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 199, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 199, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 199, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 199, 201));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 200, 0));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 200, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 200, 2));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 200, 100));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 200, 199));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(201, 200, 200));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(201, 200, 201));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(201, 201, 0));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 201, 1));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 201, 2));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 201, 100));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 201, 199));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(201, 201, 200));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(201, 201, 201));
	// 0 ,1,2,3,4
	//"Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral"
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(0, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(MaxEdge + 1, 1, 1));
	
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, 0, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, MaxEdge + 1, 1));
	
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, 0));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, MaxEdge + 1));

	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(0, 0, 1));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(0, 1, 0));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, 0, 0));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(0, 0, 0));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(MaxEdge + 1, 1, MaxEdge + 1));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, MaxEdge + 1, MaxEdge + 1));
	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(MaxEdge + 1, MaxEdge + 1, 1));
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(MaxEdge + 1, MaxEdge + 1, MaxEdge + 1));
	
}

TEST(TriangleTest, BoundaryTest_weak_Normal_strong_Normal)
{
	//"Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral"
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, MaxEdge - 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, MaxEdge));

	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 2, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, MaxEdge - 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, MaxEdge));

	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge - 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge - 1, 2));
	EXPECT_EQ("Isosceles", Triangle_Test(1, MaxEdge - 1, MaxEdge - 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge - 1, MaxEdge));

	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge, 2));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge, MaxEdge - 1));
	EXPECT_EQ("Isosceles", Triangle_Test(1, MaxEdge, MaxEdge));

	EXPECT_EQ("Equilateral", Triangle_Test(2, 2, 2));
	EXPECT_EQ("Equilateral", Triangle_Test(MaxEdge, MaxEdge, MaxEdge));
	EXPECT_EQ("Equilateral", Triangle_Test(MaxEdge - 1, MaxEdge - 1, MaxEdge - 1));

	EXPECT_EQ("Not Triangle", Triangle_Test(2, 1, 1));

	EXPECT_EQ("Not Triangle", Triangle_Test(1, 2, 1));
	

	

	

	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge - 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, MaxEdge, 1));

	EXPECT_EQ("Not Triangle", Triangle_Test(MaxEdge - 1, 1, 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(MaxEdge, 1, 1));


}

TEST(TriangleTest, Equivalence){
	//"Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral"
	srand(time(NULL));
	for (int i = 0; i < 10; i++){
		int edge = rand() % 200 + 1;
		EXPECT_EQ("Equilateral", Triangle_Test(edge, edge, edge));
	}
	for (int i = 0; i < 10; i++){
		int edge = rand() % 99 + 2;	//avoid situation of edge = 2*edge - 1 
		EXPECT_EQ("Isosceles", Triangle_Test(edge, edge, 2 * edge - 1));
	}
	for (int i = 0; i < 10; i++){
		int edge = rand() % 197 + 3;	//(2,3,4)to(198,199,200)
		EXPECT_EQ("Scalene", Triangle_Test(edge - 1, edge, edge + 1));
	}
	for (int i = 0; i < 10; i++){
		int edge = rand() % 100 + 1;	
		EXPECT_EQ("Not Triangle", Triangle_Test(edge, edge, 2 * edge));
	}
	//0 is not Equivalence Class.
	
}

TEST(TriangleTest, Edge){
	//"Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral"
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 2, 2));
	EXPECT_EQ("Scalene", Triangle_Test(2, 3, 4));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, 2));

	EXPECT_EQ("Equilateral", Triangle_Test(MaxEdge, MaxEdge, MaxEdge));
	EXPECT_EQ("Isosceles", Triangle_Test(1, MaxEdge, MaxEdge));
	EXPECT_EQ("Scalene", Triangle_Test(MaxEdge - 2, MaxEdge - 1, MaxEdge));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, MaxEdge));

	EXPECT_EQ("Equilateral", Triangle_Test(MaxEdge - 1, MaxEdge - 1, MaxEdge - 1));
	EXPECT_EQ("Isosceles", Triangle_Test(1, MaxEdge - 1, MaxEdge - 1));
	EXPECT_EQ("Scalene", Triangle_Test(MaxEdge - 3, MaxEdge - 2, MaxEdge - 1));
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 1, MaxEdge - 1));
}
TEST(TriangleTest, DecisionTable){
	//"Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral"
	srand(time(NULL));
	//c1 (a < b + c): false =====================> a >= b + c	c23456 dont care as 32 situations.
	for (int i = 0; i < 10; i++){
		int b = rand() % 100 + 1;
		int c = rand() % 100 + 1;
		EXPECT_EQ("Not Triangle", Triangle_Test(b + c, b, c));
	}
	//c2 b < a + c: false =====================> b >= a + c
	for (int i = 0; i < 10; i++){
		int a = rand() % 100 + 1;
		int c = rand() % 100 + 1;
		EXPECT_EQ("Not Triangle", Triangle_Test(a, a + c, c));
	}
	//c3 c < a + b: false =====================> c >= a + b
	for (int i = 0; i < 10; i++){
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		EXPECT_EQ("Not Triangle", Triangle_Test(a, b, a + b));
	}
	//other (three T/F condition as 2*2*2 cases) 8 cases need to test one by one.T for True F for False
	//c456 TTT a=b=c
	for (int i = 0; i < 10; i++){
		int a = rand() % 200 + 1;
		EXPECT_EQ("Equilateral", Triangle_Test(a, a, a));
	}

	//c456 TTF	Impossible.
	//c456 TFT	Impossible.
	//c456 FTT	Impossible.

	//c456 TFF a=b
	for (int i = 0; i < 10; i++){
		int a = rand() % 200 + 1;
		int c = rand() % 200 + 1;
		if (a == c || a+a<=c || c+a<=a){
			i--; continue;
		}
		EXPECT_EQ("Isosceles", Triangle_Test(a, a, c));
	}
	//c456 FTF a=c
	for (int i = 0; i < 10; i++){
		int a = rand() % 200 + 1;
		int b = rand() % 200 + 1;
		if (a == b || a + a <= b || b + a <= a){
			i--; continue;
		}
		EXPECT_EQ("Isosceles", Triangle_Test(a, b, a));
	}
	//c456 FFT b=c
	for (int i = 0; i < 10; i++){
		int a = rand() % 200 + 1;
		int b = rand() % 200 + 1;
		if (a == b || b + b <= a || b + a <= b){
			i--; continue;
		}
		EXPECT_EQ("Isosceles", Triangle_Test(a, b, b));
	}
	//c456 FFF a=b=c
	for (int i = 0; i < 10; i++){
		int a = rand() % 200 + 1;
		int b = rand() % 200 + 1;
		int c = rand() % 200 + 1;
		if (a == b || a == c || b == c || b + c <= a || b + a <= c || a + c <= b){
			i--; continue;
		}
		EXPECT_EQ("Scalene", Triangle_Test(a, b, c));
	}
}

TEST(NextDate, BoundaryTest_Robust){
	//Boundary  year <= 2017 && year >= 1000 && month <= 12 && month >= 1 && day <= 31 && day >= 1
	//Weak Robust
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 4, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 4, 30));

	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));

	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 4, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 4, 0));

	//Strong Robust
	//Two Fault
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 4, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 4, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 4, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 4, 32));


	//Three Fault
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2018, 0, 0));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(999, 0, 0));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2018, 0, 32));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(999, 0, 32));

	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2018, 13, 0));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(999, 13, 0));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2018, 13, 32));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(999, 13, 32));
}
TEST(NextDate, BoundaryTest_Normal){
	//Boundary year <= 2017 && year >= 1000 && month <= 12 && month >= 1 && day <= 31 && day >= 1
	EXPECT_EQ("1000/1/2", NextDate_Test(1000, 1, 1));
	EXPECT_EQ("1000/2/1", NextDate_Test(1000, 1, 31));
	EXPECT_EQ("1000/3/1", NextDate_Test(1000, 2, 28));
	EXPECT_EQ("1000/12/2", NextDate_Test(1000, 12, 1));
	EXPECT_EQ("1001/1/1", NextDate_Test(1000, 12, 31));

	EXPECT_EQ("1000/4/1", NextDate_Test(1000, 3, 31));
	EXPECT_EQ("1000/5/1", NextDate_Test(1000, 4, 30));
	EXPECT_EQ("1000/6/1", NextDate_Test(1000, 5, 31));
	EXPECT_EQ("1000/7/1", NextDate_Test(1000, 6, 30));
	EXPECT_EQ("1000/8/1", NextDate_Test(1000, 7, 31));
	EXPECT_EQ("1000/9/1", NextDate_Test(1000, 8, 31));
	EXPECT_EQ("1000/10/1", NextDate_Test(1000, 9, 30));
	EXPECT_EQ("1000/11/1", NextDate_Test(1000, 10, 31));
	EXPECT_EQ("1000/12/1", NextDate_Test(1000, 11, 30));


	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/12/2", NextDate_Test(2000, 12, 1));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));


	EXPECT_EQ("2017/1/2", NextDate_Test(2017, 1, 1));
	EXPECT_EQ("2017/3/1", NextDate_Test(2017, 2, 28));
	EXPECT_EQ("2017/2/1", NextDate_Test(2017, 1, 31));
	EXPECT_EQ("2017/12/2", NextDate_Test(2017, 12, 1));
	EXPECT_EQ("2018/1/1", NextDate_Test(2017, 12, 31));

	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 2, 30));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 2, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 6, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 9, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 11, 31));

	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 2, 29));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 2, 30));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 2, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 4, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 6, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 9, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(1000, 11, 31));

}
TEST(NextDate, Equivalence){
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/31", NextDate_Test(2000, 3, 30));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/6/16", NextDate_Test(2000, 6, 15));

	EXPECT_EQ("2001/2/28", NextDate_Test(2001, 2, 27));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
	EXPECT_EQ("2001/3/31", NextDate_Test(2001, 3, 30));
	EXPECT_EQ("2001/4/1", NextDate_Test(2001, 3, 31));
	EXPECT_EQ("2001/6/16", NextDate_Test(2001, 6, 15));

	EXPECT_EQ("2000/12/30", NextDate_Test(2000, 12, 29));
	EXPECT_EQ("2000/12/29", NextDate_Test(2000, 12, 28));
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));
	EXPECT_EQ("2000/12/16", NextDate_Test(2000, 12, 15));
}
TEST(NextDate,EdgeTest){
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/12/16", NextDate_Test(2000, 12, 15));

	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
}
TEST(NextDate, DecisionTable){
	
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));

	EXPECT_EQ("2000/12/2", NextDate_Test(2000, 12, 1));
	EXPECT_EQ("2000/12/16", NextDate_Test(2000, 12, 15));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	EXPECT_EQ("2000/1/16", NextDate_Test(2000, 1, 15));
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/3/16", NextDate_Test(2000, 3, 15));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/16", NextDate_Test(2000, 5, 15));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/7/16", NextDate_Test(2000, 7, 15));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/8/16", NextDate_Test(2000, 8, 15));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/10/16", NextDate_Test(2000, 10, 15));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));

	EXPECT_EQ("2000/4/16", NextDate_Test(2000, 4, 15));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/16", NextDate_Test(2000, 6, 15));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/9/16", NextDate_Test(2000, 9, 15));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/16", NextDate_Test(2000, 11, 15));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));

}
TEST(CommissionTest, BoundaryTest){

	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 1, 0));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 2));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 45));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 89));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 2, 0));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 2, 1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 2, 2));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 2, 45));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 2, 89));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 40, 0));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 2));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 45));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 89));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 79, 1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 79, 2));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 79, 45));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 79, 89));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 80, 0));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 80, 1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 80, 2));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 80, 45));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 80, 89));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 80, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 81, 91));

	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(0, 0, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 2));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 45));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 89));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 90));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(0, 0, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 2, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 2, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 2, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 2, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 2, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 2, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 2, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 40, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 40, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 40, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 40, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 40, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 40, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 40, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 79, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 79, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 79, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 79, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 79, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 79, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 79, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 80, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 80, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 80, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 80, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 80, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 80, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 80, 91));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(0, 81, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 81, 1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 81, 2));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 81, 45));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 81, 89));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 81, 90));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(0, 81, 91));


	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 1, 0));

	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 91));

	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(2, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(2, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 1, 0));
	
	
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(2, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(2, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(2, 81, 91));

	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(35, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(35, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 1, 0));
	
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(35, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(35, 81, 91));

	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(69, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(69, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 1, 0));
	
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(69, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(69, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(69, 81, 91));

	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(70, 0, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 0, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 0, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 0, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 0, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(70, 0, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 80, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(70, 81, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 2));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 45));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 89));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 90));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(70, 81, 91));

	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 0, 1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 0, 2));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 0, 45));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 0, 89));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 0, 90));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 1, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 1, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 2, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 2, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 2, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 2, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 2, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 2, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 2, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 40, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 40, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 79, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 79, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 79, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 79, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 79, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 79, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 79, 91));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 80, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 80, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 80, 2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 80, 45));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 80, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 80, 90));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 80, 91));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 81, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 2));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 45));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 89));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 90));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 81, 91));
}
TEST(CommissionTest, Boundary_Normal){


	EXPECT_EQ("$10", CommissionTest(1, 1, 1));
	EXPECT_EQ("$12.5", CommissionTest(1, 1, 2));
	EXPECT_EQ("$130", CommissionTest(1, 1, 45));
	EXPECT_EQ("$320", CommissionTest(1, 1, 89));
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 2, 0));
	EXPECT_EQ("$13", CommissionTest(1, 2, 1));
	EXPECT_EQ("$15.5", CommissionTest(1, 2, 2));
	EXPECT_EQ("$134.5", CommissionTest(1, 2, 45));
	EXPECT_EQ("$326", CommissionTest(1, 2, 89));
	EXPECT_EQ("$331", CommissionTest(1, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 40, 0));
	EXPECT_EQ("$140.5", CommissionTest(1, 40, 1));
	EXPECT_EQ("$144.25", CommissionTest(1, 40, 2));
	EXPECT_EQ("$334", CommissionTest(1, 40, 45));
	EXPECT_EQ("$554", CommissionTest(1, 40, 89));
	EXPECT_EQ("$559", CommissionTest(1, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 79, 0));
	EXPECT_EQ("$348", CommissionTest(1, 79, 1));
	EXPECT_EQ("$353", CommissionTest(1, 79, 2));
	EXPECT_EQ("$568", CommissionTest(1, 79, 45));
	EXPECT_EQ("$788", CommissionTest(1, 79, 89));
	EXPECT_EQ("$793", CommissionTest(1, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 80, 0));
	EXPECT_EQ("$354", CommissionTest(1, 80, 1));
	EXPECT_EQ("$359", CommissionTest(1, 80, 2));
	EXPECT_EQ("$574", CommissionTest(1, 80, 45));
	EXPECT_EQ("$794", CommissionTest(1, 80, 89));
	EXPECT_EQ("$799", CommissionTest(1, 80, 90));


	EXPECT_EQ("$14.5", CommissionTest(2, 1, 1));
	EXPECT_EQ("$17", CommissionTest(2, 1, 2));
	EXPECT_EQ("$136.75", CommissionTest(2, 1, 45));
	EXPECT_EQ("$329", CommissionTest(2, 1, 89));
	EXPECT_EQ("$334", CommissionTest(2, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 2, 0));
	EXPECT_EQ("$17.5", CommissionTest(2, 2, 1));
	EXPECT_EQ("$20", CommissionTest(2, 2, 2));
	EXPECT_EQ("$141.25", CommissionTest(2, 2, 45));
	EXPECT_EQ("$335", CommissionTest(2, 2, 89));
	EXPECT_EQ("$340", CommissionTest(2, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 40, 0));


	EXPECT_EQ("$147.25", CommissionTest(2, 40, 1));
	EXPECT_EQ("$151", CommissionTest(2, 40, 2));
	EXPECT_EQ("$343", CommissionTest(2, 40, 45));
	EXPECT_EQ("$563", CommissionTest(2, 40, 89));
	EXPECT_EQ("$568", CommissionTest(2, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 79, 0));
	EXPECT_EQ("$357", CommissionTest(2, 79, 1));
	EXPECT_EQ("$362", CommissionTest(2, 79, 2));
	EXPECT_EQ("$577", CommissionTest(2, 79, 45));
	EXPECT_EQ("$797", CommissionTest(2, 79, 89));
	EXPECT_EQ("$802", CommissionTest(2, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(2, 80, 0));
	EXPECT_EQ("$363", CommissionTest(2, 80, 1));
	EXPECT_EQ("$368", CommissionTest(2, 80, 2));
	EXPECT_EQ("$583", CommissionTest(2, 80, 45));
	EXPECT_EQ("$803", CommissionTest(2, 80, 89));
	EXPECT_EQ("$808", CommissionTest(2, 80, 90));

	EXPECT_EQ("$194.5", CommissionTest(35, 1, 1));
	EXPECT_EQ("$198.25", CommissionTest(35, 1, 2));
	EXPECT_EQ("$406", CommissionTest(35, 1, 45));
	EXPECT_EQ("$626", CommissionTest(35, 1, 89));
	EXPECT_EQ("$631", CommissionTest(35, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 2, 0));
	EXPECT_EQ("$199", CommissionTest(35, 2, 1));
	EXPECT_EQ("$202.75", CommissionTest(35, 2, 2));
	EXPECT_EQ("$412", CommissionTest(35, 2, 45));
	EXPECT_EQ("$632", CommissionTest(35, 2, 89));
	EXPECT_EQ("$637", CommissionTest(35, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 40, 0));
	EXPECT_EQ("$420", CommissionTest(35, 40, 1));
	EXPECT_EQ("$425", CommissionTest(35, 40, 2));
	EXPECT_EQ("$640", CommissionTest(35, 40, 45));
	EXPECT_EQ("$860", CommissionTest(35, 40, 89));
	EXPECT_EQ("$865", CommissionTest(35, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 79, 0));
	EXPECT_EQ("$654", CommissionTest(35, 79, 1));
	EXPECT_EQ("$659", CommissionTest(35, 79, 2));
	EXPECT_EQ("$874", CommissionTest(35, 79, 45));
	EXPECT_EQ("$1094", CommissionTest(35, 79, 89));
	EXPECT_EQ("$1099", CommissionTest(35, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 80, 0));
	EXPECT_EQ("$660", CommissionTest(35, 80, 1));
	EXPECT_EQ("$665", CommissionTest(35, 80, 2));
	EXPECT_EQ("$880", CommissionTest(35, 80, 45));
	EXPECT_EQ("$1100", CommissionTest(35, 80, 89));
	EXPECT_EQ("$1105", CommissionTest(35, 80, 90));

	

	EXPECT_EQ("$492", CommissionTest(69, 1, 1));
	EXPECT_EQ("$497", CommissionTest(69, 1, 2));
	EXPECT_EQ("$712", CommissionTest(69, 1, 45));
	EXPECT_EQ("$932", CommissionTest(69, 1, 89));
	EXPECT_EQ("$937", CommissionTest(69, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 2, 0));
	EXPECT_EQ("$498", CommissionTest(69, 2, 1));
	EXPECT_EQ("$503", CommissionTest(69, 2, 2));
	EXPECT_EQ("$718", CommissionTest(69, 2, 45));
	EXPECT_EQ("$938", CommissionTest(69, 2, 89));
	EXPECT_EQ("$943", CommissionTest(69, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 40, 0));
	EXPECT_EQ("$726", CommissionTest(69, 40, 1));
	EXPECT_EQ("$731", CommissionTest(69, 40, 2));
	EXPECT_EQ("$946", CommissionTest(69, 40, 45));
	EXPECT_EQ("$1166", CommissionTest(69, 40, 89));
	EXPECT_EQ("$1171", CommissionTest(69, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 79, 0));
	EXPECT_EQ("$960", CommissionTest(69, 79, 1));
	EXPECT_EQ("$965", CommissionTest(69, 79, 2));
	EXPECT_EQ("$1180", CommissionTest(69, 79, 45));
	EXPECT_EQ("$1400", CommissionTest(69, 79, 89));
	EXPECT_EQ("$1405", CommissionTest(69, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(69, 80, 0));
	EXPECT_EQ("$966", CommissionTest(69, 80, 1));
	EXPECT_EQ("$971", CommissionTest(69, 80, 2));
	EXPECT_EQ("$1186", CommissionTest(69, 80, 45));
	EXPECT_EQ("$1406", CommissionTest(69, 80, 89));
	EXPECT_EQ("$1411", CommissionTest(69, 80, 90));


	EXPECT_EQ("$501", CommissionTest(70, 1, 1));
	EXPECT_EQ("$506", CommissionTest(70, 1, 2));
	EXPECT_EQ("$721", CommissionTest(70, 1, 45));
	EXPECT_EQ("$941", CommissionTest(70, 1, 89));
	EXPECT_EQ("$946", CommissionTest(70, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 2, 0));
	EXPECT_EQ("$507", CommissionTest(70, 2, 1));
	EXPECT_EQ("$512", CommissionTest(70, 2, 2));
	EXPECT_EQ("$727", CommissionTest(70, 2, 45));
	EXPECT_EQ("$947", CommissionTest(70, 2, 89));
	EXPECT_EQ("$952", CommissionTest(70, 2, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 2, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 40, 0));
	EXPECT_EQ("$735", CommissionTest(70, 40, 1));
	EXPECT_EQ("$740", CommissionTest(70, 40, 2));
	EXPECT_EQ("$955", CommissionTest(70, 40, 45));
	EXPECT_EQ("$1175", CommissionTest(70, 40, 89));
	EXPECT_EQ("$1180", CommissionTest(70, 40, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 40, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 79, 0));
	EXPECT_EQ("$969", CommissionTest(70, 79, 1));
	EXPECT_EQ("$974", CommissionTest(70, 79, 2));
	EXPECT_EQ("$1189", CommissionTest(70, 79, 45));
	EXPECT_EQ("$1409", CommissionTest(70, 79, 89));
	EXPECT_EQ("$1414", CommissionTest(70, 79, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 79, 91));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 80, 0));
	EXPECT_EQ("$975", CommissionTest(70, 80, 1));
	EXPECT_EQ("$980", CommissionTest(70, 80, 2));
	EXPECT_EQ("$1195", CommissionTest(70, 80, 45));
	EXPECT_EQ("$1415", CommissionTest(70, 80, 89));
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));

	
}
//Equivalence Class
TEST(CommissionTest, Equivalence) {
	EXPECT_EQ("$10", CommissionTest(1, 1, 1));
	EXPECT_EQ("$20", CommissionTest(2, 2, 2));
	EXPECT_EQ("$507", CommissionTest(70, 2, 1));
	EXPECT_EQ("$512", CommissionTest(70, 2, 2));
	EXPECT_EQ("$946", CommissionTest(69, 40, 45));
	EXPECT_EQ("$1166", CommissionTest(69, 40, 89));
	EXPECT_EQ("locks not in 1...70", CommissionTest(-2, 40, 40));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, -1, 45));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 40, -2));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 40, 40));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(35, 81, 45));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(35, 40, 91));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(-2, -1, 5));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(5, -1, -1));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(-2, 5, -1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(-2, -1, -1));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 40, 45));
}
//==============================================================

//Edge Testing
TEST(CommissionTest, EdgeTest) {
	EXPECT_EQ("locks not in 1...70", CommissionTest(0, 1, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(1, 81, 1));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 1, 0));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(1, 1, 91));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(71, 81, 1));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(71, 1, 91));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 0, 0));
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 91));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(0, 0, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 81, 91));
	EXPECT_EQ("$10", CommissionTest(1, 1, 1));
	EXPECT_EQ("$20", CommissionTest(2, 2, 2));
	EXPECT_EQ("$640", CommissionTest(35, 40, 45));
	EXPECT_EQ("$1400", CommissionTest(69, 79, 89));
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 1));
}

//==============================================================

//DecisionTable
TEST(CommissionTest, DecisionTable) {
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 1));
	EXPECT_EQ("$10", CommissionTest(1, 1, 1));
	EXPECT_EQ("$20", CommissionTest(2, 2, 2));
	EXPECT_EQ("$640", CommissionTest(35, 40, 45));
	EXPECT_EQ("$1400", CommissionTest(69, 79, 89));
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
}

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}

