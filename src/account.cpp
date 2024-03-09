//
//  account.cpp
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#include "account.h"

Account::Account(int accountId, int userId, double balance)
    : accountId(accountId), userId(userId), balance(balance) {}

void Account::setBalance(double balance) {
    this->balance = balance;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    balance -= amount;
}
