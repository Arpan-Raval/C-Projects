#include <iostream>
#include<map>
using namespace std;

int main() {
map<string,pair<string,string>>student;

while(true){
cout<<"1.add student detail"<<endl;
cout<<"2.display detail"<<endl;
cout<<"enter your choice :";
int choice;
cin>>choice;

switch(choice){
    case 1:{
    string name, rollno,marks;
    
    cout<<"enter name :";
    cin>>name;
    cout<<"enter rollno :";
    cin>>rollno;
    cout<<"enter marks :";
    cin>>marks;
    student[rollno]=make_pair(name,marks);
    break;
    }
    case 2:{
     cout<<"rollno"<<"   "<<"name"<<"   "<<"marks"<<endl;
    for(const auto& entry:student){
      cout<<entry.first<<"    "<<entry.second.first<<"     "<<entry.second.second<<endl;
    }
     break;
    }
}
}

    return 0;
}