#include "Database.h"
#include <iostream>
#include <sstream>

Database::Database(const std::string& databaseName) : db(nullptr), dbName(databaseName) {}

Database::~Database() {
    disconnect();
}

bool Database::connect() {
    int rc = sqlite3_open(dbName.c_str(), &db);
    if (rc != SQLITE_OK) {
        printError("Database connection", sqlite3_errmsg(db));
        return false;
    }
    
    if (!initializeTables()) {
        printError("Table initialization", "Failed to create tables");
        return false;
    }
    
    printSuccess("Database connected successfully");
    return true;
}

void Database::disconnect() {
    if (db) {
        sqlite3_close(db);
        db = nullptr;
    }
}

bool Database::isConnected() const {
    return db != nullptr;
}

bool Database::initializeTables() {
    return createAccountsTable() && createEmployeesTable() && 
           createCriminalsTable() && createTransactionsTable();
}

bool Database::createAccountsTable() {
    const char* sql = "CREATE TABLE IF NOT EXISTS accounts (cnic INTEGER PRIMARY KEY, name TEXT NOT NULL, pin INTEGER NOT NULL, balance REAL DEFAULT 0.0, created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);";
    
    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printError("Create accounts table", errMsg);
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

bool Database::createEmployeesTable() {
    const char* sql = "CREATE TABLE IF NOT EXISTS employees (cnic INTEGER PRIMARY KEY, name TEXT NOT NULL, qualification TEXT, institute TEXT, speciality TEXT, grade INTEGER DEFAULT 17, created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);";
    
    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printError("Create employees table", errMsg);
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

bool Database::createCriminalsTable() {
    const char* sql = "CREATE TABLE IF NOT EXISTS criminals (cnic INTEGER PRIMARY KEY, name TEXT NOT NULL, crime TEXT NOT NULL, status TEXT DEFAULT 'Captured', created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP);";
    
    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printError("Create criminals table", errMsg);
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

bool Database::createTransactionsTable() {
    const char* sql = "CREATE TABLE IF NOT EXISTS transactions (id INTEGER PRIMARY KEY AUTOINCREMENT, cnic INTEGER NOT NULL, transaction_type TEXT NOT NULL, amount REAL NOT NULL, balance_before REAL NOT NULL, balance_after REAL NOT NULL, timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP);";
    
    char* errMsg = 0;
    int rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printError("Create transactions table", errMsg);
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

bool Database::addAccount(long long cnic, const std::string& name, int pin, double balance) {
    const char* sql = "INSERT OR REPLACE INTO accounts (cnic, name, pin, balance) VALUES (?, ?, ?, ?)";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare add account", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 3, pin);
    sqlite3_bind_double(stmt, 4, balance);
    
    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    if (rc != SQLITE_DONE) {
        printError("Add account", sqlite3_errmsg(db));
        return false;
    }
    
    printSuccess("Account added successfully");
    return true;
}

bool Database::updateAccountBalance(long long cnic, double newBalance) {
    const char* sql = "UPDATE accounts SET balance = ? WHERE cnic = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare update balance", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_double(stmt, 1, newBalance);
    sqlite3_bind_int64(stmt, 2, cnic);
    
    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    if (rc != SQLITE_DONE) {
        printError("Update balance", sqlite3_errmsg(db));
        return false;
    }
    
    return true;
}

bool Database::getAccount(long long cnic, std::string& name, int& pin, double& balance) {
    const char* sql = "SELECT name, pin, balance FROM accounts WHERE cnic = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare get account", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW) {
        name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        pin = sqlite3_column_int(stmt, 1);
        balance = sqlite3_column_double(stmt, 2);
        sqlite3_finalize(stmt);
        return true;
    }
    
    sqlite3_finalize(stmt);
    return false;
}

bool Database::addEmployee(long long cnic, const std::string& name, const std::string& qualification, 
                          const std::string& institute, const std::string& speciality, int grade) {
    const char* sql = "INSERT OR REPLACE INTO employees (cnic, name, qualification, institute, speciality, grade) VALUES (?, ?, ?, ?, ?, ?)";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare add employee", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, qualification.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 4, institute.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 5, speciality.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 6, grade);
    
    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    if (rc != SQLITE_DONE) {
        printError("Add employee", sqlite3_errmsg(db));
        return false;
    }
    
    printSuccess("Employee added successfully");
    return true;
}

bool Database::getEmployee(long long cnic, std::string& name, std::string& qualification, 
                          std::string& institute, std::string& speciality, int& grade) {
    const char* sql = "SELECT name, qualification, institute, speciality, grade FROM employees WHERE cnic = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare get employee", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW) {
        name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        qualification = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        institute = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        speciality = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        grade = sqlite3_column_int(stmt, 4);
        sqlite3_finalize(stmt);
        return true;
    }
    
    sqlite3_finalize(stmt);
    return false;
}

bool Database::addCriminal(long long cnic, const std::string& name, const std::string& crime, const std::string& status) {
    const char* sql = "INSERT OR REPLACE INTO criminals (cnic, name, crime, status) VALUES (?, ?, ?, ?)";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare add criminal", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, crime.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 4, status.c_str(), -1, SQLITE_STATIC);
    
    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    if (rc != SQLITE_DONE) {
        printError("Add criminal", sqlite3_errmsg(db));
        return false;
    }
    
    return true;
}

bool Database::isCriminal(long long cnic) {
    const char* sql = "SELECT COUNT(*) FROM criminals WHERE cnic = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    
    rc = sqlite3_step(stmt);
    bool result = false;
    if (rc == SQLITE_ROW) {
        result = sqlite3_column_int(stmt, 0) > 0;
    }
    
    sqlite3_finalize(stmt);
    return result;
}

bool Database::getCriminal(long long cnic, std::string& name, std::string& crime, std::string& status) {
    const char* sql = "SELECT name, crime, status FROM criminals WHERE cnic = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW) {
        name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        crime = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        status = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        sqlite3_finalize(stmt);
        return true;
    }
    
    sqlite3_finalize(stmt);
    return false;
}

bool Database::addTransaction(long long cnic, const std::string& transactionType, 
                             double amount, double balanceBefore, double balanceAfter) {
    const char* sql = "INSERT INTO transactions (cnic, transaction_type, amount, balance_before, balance_after) VALUES (?, ?, ?, ?, ?)";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        printError("Prepare add transaction", sqlite3_errmsg(db));
        return false;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    sqlite3_bind_text(stmt, 2, transactionType.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 3, amount);
    sqlite3_bind_double(stmt, 4, balanceBefore);
    sqlite3_bind_double(stmt, 5, balanceAfter);
    
    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    if (rc != SQLITE_DONE) {
        printError("Add transaction", sqlite3_errmsg(db));
        return false;
    }
    
    return true;
}

std::vector<std::pair<long long, std::string>> Database::getAllAccounts() {
    std::vector<std::pair<long long, std::string>> accounts;
    const char* sql = "SELECT cnic, name FROM accounts";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return accounts;
    }
    
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        long long cnic = sqlite3_column_int64(stmt, 0);
        std::string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        accounts.push_back({cnic, name});
    }
    
    sqlite3_finalize(stmt);
    return accounts;
}

