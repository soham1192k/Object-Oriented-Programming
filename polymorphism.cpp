#include<bits/stdc++.h>
using namespace std;
class AbstractEmployee{
    //pure virtual function:
    virtual void AskForPromotion()=0;
    //whoever inherits from this class will have to provide implementation
    //details for this function.
};
class Employee:AbstractEmployee{
    //members of this class-->attributes and behaviour
private:
    //these three properties are encapsulated
    string name;
    string company;
    int age;
public:
    //setter
    void setName(string n){
        name=n;
    }
    //getter
    string getName(){
        return name;
    }
    void setCompany(string c){
        company=c;
    }
    string getCompany(){
        return company;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        if(a>=18)  
        age=a;
    }
    Employee(string n,string c,int a){
        name=n;
        company=c;
        age=a;
    }
    void IntroduceYourself(){
        cout<<"Name - "<<name<<'\n';
        cout<<"Company - "<<company<<'\n';
        cout<<"Age - "<<age<<'\n';
    }
    void AskForPromotion(){
        if(age>30)
        cout<<name<<" got promoted!\n";
        else 
        cout<<"Sorry!, No promotion!\n";
    }
    virtual void work(){
        cout<<name<<" is checking email,task backlog,performing tasks..\n";
    }
};
class Developer:public Employee{//developer is a subclass of employee
public:
    string favLanguage;
    Developer(string n,string c,int a,string l):Employee(n,c,a){
        favLanguage=l;
    }
    void FixBug(){
        cout<<getName()<<" fixed bug using "<<favLanguage<<'\n';
    }
    void work(){
        cout<<getName()<<" is writing "<<favLanguage<<" code\n";
    }
};
class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout<<getName()<<" is preparing "<<Subject<<" lesson\n";
    }
    Teacher(string n,string c,int a,string s):Employee(n,c,a){
        Subject=s;
    }
    void work(){
        cout<<getName()<<" is teaching "<<Subject<<'\n';
    }
};
int main(){
    Developer d1 = Developer("Jack","Uber",55,"C++");
    Teacher t1 = Teacher("Joana","HAHA",31,"Physics");
    // d1.work();
    // t1.work();
    Employee *e1 = &d1;
    //pointer of base class can hold reference to derived class object
    Employee *e2 = &t1;
    e1->work();
    e2->work();
    return 0; 
}