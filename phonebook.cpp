#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string>phone;
    while(true){
        cout<<endl<<"1. add contact"<<endl;
        cout<<"2. search contact"<<endl;
        cout<<"3. display contact"<<endl;
        cout<<"4. end"<<endl;
        int choice;
        cout<<"enter choice :";
        cin>>choice;
        switch(choice){
            case 1:{
                string name,number;
                cout<<endl<<"enter name :";
                cin>>name;
                cout<<"enter number :";
                cin>>number;
                phone[name]=number;
                break;
            }
            case 2:{
                string name;
                cout<<"enter name :";
                cin>>name;
                if(phone.find(name) != phone.end()){
                    cout<<"contact found"<<endl;
                }
                else{
                    cout<<"not found"<<endl;
                }
                break;
            }
            case 3:{
                for(const auto& entry:phone){
                    cout<<entry.first<<"--"<<entry.second<<endl;
                }
                break;
            }
            case 4:{
                cout<<"thank you"<<endl;
                return 0;
            }

        }
    }
    return 0;
}