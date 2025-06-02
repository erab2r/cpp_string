#include<bits/stdc++.h>
using namespace std;
   class Person{
    public:
    string name;
    int roll;
    int math;
    int english;
    Person(string name,int roll,int math,int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total(){
        cout << "Total marks of " << name  << " = " << math+english <<endl;
    }   
   };
int main(){
    Person rakib("Rakib Ahmed",2,92,91);
    rakib.total();
    Person akib("Akib Ahmed",2,85,91);
    akib.total();
    

    return 0;
}