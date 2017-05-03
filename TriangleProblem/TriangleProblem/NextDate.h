#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <string> 
#include <sstream>

using namespace std;

string int2str(int &i) {
	string s;
	stringstream ss(s);
	ss << i;

	return ss.str();
}
bool yvalid, mvalid, dvalid;
//"InValid Input","InValid Date"
bool IsBoundaryInput(int year, int month, int day){
	if (year <= 2017 && year >= 1000 && month <= 12 && month >= 1 && day <= 31 && day >= 1){
		return true;
	}
	return false;
}
bool IsValidDate(int year,int month,int day){
	//day's boundary depend on year and month
	//big month(31days) already test in IsBoundaryInput
	/*	西元年份除以4不可整除，為平年。
		西元年份除以4可整除，且除以100不可整除，為閏年。
		西元年份除以100可整除，且除以400不可整除，為平年
		西元年份除以400可整除，為閏年。
		4 100 400 T/F
		possible situation
		TTT TFF 閏年
		TTF FFF 平年
		*/
	switch (month){
	case 2:{
			   if ((year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 && year % 400 != 0)){
				   if (1 <= day && day <= 29)	//閏年
					   return true;
			   }
			   else{
				   if (1 <= day && day <= 28)
					   return true;
			   }
			   break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
		if (1 <= day && day <= 30)
			return true;
		break;
	default:
		return true;
		break;
	}
	return false;
}
string NextDate_Test(int year,int month,int day){

	string output = "";
	if (IsBoundaryInput(year, month, day)){
		if (IsValidDate(year, month, day)){//Four Month type
			switch (month)
			{
			case 12:			//M3
				if ((1 <= day && day <= 27) || day == 28 || day == 29 || day == 30){
					day++;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
					//return year * 10000 + month * 100 + day + 1;
				else{			//D5 day=31
					year++; month = 1; day = 1;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
					//return (year + 1) * 10000 + 1 * 100 + 1;
				}
				break;
			case 2:				//M4
				if ((1 <= day && day <= 27)){
					day++;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
				//return year * 10000 + month * 100 + day + 1;
				else if (day == 28 && ((year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 && year % 400 != 0))){
					day++;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}//return year * 10000 + month * 100 + day + 1;
				else if (day == 28){
					month++; day = 1;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
				//return year * 10000 + (month + 1) * 100 + 1;
				else		//Only possible of day =29 
				{
					month++; day = 1;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
					//return year * 10000 + (month + 1) * 100 + 1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:			//M1
				if ((1 <= day && day <= 27) || day == 28 || day == 29){
					day++;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
					//return year * 10000 + month * 100 + day + 1;
				}
				else{			//D4 day=30
					month++; day = 1;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
					//return year * 10000 + (month + 1) * 100 + 1;
				}
				break;
			default:		//M2
				if ((1 <= day && day <= 27) || day == 28 || day == 29 || day == 30){
					day++;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
				else{			//D5 day=31
					month++; day = 1;
					output = int2str(year) + "/" + int2str(month) + "/" + int2str(day);
					return output;
				}
				break;
			}
		}
		else 
			return "Invalid Input Date";
	}
	else{	//Invalid Input
		yvalid = false; mvalid = false; dvalid = false;
		if (year <= 2017 && year >= 1000)
			yvalid = true;
		if (month <= 12 && month >= 1)
			mvalid = true;
		if (day <= 31 && day >= 1)
			dvalid = true;

		if (yvalid && mvalid)
			return "day not in 1 ... 31";
		else if (yvalid && dvalid)
			return "month not in 1 ... 12";
		else if (mvalid && dvalid)
			return "year not in 1000 ... 2017";
		else if (yvalid)
			return "month not in 1 ... 12,day not in 1 ... 31";
		else if (mvalid)
			return "year not in 1000 ... 2017,day not in 1 ... 31";
		else if (dvalid)
			return "year not in 1000 ... 2017,month not in 1 ... 12";
		else 
			return "year not in 1000 ... 2017,month not in 1 ... 12,day not in 1 ... 31";
	}
}