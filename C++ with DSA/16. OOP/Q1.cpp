#include<iostream>
#include<string>
using namespace std;

class user{
    int id;
    string password;

    public:
        string username;

        user(int id){
            this->id = id;
        }

        string getPass(){
            return password;
        }
        
        void setPass(string pass){
            password = pass;
        }  
};

int main(){
    user u1(101);
    u1.username = "rowdy";
    u1.setPass("ChintataChitaChita");
    
    cout << u1.username << endl;
    cout << u1.getPass() << endl;
    return 0;
}