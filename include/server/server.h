#ifndef SERVER_H
#define SERVER_H

#include "client_database.h"
#include "server_database.h"
#include <iostream>

class Server {
public:
    Server();
    void handleRequest();
private:
    ClientDatabase clientDB;
    ServerDatabase serverDB;
};

#endif // SERVER_H
