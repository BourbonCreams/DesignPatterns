/*
 * Description
 * Implementation of AccountUpdater
*/

#include <AccountUpdater.hpp>

int AccountUpdater::updateAccount(int amountOfWithdrawal){
	
	int mySimplifiedBalance = 1000;
	
	mySimplifiedBalance = mySimplifiedBalance - amountOfWithdrawal;
	
	return mySimplifiedBalance;
	
}