#include "database.h"

database::database() {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("development");
    db.setUserName("devuser");
    db.setPassword("password");
    db.setPort(5432);
}

bool database::open(){
    if (!db.open()) {
        qDebug() << "Error: connection with database fail";
        qDebug() << db.lastError();
        return false;
    } else {
        qDebug() << "Database: connection ok";
        return true;
    }
}

void database::close() {
    db.close();
}
