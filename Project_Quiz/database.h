#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QDebug>


class database
{
private:
    QSqlDatabase db;
public:
    database();
    bool open();
    bool add_item(QString question);
    void close();
};

#endif // DATABASE_H
