#include<iostream>
#include<map>
using namespace std;
class login{
    map<string,string>user;
public:
    bool regi(string username,string password){
        if(user.find(username)==user.end()){
            user[username]=password;
            return true;
        }
        else{
            return false;
        }
    }
    bool check(string username,string password){
        if(user.find(username)!=user.end()&&user[username]==password){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
   string username,password;
   cout<<"enter username :";
   cin>>username;
   cout<<"enter password :";
   cin>>password;
   login a;
   a.regi("Arpan","123");
   if(a.check(username,password)){
    cout<<"login successful";
   }
   else{
    cout<<"invalid username or password";
   }
    return 0;
}