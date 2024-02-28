#include "Account.hpp"

static int	getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	getTotalAmount(void)
{
	return (_totalAmount);
}

static int	getNbDeposits(void)
{
	return (_nbDeposits);
}

static int	getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

static void	displayAccountsInfos(void);

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;

static void	_displayTimestamp( void );