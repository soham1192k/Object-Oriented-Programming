#include<bits/stdc++.h>
using namespace std;
class Employee{
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
};
int main(){
    Employee employee1 = Employee("Soham","IITK",20);//parameterized constructor
    //make sure that these fields are accessible
    Employee employee2 = Employee("John","Amazon",35);
    // employee1.name="Soham";
    // employee1.company="IITK";
    // employee1.age=20;
    employee1.IntroduceYourself();
    employee1.setAge(15);
    employee1.IntroduceYourself();
}