//
//  user.h
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string password;
    // Другие данные пользователя

public:
    User(const std::string& username, const std::string& password);
    // Методы для установки и получения данных пользователя
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);
    std::string getUsername() const;
    std::string getPassword() const;
};

#endif // USER_H
