#ifndef SERVER_DATABASE_H
#define SERVER_DATABASE_H

#include <string>

class ServerDatabase {
public:
    void logTransaction(const std::string& transaction);
private:
    // Implementation details hidden
};

#endif // SERVER_DATABASE_H
