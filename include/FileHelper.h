#ifndef FILESHELPER_H
#define FILESHELPER_H
#include <vector>
#include <string>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
#include <Parser.h>
using namespace std;
class FilesHelper
{
public:
    static void savelast(string fileName,int Id);
    static int getlast(string fileName);
    static void saveClient(Client c);
    static void saveEmployee( string fileName,string lastIdfile,Employee e);
    static void saveAdmin( string fileName,string lastIdfile,Admin a);
    static vector<Client> getClients();
    static vector<Employee> getEmployee();
    static vector<Admin> getAdmin();
    static void clearFile(string fileName,string filelastIdfile);
};

#endif // FILESHELPER_H

