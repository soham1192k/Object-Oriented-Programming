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
int main(){
    Employee employee1 = Employee("Soham","IITK",20);//parameterized constructor
    Employee employee2 = Employee("John","Amazon",35);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}