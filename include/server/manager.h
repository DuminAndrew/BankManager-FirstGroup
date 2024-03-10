#ifndef MANAGER_H
#define MANAGER_H

#include <string>

class Manager {
public:
    void handleRequestFromClient(const std::string& request);
    void modifyBalance(const std::string& username, double amount);
    void blockAccount(const std::string& username);
private:
    // Implementation details hidden
};

#endif // MANAGER_H
