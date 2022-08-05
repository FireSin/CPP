#include "Account.hpp"
#include <iostream>
#include <iomanip>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;
	static std::time_t time_now = std::time(nullptr);

	int	Account::getNbAccounts( void ) {return (_nbAccounts);}
	
	int	Account::getTotalAmount( void ) {return (_totalAmount);}
	
	int	Account::getNbDeposits( void ) {return (_totalNbDeposits);}
	
	int	Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}
	
	void	Account::displayAccountsInfos( void ) {
		Account::_displayTimestamp();
		std::cout << "accounts:" << Account::_nbAccounts << ";";
		std::cout << "total:" << Account::_totalAmount << ";";
		std::cout << "deposits:" << Account::_totalNbDeposits << ";";
		std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	}

	Account::Account( int initial_deposit ){
		this->_amount = initial_deposit;
		this->_accountIndex = Account::_nbAccounts;
		this->_nbDeposits = 0;
		this->_nbWithdrawals = 0;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "created" << std::endl;
		Account::_nbAccounts ++;
		Account::_totalAmount += initial_deposit;
	}

	void	Account::displayStatus() const{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposits:" << this->_nbDeposits << ";";
		std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	}

	void	Account::makeDeposit( int deposit ){
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbDeposits++;
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
		Account::_totalNbDeposits++;
	}
	bool	Account::makeWithdrawal( int withdrawal ){
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		this->_amount -= withdrawal;
		if (this->checkAmount()){
			this->_amount += withdrawal;
			return (false);
		}
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	int		Account::checkAmount( void ) const{
		if (this->_amount < 0){
			std::cout << "withdrawal:refused" << std::endl;
			return (1);
		}
		return (0);
	}

	void	Account::_displayTimestamp(){
		std::cout << std::put_time(std::localtime(&time_now), "[%Y%m%d_%OH%OM%OS]") << " ";
	}

	Account::~Account( void ){
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "closed" << std::endl;
	}