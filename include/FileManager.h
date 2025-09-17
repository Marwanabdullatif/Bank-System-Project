#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "FileManager.h"
#include<DataSourceInterface.h>
#include<Admin.h>
#include<Parser.h>
#include<Person.h>
#include<Client.h>
#include<Employee.h>
#include<Validation.h>
#include<FileHelper.h>
#include<iostream>
#include<string>


class FileManager::public DataSourceInterface
{
   private:
       static void addclient(Client c);
       static void addEmployee(Employee e);
       static void add Admin(Admin a);
       static void getAllClients();
       static void getAllEmployee();
       static void getAllAdmins();
       static void removeAllClients();
       static void removeAllAdmins();
       static void removeEmployee();



};

#endif // FILEMANAGER_H
