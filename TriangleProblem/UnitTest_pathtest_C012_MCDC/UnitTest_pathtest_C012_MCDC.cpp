// UnitTest_pathtest_C012_MCDC.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
#include "gtest\gtest.h"
#include <Triangle.h>
#include <NextDate.h>
#include <Commission.h>
#include <iostream>
#include <time.h>

using namespace std;

TEST(TriangleTest,C0) {
	//Invalid input *7 statement
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));

	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(-1, -1, 1));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, -1, -1));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(-1, 1, -1));
	
	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(-1, -1, -1));
	
	//valid input statement
	//Not Triangle statement
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 1));

	//Triangle statement
	//Equilateral
	EXPECT_EQ("Equilateral", Triangle_Test(200, 200, 200));
	//Isosceles
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));
	//Scalene
	EXPECT_EQ("Scalene", Triangle_Test(100, 200, 101));
	
}

TEST(TriangleTest, C1) {
	//BaseLine
	//Path start valid Triangle Equilateral End
	EXPECT_EQ("Equilateral", Triangle_Test(100, 100, 100));

	//flip Triangle
	//Path start valid Triangle Isosceles End
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));

	//flip Triangle
	//Path start valid Triangle Scalene End
	EXPECT_EQ("Scalene", Triangle_Test(100, 200, 101));

	//flip valid
	//Path start valid Not Triangle End
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 1));

	//flip start
	//Invalid input *7 statement
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));

	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(-1, -1, 1));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, -1, -1));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(-1, 1, -1));

	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(-1, -1, -1));

}

TEST(TriangleTest, C2) {
	//BaseLine
	//Path start valid Triangle Equilateral End
	EXPECT_EQ("Equilateral", Triangle_Test(100, 100, 100));

	//flip Triangle
	//Path start valid Triangle Isosceles End
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));

	//flip Triangle
	//Path start valid Triangle Scalene End
	EXPECT_EQ("Scalene", Triangle_Test(100, 200, 101));

	//flip valid
	//Path start valid Not Triangle End
	EXPECT_EQ("Not Triangle", Triangle_Test(1, 200, 1));

	//flip start
	//Invalid input *7 statement
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));

	EXPECT_EQ("Value of a,b is not in the range of permitted values", Triangle_Test(-1, -1, 1));
	EXPECT_EQ("Value of b,c is not in the range of permitted values", Triangle_Test(1, -1, -1));
	EXPECT_EQ("Value of a,c is not in the range of permitted values", Triangle_Test(-1, 1, -1));

	EXPECT_EQ("Value of a,b,c is not in the range of permitted values", Triangle_Test(-1, -1, -1));

}
TEST(TriangleTest, MCDC) {
	//Condition 1:Valid a, b, c ? (if valid(a) && valid(b) && valid(c))
	//TTT, FTT, TFT, TTF
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));
	//Condition 2 : Valid a, b ? (if valid(a) && valid(b))
	//TT, FT, TF
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	
	//Condition 3 : Valid a, c ? (if valid(a) && valid(c))
	//TT, FT, TF
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));
	//Condition 4 : Valid b, c ? (if valid(b) && valid(c))
	//TT, FT, TF
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));
	//Condition 5 : Valid a ? (if valid(a))
	//T, F
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of a is not in the range of permitted values", Triangle_Test(-1, 1, 1));
	//Condition 6 : Valid b ? (if valid(b))
	//T, F
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of b is not in the range of permitted values", Triangle_Test(1, -1, 1));
	//Condition 7 : Valid c ? (if valid(c))
	//T, F
	EXPECT_EQ("Equilateral", Triangle_Test(1, 1, 1));
	EXPECT_EQ("Value of c is not in the range of permitted values", Triangle_Test(1, 1, -1));
	//Condition 8 : Triangle ? (if (c < a + b && b < a + c && a < b + c))
	//TTT, FTT, TFT, TTF
	EXPECT_EQ("Scalene", Triangle_Test(100, 200, 101));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 1, 200));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 200, 200));
	
	//Condition 9 : Equilateral ? (if (a == c && b == c && a == b))
	//TTT, FTF, TFF, FFT
	EXPECT_EQ("Equilateral", Triangle_Test(100, 100, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 200, 200));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 1, 200));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));
	//Condition 10 : Scalene ? (if (a == c || b == c || a == b))
	//TTT,TFF,FTF,FFT, FFF
	EXPECT_EQ("Equilateral", Triangle_Test(100, 100, 100));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 1, 200));
	EXPECT_EQ("Isosceles", Triangle_Test(1, 200, 200));
	EXPECT_EQ("Isosceles", Triangle_Test(200, 200, 1));
	

}

