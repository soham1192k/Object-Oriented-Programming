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
};
int main(){
    Developer d1 = Developer("Jack","Uber",55,"C++");
    d1.FixBug();
    d1.AskForPromotion();
    Teacher t1 = Teacher("Joana","HAHA",31,"Physics");
    t1.PrepareLesson();
    t1.AskForPromotion();
    t1.setAge(29);
    t1.PrepareLesson();
    t1.AskForPromotion();
}