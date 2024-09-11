
#include<iostream>
using namespace std;
class defaultAndParameterized{
    int n;
    public:

    defaultAndParameterized(){
        n =50;
        cout<<"Default Constructor value:  "<<n<<endl;
    }

    defaultAndParameterized(int num){
         n= num;
        cout<<"Parameterized Constructor called: "<<n<<endl;
    }

    ~defaultAndParameterized(){
        cout<<"Destructor called: number is = "<<n<<endl;
    }
};
int main(){

    defaultAndParameterized obj; //object for default constructor

    defaultAndParameterized obj2(100); //object for parameterized constructor
}:wq

