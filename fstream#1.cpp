#include <iostream>
#include <fstream>
#include <list>
#include <string>
using namespace std;


int main(){
    list<int> iList={1,2,3,4,5};
    for(int it: iList){
        cout<<it<<" ";
    }
    fstream myFile;
    myFile.open("file.text",ios::out);
    if(myFile.is_open()){
        myFile<<"Open,130.98\n";
        myFile<<"Open,135.64\n";
        myFile.close();
    }
    myFile.open("file.text",ios::in);
    double total=0;
    if(myFile.is_open()){
        string open,price;
        while(getline(myFile,open,',')&&getline(myFile,price,'\n')){
            if(open=="Open"){
                total+=stod(price);
            }
        }
        myFile.close();
    }
    cout<<endl;
    cout<<"total is: "<<total;



}
