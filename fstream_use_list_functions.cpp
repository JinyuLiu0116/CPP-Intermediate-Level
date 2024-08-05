#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

int main(){
    fstream myFile;
    myFile.open("file.text",ios::out);
    list<int> l1={3,5,6,7,2,9,1};
    list<int> l2={10,15,13,11,18,12};
    if(myFile.is_open()){
        myFile<<"The numbers of l1 are:";
        int index=0;
        for(int it:l1){
            if(index<l1.size()-1)
            {
                myFile<<to_string(it)<<',';
                index++;
            }else{
                myFile<<to_string(it)<<'\n';
            }
        }
        index=0;
        myFile<<"The numbers of l2 are:";
        for(int it:l2){
            if(index<l2.size()-1)
            {
                myFile<<to_string(it)<<',';
                index++;
            }else{
                myFile<<to_string(it)<<'\n';
            }
        }
        myFile.close();
    }
    /*myFile.open("file.text",ios::in);
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }*/
    l1.sort();
    l2.sort();
    myFile.open("file.text",ios::app);
    if(myFile.is_open()){
        myFile<<"The sorted numbers of l1 are:";
        int index=0;
        for(int it:l1){
            if(index<l1.size()-1)
            {
                myFile<<to_string(it)<<',';
                index++;
            }else{
                myFile<<to_string(it)<<'\n';
            }
        }
        index=0;
        myFile<<"The sorted numbers of l2 are:";
        for(int it:l2){
            if(index<l2.size()-1)
            {
                myFile<<to_string(it)<<',';
                index++;
            }else{
                myFile<<to_string(it)<<'\n';
            }
        }
        myFile.close();
    }

    l1.merge(l2);
    myFile.open("file.text",ios::app);
    if(myFile.is_open()){
        myFile<<"The merge numbers of l1 and l2 are:";
        int index=0;
        for(int it:l1){
            if(index<l1.size()-1)
            {
                myFile<<to_string(it)<<',';
                index++;
            }else{
                myFile<<to_string(it)<<'\n';
            }
        }
        myFile.close();
    }

    myFile.open("file.text",ios::in);
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }

}
