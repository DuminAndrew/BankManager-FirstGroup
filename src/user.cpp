//
//  user.cpp
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#include "user.h"

User::User(const std::string& username, const std::string& password)
    : username(username), password(password) {}

void User::setUsername(const std::string& username) {
    this->username = username;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}
