#ifndef DATABASE_H
#define DATABASE_H

#include "MySQL/mysql_connection.h"


struct ConnectionData
{
	//Members
	const char* m_server;
	const char* m_user;
	const char* m_password;
	const char* m_database;

	//Constructors/Destructor
	ConnectionData(void);
	ConnectionData(	const char* server,
					const char* user,
					const char* password,
					const char* database):
					m_server(server),
					m_user(user),
					m_password(password),
					m_database(database){}
};

class Database
{
public:
	Database(void);
	~Database(void);
	///Connects to database
	void Connect();

	
};

#endif	//DATABASE_H
