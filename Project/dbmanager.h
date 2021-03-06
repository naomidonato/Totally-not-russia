/** @file dbmanager.h
*	@brief Handles i/o for iCyberSecurity database
*/

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QString>
#include <string>
#include <QObject>
#include <QFile>
#include <fstream>
#include "customer.h"

using namespace std;
const string CUSTOMER_FILE = "customers.txt";

/**
* @brief Manipulates the data stored within the icybersecurity database file.
*/
class dbManager
{
private:
    dbManager();
    ~dbManager();

    QSqlDatabase iCybSecdb;

public:
    static dbManager& instance();
    dbManager(const dbManager&) = delete;
    void operator=(const dbManager&) = delete;

    // Connection Test
    bool isOpen() const;

    // Login Test
    bool validateAdmin(QString user, QString pass);
    bool validateCustomer(QString user, QString pass);

    // Customers
    bool addCustomer(const Customer& newCustomer);

    // Populate database from file
    bool populateCustomers();
};

#endif // DBMANAGER_H
