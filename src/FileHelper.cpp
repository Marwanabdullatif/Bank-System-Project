#include"FileHelper.h"
#include<Parser.h>
#include<iostream>
#include<fstream>
using namespace std;

void FilesHelper:: savelast(string fileName,int Id){
    ofstream file(fileName);
    if(file.is_open()){
        file<< Id;
        file.close();
    }
    else{
        cout<< "could't open file"<<fileName<< endl;
    }
}
int FilesHelper::getlast(string fileName){
    ifstream file(fileName);
      int Id=0;
    if(file.is_open()){
        file>>Id;
        file.close();
    }
    return Id;
}
void FilesHelper::saveClient(Client c){
    ofstream file("Client.txt",ios::app);
    if(file.is_open()){
        file<<c.getId()<<","<<c.getName()<<","<<c.getPassword()<<","<<c.getBalance()<<","<<endl;
        file.close();
    }
    else{
        cout<< "could't open  the file"<< endl;
    }

}
void FilesHelper::saveEmployee( string fileName,string lastIdfile,Employee e){
    ofstream file(fileName,ios::app);
    if(file.is_open()){
        file<<e.getId()<<","<<e.getName()<<","<<e.getPassword()<<","<<e.getSalary()<<","<<endl;
        file.close();
    }
    else{
        cout<< "could't open  the file"<< endl;
    }
    savelast(lastIdfile,e.getId());
}
void FilesHelper::saveAdmin( string fileName,string lastIdfile,Admin a){
    ofstream file(fileName,ios::app);
     if(file.is_open()){
        file<<a.getId()<<","<<a.getName()<<","<<a.getPassword()<<","<<a.getSalary()<<","<<endl;
        file.close();
    }
    else{
        cout<< "could't open  the file"<< endl;
    }
    savelast(lastIdfile,a.getId());
}
vector<Client> FilesHelper:: getClients(){
  vector<Client>client;
  ifstream file("Client.txt");
  string line;
  while(getline(file,line)){
    if(line.size()>0){
        client.push_back(Parser::parseToClient(line));
    }
}
 return client;
}
vector<Employee> FilesHelper::getEmployee(){
  vector<Employee>employee;
  ifstream file("Employee.txt");
  string line;
  while(getline(file,line)){
    if(line.size()>0){
        employee.push_back(Parser::parseToEmployee(line));
    }
}
 return employee;
}
vector<Admin>  FilesHelper:: getAdmin(){
  vector<Admin>admin;
  ifstream file("Admin.txt");
  string line;
  while(getline(file,line)){
    if(line.size()>0){
        admin.push_back(Parser::parseToAdmin(line));
    }
}
 return admin;
}
void FilesHelper::clearFile(string fileName,string lastIdfile){
    ofstream file(fileName,ios::trunc);
    if(file.is_open()){
        file.close();
    }
        savelast(lastIdfile,0);
}
