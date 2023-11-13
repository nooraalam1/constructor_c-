
#include<bits\stdc++.h>
using namespace std;

class person {

public:
  string name;
  int age;

  person (string name,int age){
  this->name = name;
  this->age= age;
  }
};

int main(){
    person p1("Noor",20);
    cout<<p1.name<<p1.age;


}