TEST(NextDateTest, C0) {
	//Invalid Boundary *7 statement
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));

	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));

	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 0));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 0));

	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 0));

	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 13, 30));

	//Invalid Date
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 6, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 9, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 11, 31));

	//Dec
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	//Feb
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));

	//4,6,9,11 month
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/30", NextDate_Test(2000, 6, 29));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/9/30", NextDate_Test(2000, 9, 29));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/30", NextDate_Test(2000, 11, 29));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));

	//other month 
	EXPECT_EQ("2000/1/31", NextDate_Test(2000, 1, 30));
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/3/31", NextDate_Test(2000, 3, 30));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/31", NextDate_Test(2000, 5, 30));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/7/31", NextDate_Test(2000, 7, 30));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/8/31", NextDate_Test(2000, 8, 30));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/10/31", NextDate_Test(2000, 10, 30));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));
	
}

TEST(NextDateTest, C1) {
	//Invalid Boundary *7 statement
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));

	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));

	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 0));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 0));

	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 0));

	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 13, 30));

	//Invalid Date
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 6, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 9, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 11, 31));

	//Dec
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	//Feb
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));

	//4,6,9,11 month
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/30", NextDate_Test(2000, 6, 29));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/9/30", NextDate_Test(2000, 9, 29));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/30", NextDate_Test(2000, 11, 29));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));

	//other month 
	EXPECT_EQ("2000/1/31", NextDate_Test(2000, 1, 30));
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/3/31", NextDate_Test(2000, 3, 30));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/31", NextDate_Test(2000, 5, 30));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/7/31", NextDate_Test(2000, 7, 30));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/8/31", NextDate_Test(2000, 8, 30));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/10/31", NextDate_Test(2000, 10, 30));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));

}

