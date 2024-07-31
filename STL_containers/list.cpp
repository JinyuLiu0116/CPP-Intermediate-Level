#include <iostream>
#include <list>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    list<string> s1;
    s1.push_back("Hello");
    string first_name,last_name,food;

    cout<<"Enter your first name:";
    cin>>first_name;

    cout<<"Enter your last name:";
    cin>>last_name;

    cout<<"What is your favorite food? ";
    cin>>food;
    cout<<endl;
    string f_food="\nyour favorite food is "+food;

    s1.push_back(first_name);
    s1.push_back(last_name);
    s1.push_back(f_food);

    for(list<string>::iterator i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    srand(time(NULL));
    list<int> i1;

    for(int i=0;i<10;i++)
        i1.push_back(rand()%20+1);

    cout<<"Random number list: "<<endl;
    for(list<int>::iterator i=i1.begin();i!=i1.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    i1.sort();
    cout<<"After using sort function:"<<endl;
    for(list<int>::iterator i=i1.begin();i!=i1.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    i1.reverse();
    for(list<int>::iterator i=i1.begin();i!=i1.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    int size=i1.size();
    cout<<"Size: "<<size<<endl;

    list<int> i2;
    for(int i=0;i<7;i++)
        i2.push_back(rand()%20+1);
    i2.pop_front();
    i2.pop_back();
    i2.sort();
    cout<<"i2: ";
    for(list<int>::iterator i=i2.begin();i!=i2.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    i1.merge(i2);
    cout<<"i1 + i2: ";
    for(list<int>::iterator i=i1.begin();i!=i1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    i1.sort();
    cout<<"after sort, il: ";
    for(list<int>::iterator i=i1.begin();i!=i1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
}

