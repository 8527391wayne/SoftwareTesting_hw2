#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <string> 
#include <sstream>

using namespace std;

string double2str(double &dbl) {
	ostringstream strs;
	strs << dbl;
	string str = strs.str();
	return str;
}
string CommissionTest(int locks, int stocks, int barrels){
	bool lockvalid = false, stockvalid = false, barrelvalid = false;
	if (locks <= 70 && locks >= 1)
		lockvalid = true;
	if (stocks <= 80 && stocks >= 1)
		stockvalid = true;
	if (barrels <= 90 && barrels >= 1)
		barrelvalid = true;
	if (!lockvalid && !stockvalid && !barrelvalid){
		if (locks == -1)
			return "stocks not in 1...80, barrels not in 1...90";
		else
			return "locks not in 1...70, stocks not in 1...80, barrels not in 1...90";
	}
	else if (!stockvalid && !barrelvalid){
			return "stocks not in 1...80, barrels not in 1...90";
	}
	else if (!lockvalid && !stockvalid){
		if (locks == -1)
			return "stocks not in 1...80";
		else
			return "locks not in 1...70, stocks not in 1...80";
	}
	else if (!lockvalid && !barrelvalid){
		if (locks == -1)
			return "barrels not in 1...90";
		else
			return "locks not in 1...70, barrels not in 1...90";
	}
	else if (!lockvalid){
		if (locks == -1)
			return "Program terminates";
		else
			return "locks not in 1...70";
	}
	else if (!stockvalid)
		return "stocks not in 1...80";
	else if (!barrelvalid)
		return "barrels not in 1...90";

	//Valid Input

	double lockprice = 45;
	double stockprice = 30;
	double barrelprice = 25;
	double lockSales;
	double stockSales;
	double barrelSales;
	double Totalsales;
	double commission;
	lockSales = locks * lockprice;
	stockSales = stocks * stockprice;
	barrelSales = barrels * barrelprice;
	Totalsales = lockSales + stockSales + barrelSales;
	if (Totalsales > 1800){
		commission = 0.1 * 1000;
		commission = commission + 0.15 * 800;
		commission = commission + 0.2 * (Totalsales - 1800);
	}
	else if (Totalsales > 1000){
		commission = 0.1 * 1000;
		commission = commission + 0.15 * (Totalsales - 1000);
	}
	else
		commission = 0.1 * Totalsales;
	return "$" + double2str(commission);
}