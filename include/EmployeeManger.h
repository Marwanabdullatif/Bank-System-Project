#ifndef EMPLOYEEMANGER_H
#define EMPLOYEEMANGER_H
#include<Employee.h>
#include<Client.h>
#include<FileHelper.h>
#include<parser.h>
#include<iostream>
#include<vector>
using namespace std;
class EmployeeManger
{
public:
    static void printEmployeeMenu();
    static void newClient(Employee*employee);
    static void listAllClient(Employee*employee);
    static void searchforClient(Employee*employee);
    static void editClientInfo(Employee*employee);
    static Employee*login(int Id,string password);
    static bool employeeOptions(Employee*employee);

};

#endif
