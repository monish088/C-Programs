#include<bytes/stdc++.h>
struct student
{
    int roll;
    char name[20];
    int mob[10];
};
int main()
{
    struct student s;
cout<<"Enter roll:"<<endl;
cin>>s.roll;
cout<<"Enter name:"<<endl;
getline(s.name);
cout<<s.name<<s.roll;
return 0;
    
        
    
    
}
