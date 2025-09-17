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
       static void addclient(Client c){
       FilesHelper::saveClient(c);}
       static void addEmployee(Employee e){
           FilesHelper::saveEmployee("Employee","Employeelastid",Employee);}
           static void add Admin(Admin a){
           FilesHelper::saveEmployee("Admin","Adminlastid",Admin);}
       static void getAllClients(){
       FilesHelper::getClients();}
        static void getAllEmployee(){
       FilesHelper::getEmployee();}
        static void getAllAdmins(){
       FilesHelper::getAdmin();}
       static void removeAllClients(){FilesHelper::clearFile("Client","clientlastid");
       }
       static void removeAllAdmins(){
       FilesHelper::clearFile("Admin","Adminlastid");}
       static void removeEmployee(){
       FilesHelper::clearFile("Employee","Employeelastid");}



};
