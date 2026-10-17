#ifndef DATABASE_H
#define DATABASE_H

#include "sqlite3.h"
#include <string>
#include <vector>
#include <iostream>

class Database {
private:
    sqlite3* db;
    std::string dbName;
    
    // Database initialization
    bool initializeTables();
    bool createAccountsTable();
    bool createEmployeesTable();
    bool createCriminalsTable();
    bool createTransactionsTable();
    
public:
    Database(const std::string& databaseName = "banking_system.db");
    ~Database();
    
    // Connection management
    bool connect();
    void disconnect();
    bool isConnected() const;
    
    // Account operations
    bool addAccount(long long cnic, const std::string& name, int pin, double balance = 0.0);
    bool updateAccountBalance(long long cnic, double newBalance);
    bool getAccount(long long cnic, std::string& name, int& pin, double& balance);
    bool deleteAccount(long long cnic);
    std::vector<std::pair<long long, std::string>> getAllAccounts();
    
    // Employee operations
    bool addEmployee(long long cnic, const std::string& name, const std::string& qualification, 
                    const std::string& institute, const std::string& speciality, int grade = 17);
    bool updateEmployee(long long cnic, const std::string& name, const std::string& qualification, 
                       const std::string& institute, const std::string& speciality, int grade);
    bool getEmployee(long long cnic, std::string& name, std::string& qualification, 
                    std::string& institute, std::string& speciality, int& grade);
    bool deleteEmployee(long long cnic);
    std::vector<std::pair<long long, std::string>> getAllEmployees();
    
    // Criminal operations
    bool addCriminal(long long cnic, const std::string& name, const std::string& crime, 
                    const std::string& status = "Captured");
    bool updateCriminalStatus(long long cnic, const std::string& status);
    bool getCriminal(long long cnic, std::string& name, std::string& crime, std::string& status);
    bool isCriminal(long long cnic);
    bool deleteCriminal(long long cnic);
    std::vector<std::pair<long long, std::string>> getAllCriminals();
    
    // Transaction operations
    bool addTransaction(long long cnic, const std::string& transactionType, 
                       double amount, double balanceBefore, double balanceAfter);
    std::vector<std::vector<std::string>> getTransactionHistory(long long cnic);
    
    // Utility methods
    static void printError(const std::string& operation, const std::string& error);
    static void printSuccess(const std::string& operation);
};

#endif // DATABASE_H 