TEST(NextDateTest, C2) {
	//Invalid Boundary *7 statement
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));

	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));

	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 0));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 0));

	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 0));

	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 13, 30));

	//Invalid Date
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 6, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 9, 31));
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 11, 31));

	//Dec
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	//Feb
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));

	//4,6,9,11 month
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/30", NextDate_Test(2000, 6, 29));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/9/30", NextDate_Test(2000, 9, 29));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/30", NextDate_Test(2000, 11, 29));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));

	//other month 
	EXPECT_EQ("2000/1/31", NextDate_Test(2000, 1, 30));
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/3/31", NextDate_Test(2000, 3, 30));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/5/31", NextDate_Test(2000, 5, 30));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/7/31", NextDate_Test(2000, 7, 30));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/8/31", NextDate_Test(2000, 8, 30));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/10/31", NextDate_Test(2000, 10, 30));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));
}
TEST(NextDateTest, MCDC) {

	//Condition 1:Valid Boundary ? (if valid(y) && valid(m) && valid(d))
	//TTT, FTT, TFT, TTF
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	//Condition 2 : Valid y&m ? (if valid(y) && valid(m))
	//TT, FT, TF
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));
	//Condition 3 : Valid y&d ? (if valid(y) && valid(d))
	//TT, FT, TF
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(999, 1, 30));
	EXPECT_EQ("year not in 1000 ... 2017", NextDate_Test(2018, 1, 30));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	//Condition 4 : Valid m&d ? (if valid(m) && valid(d))
	//TT, FT, TF
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 0, 30));
	EXPECT_EQ("month not in 1 ... 12", NextDate_Test(2000, 13, 30));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 32));
	EXPECT_EQ("day not in 1 ... 31", NextDate_Test(2000, 1, 0));

	//Condition 5 : Valid y ? (if valid(y))
	//T, F
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 0, 0));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 32));
	EXPECT_EQ("month not in 1 ... 12,day not in 1 ... 31", NextDate_Test(2000, 13, 0));

	//Condition 6 : Valid m ? (if valid(m))
	//T, F
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 32));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(999, 1, 0));
	EXPECT_EQ("year not in 1000 ... 2017,day not in 1 ... 31", NextDate_Test(2018, 1, 0));


	//Condition 7 : Valid d ? (if valid(d))
	//T, F
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 0, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(999, 13, 30));
	EXPECT_EQ("year not in 1000 ... 2017,month not in 1 ... 12", NextDate_Test(2018, 13, 30));
	//Condition 8 : Valid Date ? (if (IsValidDate(year, month, day))
	//T, F
	EXPECT_EQ("Invalid Input Date", NextDate_Test(2000, 4, 31));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	//Condition 9:Dec ? (if (month == Dec))
	//T, F
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));
	//Condition 10 : Feb ? (if (month == Feb))
	//T, F
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));

	//Condition 11 : 4, 6, 9, 11m ? (if (month == 4 or 6 or 9 or 11)
	//TFFF, FTFF, FFTF, FFFT, FFFF
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/6/30", NextDate_Test(2000, 6, 29));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/9/30", NextDate_Test(2000, 9, 29));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/11/30", NextDate_Test(2000, 11, 29));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	//Condition 12: <= 30d ? (if (day <= 30))
	//T, F
	EXPECT_EQ("2000/1/31", NextDate_Test(2000, 1, 30));
	EXPECT_EQ("2000/3/31", NextDate_Test(2000, 3, 30));
	EXPECT_EQ("2000/5/31", NextDate_Test(2000, 5, 30));
	EXPECT_EQ("2000/7/31", NextDate_Test(2000, 7, 30));
	EXPECT_EQ("2000/8/31", NextDate_Test(2000, 8, 30));
	EXPECT_EQ("2000/10/31", NextDate_Test(2000, 10, 30));
	EXPECT_EQ("2000/2/1", NextDate_Test(2000, 1, 31));
	EXPECT_EQ("2000/4/1", NextDate_Test(2000, 3, 31));
	EXPECT_EQ("2000/6/1", NextDate_Test(2000, 5, 31));
	EXPECT_EQ("2000/8/1", NextDate_Test(2000, 7, 31));
	EXPECT_EQ("2000/9/1", NextDate_Test(2000, 8, 31));
	EXPECT_EQ("2000/11/1", NextDate_Test(2000, 10, 31));
	//Condition 13 : <= 29d ? (if (day <= 29))
	//T, F
	EXPECT_EQ("2000/4/30", NextDate_Test(2000, 4, 29));
	EXPECT_EQ("2000/6/30", NextDate_Test(2000, 6, 29));
	EXPECT_EQ("2000/9/30", NextDate_Test(2000, 9, 29));
	EXPECT_EQ("2000/11/30", NextDate_Test(2000, 11, 29));
	EXPECT_EQ("2000/5/1", NextDate_Test(2000, 4, 30));
	EXPECT_EQ("2000/7/1", NextDate_Test(2000, 6, 30));
	EXPECT_EQ("2000/10/1", NextDate_Test(2000, 9, 30));
	EXPECT_EQ("2000/12/1", NextDate_Test(2000, 11, 30));
	//Condition 14 : <= 27d ? (if (day <= 27))
	//T, F
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	
	//Condition 15 : <= 28d & leap ? (if (day == 28 && leap))
	//TT, FT, TF
	EXPECT_EQ("2000/2/28", NextDate_Test(2000, 2, 27));
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2000/3/1", NextDate_Test(2000, 2, 29));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
	//Condition 16 : 28d ? (if (day == 28))
	//T, F
	EXPECT_EQ("2000/2/29", NextDate_Test(2000, 2, 28));
	EXPECT_EQ("2001/3/1", NextDate_Test(2001, 2, 28));
	//Condition 17 : <= 30d ? (if (day <= 30))
	//T, F
	EXPECT_EQ("2000/12/31", NextDate_Test(2000, 12, 30));
	EXPECT_EQ("2001/1/1", NextDate_Test(2000, 12, 31));

	
}

