#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H
class Client;
class Employee;
class Admin;


class DataSourceInterface
{
public:
    virtual void addClient(Client obj) = 0;
    virtual void addEmployee(Employee obj)= 0;
    virtual void addAdmin(Admin obj)= 0;

    virtual void getAllClients() = 0;
    virtual void getAllEmployee()= 0;
    virtual void getAllAdmins()= 0;


    virtual void removeAllClients() = 0;
    virtual void removeEmployee()= 0;
    virtual void removeAllAdmins()= 0;


     virtual ~DataSourceInterface() {}

};

#endif // DATASOURCEINTERFACE_H
