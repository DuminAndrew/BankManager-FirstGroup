#ifndef CLIENT_DATABASE_H
#define CLIENT_DATABASE_H

#include <string>
#include <unordered_map>

class ClientDatabase {
public:
    void createUser(const std::string& username, const std::string& password);
    bool authenticateUser(const std::string& username, const std::string& password);
private:
    std::unordered_map<std::string, std::string> users; // username -> hashed_password
};

#endif // CLIENT_DATABASE_H
