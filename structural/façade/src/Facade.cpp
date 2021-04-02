/*
 * Description
 * Implementation of Façade
*/

#include <Facade.hpp>
#include <PinChecker.hpp>
#include <FundsChecker.hpp>
#include <AccountUpdater.hpp>
#include <iostream>

// Provide an interface to withdraw cash. Needed step:
// 1. Check pin
// 2. Check funds
// 3. Update account
bool Facade::withdrawCash(int pin, int amountOfCash){
	
	bool pinResult = false;
	bool fundsResult = false;
	int newBalance;
	
	PinChecker pinChecker;
	FundsChecker fundsChecker;
	AccountUpdater accountUpdater;
	
	// Check pin
	pinResult = pinChecker.checkPin(pin);
	if (pinResult == false){
		std::cout << "Operation failed: wrong pin" << std::endl;
		return false;
	}
	
	// Check funds
	fundsResult = fundsChecker.checkFunds(amountOfCash);
	if (fundsResult == false){
		std::cout << "Operation failed: not enough balance" << std::endl;
		return false;
	}
	
	// Update account
	newBalance = accountUpdater.updateAccount(amountOfCash);
	std::cout << "\nOperation successfully executed.\nUpdated Balance: " << newBalance << std::endl;
	
	// Operation successful
	return true;
}