TEST(Commission, C0){
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale <= 1000, End
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale = 1001~1800, End
	EXPECT_EQ("$1100", CommissionTest(35, 80, 89));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1800, End
	//because of boundary TotalSale cannot reach to >1800
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Invalid l, End
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Terminate, End
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid l&b, End
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid l&s, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid l&s&b, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 0));
}
TEST(Commission, C1){
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale <= 1000, End
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale = 1001~1800, End
	EXPECT_EQ("$1100", CommissionTest(35, 80, 89));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1800, End
	//because of boundary TotalSale cannot reach to >1800
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Invalid l, End
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Terminate, End
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid l&b, End
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid l&s, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid l&s&b, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 0));
}
TEST(Commission, C2){
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale <= 1000, End
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1000 ? Sale = 1001~1800, End
	EXPECT_EQ("$1100", CommissionTest(35, 80, 89));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Sale>1800 ? , Sale>1800, End
	//because of boundary TotalSale cannot reach to >1800
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid b ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , Invalid s ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Invalid l, End
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , Invalid l ? , lock == -1 ? , Terminate, End
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid l&b, End
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , Invalid l&b ? , lock == -1 ? , Invalid b, End
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid l&s, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid l&s ? , lock == -1 ? , Invalid s, End
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	//start, Invalid l&s&b ? , Invalid s&b ? , Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid l&s&b, End
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 0));
	//start, Invalid l&s&b ? , lock == -1, Invalid s&b, End
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 0));
}
TEST(Commission, MCDC){
	//Condition 1:Invalid lock&stock&barrel ? (if invalid(l) && invalid(s) && invalid(b))
	//TTT, FTT, TFT, TTF
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	//Condition 2 : lock == -1(if lock == -1)
	//T, F
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(-1, 0, 0));
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80, barrels not in 1...90", CommissionTest(71, 0, 0));
	//Condition 3 : Invalid s&b ? (if invalid(s) && invalid(b))
	//TT, FT, TF
	EXPECT_EQ("stocks not in 1...80, barrels not in 1...90", CommissionTest(1, 81, 0));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	//Condition 4 : Invalid l&s ? (if invalid(l) && invalid(s))
	//TT, FT, TF
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(70, 81, 1));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	//Condition 5 : lock == -1(if lock == -1)
	//T, F
	EXPECT_EQ("locks not in 1...70, stocks not in 1...80", CommissionTest(0, 0, 1));
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	//Condition 6 : Invalid l&b ? (if invalid(l) && invalid(b))
	//TT, FT, TF
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(70, 1, 0));
	//Condition 7 : lock == -1(if lock == -1)
	//T, F
	EXPECT_EQ("locks not in 1...70, barrels not in 1...90", CommissionTest(0, 1, 0));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	//Condition 8 : Invalid l ? (if invalid(l))
	//T, F
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	//Condition 9 : lock == -1(if lock == -1)
	//T, F
	EXPECT_EQ("Program terminates", CommissionTest(-1, 1, 90));
	EXPECT_EQ("locks not in 1...70", CommissionTest(71, 1, 1));
	//Condition 10 : Invalid s ? (if invalid(s))
	//T, F
	EXPECT_EQ("stocks not in 1...80", CommissionTest(-1, 81, 90));
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	//Condition 11 : Invalid b ? (if invalid(b))
	//T, F
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
	EXPECT_EQ("barrels not in 1...90", CommissionTest(-1, 79, 0));
	//Condition 12 : TotalSale > 1800 ? (if TotalSale > 1800)
	//T, F
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	//Condition 13 : TotalSale > 1000 ? (if TotalSale > 1000)
	//T, F
	EXPECT_EQ("$1420", CommissionTest(70, 80, 90));
	EXPECT_EQ("$325", CommissionTest(1, 1, 90));
}

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}

