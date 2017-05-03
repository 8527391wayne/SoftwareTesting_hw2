#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <string> 
#include <sstream>

using namespace std;

//Equivalence class * 5
//char Output[5][30] = { "Impossible(Invalid Input)", "Not Triangle", "Scalene", "Isosceles", "Equilateral" };
const int output_type = 5;
const int MaxEdge = 200;
bool InputValid(int edge){
	if (edge >= 1 && edge <= MaxEdge){
		return true;
	}
	return false;
};
bool IsTriangle(int a,int b,int c){	//for decide table c1,c2,c3
	if (c < a + b && b < a + c && a < b + c)
		return true;
	return false;
};
string Triangle_Test(int a, int b, int c){
	bool avalid = InputValid(a);
	bool bvalid = InputValid(b);
	bool cvalid = InputValid(c);
	if (avalid && bvalid && cvalid){
		if (IsTriangle(a, b, c)){
			if (a == c && b == c && a == b)	//c4&&c5&&c6
				return "Equilateral";
			else if (a == c || b == c || a == b)	//according to Decision table c345要嘛三成立 要嘛有其中一個成立則等邊 全不成立則不等邊
				return "Isosceles";
			else
				return "Scalene";
		}
		else //c1,c2,c3 Not Triangle.
			return "Not Triangle";
	}
	else if (avalid && bvalid)
		return "Value of c is not in the range of permitted values";
	else if (avalid && cvalid)
		return "Value of b is not in the range of permitted values";
	else if (bvalid && cvalid)
		return "Value of a is not in the range of permitted values";
	else if (avalid)
		return "Value of b,c is not in the range of permitted values";
	else if (bvalid)
		return "Value of a,c is not in the range of permitted values";
	else if (cvalid)
		return "Value of a,b is not in the range of permitted values";
	else{			//InValid Input
		return "Value of a,b,c is not in the range of permitted values";
	}
}
