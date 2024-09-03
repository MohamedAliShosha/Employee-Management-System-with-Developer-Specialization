#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int _ID;
        string _firstName;
        string _lastName;
        string _title;
        string _Email;
        string _phone;
        int _salary;
        string _department;

public:
    // Constructor used to give initial values to the attributes
    Employee(int ID,  string firstName,  string lastName , string title , string Email,  string phone , int salary , string department)
    {
        _ID = ID;
        _firstName = firstName;
        _lastName = lastName;
        _title = title;
        _Email = Email;
        _phone = phone;
        _salary = salary;
        _department = department;
    }
    
    
    Employee()
    {
        
    }

    // Getter methods (optional)
    
    int getID() // Read only property
    { 
        return _ID; 
        
    }
    
    
    string getFirstName()  
    { 
        return _firstName; 
        
    }
    
    
    string getLastName() 
    { 
        return _lastName; 
        
    }
    
    
    string getFullName() 
    { 
        return _firstName + " " + _lastName; 
        
    }
    
    
    string getTitle()
    {
        return _title;
    }
    
    
    string getEmail() 
    { 
        return _Email; 
        
    }
    
    
    string getPhone() 
    { 
        return _phone; 
        
    }
    
    
    int getSalary()
    {
        return _salary;
    }
    
    
    string getDepartment()
    {
        return _department;
    }
    
    // Setter methods (optional)
 
    void setFirstName (string firstName) 
    {
        _firstName = firstName; 
        
    }
    
    
    void setLastName (string lastName) 
    { 
        _lastName = lastName; 
        
    }
    
    
    void setTitle (string title) 
    { 
        _title = title; 
        
    }
    
    
    void setSalary (int salary) 
    { 
        _salary = salary; 
        
    }
    
    
    void setDepartment (string department) 
    { 
        _department = department; 
        
    }
    
    
    void setEmail (string Email) 
    { 
        _Email = Email; 
    }
    
    
    void setPhone (string phone) 
    { 
        _phone = phone; 
        
    }
    
    
    void printInfo()
    {
        cout << "Employee Info:\n";
        cout << "___________________________\n";
        cout << "ID\t\t: " << _ID <<endl;
        cout << "FirstName\t: " << _firstName <<endl;
        cout << "LastName\t: " << _lastName <<endl;
        cout << "FullName\t: " << getFullName() <<endl;
        cout << "Title\t\t: " << _title <<endl;
        cout << "Email\t\t: " << _Email <<endl;
        cout << "Phone\t\t: " << _phone <<endl;
        cout << "Salary\t\t: " << _salary <<endl;
        cout << "Department\t: " << _department <<endl;
        cout << "___________________________\n";
    }
    
    
    void SendEmail(string subject , string body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email <<endl;
        cout << "subject: " << subject <<endl;
        cout << "Body: " << body <<endl;
    }
    
    void SendSMS(string textMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _phone <<endl;
        cout << textMessage <<endl;
    }
};



class Developer : public Employee
{
    private:
        string _mainProgrammingLanguage;
        
    public:
        Developer(int ID , string FirstName , string LastName , string Title , string Email , string Phone , int Salary , string Department , string MainProgrammingLanguage)
        : Employee(ID , FirstName , LastName , Title , Email , Phone , Salary , Department)
        
        {
            _mainProgrammingLanguage  = MainProgrammingLanguage;
        }
        
        
        void setMainProgrammingLanguage(string MainProgrammingLanguage)
        {
            _mainProgrammingLanguage = MainProgrammingLanguage;
        }
        
        
        string mainProgrammingLanguage()
        {
            return _mainProgrammingLanguage;
        }
        
        
        void printInfo()
    {
        cout << "Developer Information  :\n";
        cout << "___________________________\n";
        cout << "ID                     : " << getID() <<endl;
        cout << "FirstName              : " << getFirstName() <<endl;
        cout << "LastName               : " << getLastName() <<endl;
        cout << "FullName               : " << getFullName() <<endl;
        cout << "Title                  : " << getTitle() <<endl;
        cout << "Email                  : " << getEmail() <<endl;
        cout << "Phone                  : " << getPhone() <<endl;
        cout << "Salary                 : " << getSalary() <<endl;
        cout << "Department             : " << getDepartment() <<endl;
        cout << "MainProgrammingLanguage: " << mainProgrammingLanguage() <<endl;
        cout << "___________________________\n";
    }
};

    int main()
    {
       
        Developer developer1(1001 , "Mohamed" , "Ali" , "Developer" , "Mo@gmail.com" , "01525680744" , 5000 , "CS" , "C++" );
        
        developer1.printInfo();
        
    }
