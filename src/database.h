//
//  database.h
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "user.h"
#include "account.h"

class Database {
private:
    std::vector<User> users;
    std::vector<Account> accounts;
    // Другие методы для работы с базой данных

public:
    void addUser(const User& user);
    bool userExists(const std::string& username, const std::string& password) const;
    // Другие методы для работы с базой данных
};

#endif // DATABASE_H
