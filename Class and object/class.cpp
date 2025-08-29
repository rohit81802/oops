#include<iostream>
#include<string.h>
using namespace std;

class teacher{
    public :
     string name;
     string dep;
     string sub;
     double salary;
     void changeDep(string newDep){
        dep=newDep;
     }

};
int main(){
    teacher t1;
    t1.name="Rohit Bhoj";
    t1.dep = "cse";
    t1.sub="Python";
    t1.salary=4000;
 cout<<t1.name<<endl;
 cout<<t1.salary<<endl;
 cout<<t1.sub<<endl;
 cout<<t1.dep<<endl;
    return 0;
}