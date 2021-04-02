/*
 * Description
 * FundsChecker checks whether there is enough balance to withdraw an amount of cash
*/

#ifndef _FUNDS_CHECKER_
#define _FUNDS_CHECKER_


class FundsChecker {
	
public:
	// Check if the amountOfCash requested is less than the account balance
	bool checkFunds(int amountOfCash);
	
};

#endif