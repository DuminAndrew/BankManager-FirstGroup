//
//  database.cpp
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#include "database.h"

void Database::addUser(const User& user) {
    users.push_back(user);
}

bool Database::userExists(const std::string& username, const std::string& password) const {
    for (const auto& user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            return true;
        }
    }
    return false;
}