std::vector<std::pair<long long, std::string>> Database::getAllEmployees() {
    std::vector<std::pair<long long, std::string>> employees;
    const char* sql = "SELECT cnic, name FROM employees";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return employees;
    }
    
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        long long cnic = sqlite3_column_int64(stmt, 0);
        std::string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        employees.push_back({cnic, name});
    }
    
    sqlite3_finalize(stmt);
    return employees;
}

std::vector<std::pair<long long, std::string>> Database::getAllCriminals() {
    std::vector<std::pair<long long, std::string>> criminals;
    const char* sql = "SELECT cnic, name FROM criminals";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return criminals;
    }
    
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        long long cnic = sqlite3_column_int64(stmt, 0);
        std::string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        criminals.push_back({cnic, name});
    }
    
    sqlite3_finalize(stmt);
    return criminals;
}

std::vector<std::vector<std::string>> Database::getTransactionHistory(long long cnic) {
    std::vector<std::vector<std::string>> transactions;
    const char* sql = "SELECT transaction_type, amount, balance_before, balance_after, timestamp FROM transactions WHERE cnic = ? ORDER BY timestamp DESC";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        return transactions;
    }
    
    sqlite3_bind_int64(stmt, 1, cnic);
    
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        std::vector<std::string> transaction;
        transaction.push_back(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0))); // type
        transaction.push_back(std::to_string(sqlite3_column_double(stmt, 1))); // amount
        transaction.push_back(std::to_string(sqlite3_column_double(stmt, 2))); // balance_before
        transaction.push_back(std::to_string(sqlite3_column_double(stmt, 3))); // balance_after
        transaction.push_back(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4))); // timestamp
        transactions.push_back(transaction);
    }
    
    sqlite3_finalize(stmt);
    return transactions;
}

void Database::printError(const std::string& operation, const std::string& error) {
    std::cout << "ERROR in " << operation << ": " << error << std::endl;
}

void Database::printSuccess(const std::string& operation) {
    std::cout << "SUCCESS: " << operation << std::endl;
} 