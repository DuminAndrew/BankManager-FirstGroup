//
//  server_app.h
//  BankManager
//
//  Created by ANDREW on 09.03.2024.
//  Copyright © 2024 ANDREW. All rights reserved.
//

#ifndef SERVERAPP_H
#define SERVERAPP_H

#include <iostream>
#include "database.h"

class ServerApp {
private:
    Database& db;
    // Другие приватные члены

public:
    ServerApp(Database& database);
    // Методы для принятия запросов от клиентской части, их обработки и отправки ответов
    void start();
    void processRequest();
};

#endif // SERVERAPP_H
