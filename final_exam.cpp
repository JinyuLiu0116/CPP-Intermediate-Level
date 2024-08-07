#include <iostream>
#include <cmath>
using namespace std;
const int SIZE=7;
class Menu{
public:
    string breakfast[SIZE]={"Plain Egg    ","Bacon and Egg","Muffin       ",
                            "French Toast ","Fruit Basket ","Cereal       ","Coffee       "};
    double price[SIZE]={1.45,2.45,0.99,1.99,2.49,0.69,0.50};
    int order[SIZE]={0,0,0,0,0,0,0};

    void getData(int a);
    void showMenu();
    void printCheck();
};

int main(){
    Menu menu;
    char choice='y';
    cout<<"Hello, here is the menu:\n";
        menu.showMenu();
    do{
        int order;
        cout<<"please choose the number to order(1-7):";
        cin>>order;
        while(order<1||order>7){
            cout<<"Please choose the number between 1 and 7:";
            cin>>order;
        }
        int a=order-1;
        cout<<"You ordered a "<<menu.breakfast[a]<<endl;
        menu.getData(a);
        cout<<endl;
        cout<<"Anything else?(y/n):";
        cin>>choice;

    }while(choice!='n');
    menu.printCheck();
}

void Menu::getData(int a){
    order[a]+=1;
}
void Menu::showMenu(){
    cout<<"-------------------------------\n";
    cout<<"|           Menu              |\n";
    for(int i=0;i<SIZE;i++){
        cout<<"|"<<i+1<<". "<<breakfast[i]<<"--------$"<<price[i]<<"|"<<endl;
    }
    cout<<"-------------------------------\n";
}
void Menu::printCheck(){
    cout<<"Welcome to Joe's Restaurant\n";
    double counter=0;
    for(int i=0;i<SIZE;i++){
        if(order[i]!=0){
            cout<<order[i]<<" "<<breakfast[i]<<"       $"<<order[i]*price[i]<<endl;
            counter+=(order[i]*price[i]);
        }
    }
    double tax=counter*0.05;

    cout<<"       Tax            $"<<tax<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Amount Due            $"<<counter+tax<<endl;


}
