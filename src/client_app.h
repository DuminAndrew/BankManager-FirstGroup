//
//  client_app.h
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#ifndef CLIENTAPP_H
#define CLIENTAPP_H

#include <iostream>
#include "user.h"
#include "database.h"

class ClientApp {
private:
    Database& db;
    // Другие приватные члены

public:
    ClientApp(Database& database);
    // Методы для обработки ввода пользователя и вызова методов из других классов
    void start();
    void showMainMenu();
    void registerUser();
    void loginUser();
    void viewAccount();
};

#endif // CLIENTAPP_H

