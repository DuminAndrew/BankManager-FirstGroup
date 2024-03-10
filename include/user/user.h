#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    void withdraw(double amount);
    void deposit(double amount);
    void transfer(const std::string& recipient, double amount);
    void requestCredit(double amount);
    void saveMoney(double amount);
private:
    // Implementation details hidden
};

#endif // USER_H
