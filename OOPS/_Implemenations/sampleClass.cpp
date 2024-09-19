#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
    string details = "The all information is hidden";
    // properties
    private:
    int ID=01;
    string name = "Surajit";
    int roll =001;

    // methods
    public:
    void introduce(){
        cout<<"Hello I am a student "<<endl;
    }
    // create a getter and setter function for access and modify the private properties with password
    void getProperty()
    {
        cout<<"Id is "<<ID<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Roll is "<<roll<<endl;

    }

    void setPropery(int Id,string Name,int Roll, string password){
        if(password=="1234"){
            ID=Id;
            name=Name;
            roll=Roll;
            getProperty();
        }
        else{
            cout<<"The password is incorrect"<<endl;
        }
    }



};