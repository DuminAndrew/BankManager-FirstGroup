//
//  account.h
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    int accountId;
    int userId;
    double balance;
    // Другие данные аккаунта

public:
    Account(int accountId, int userId, double balance);
    // Методы для установки и получения баланса, а также для выполнения транзакций
    void setBalance(double balance);
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // ACCOUNT_H
