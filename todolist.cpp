#include <iostream>
#include<vector>
#include<string>
using namespace std;
void showmenu(){
    cout<<"\n===== to do list menu =====\n";
    cout<<"1. add task\n";             
    cout<<"2. view task\n";
    cout<<"3. delete task\n";
    cout<<"4. exit\n";
    cout<<"choose an option:";
}
int main(){
    vector<string>tasks;
    int choice;
    do{
        showmenu();
        cin>>choice;
        cin.ignore();
        if (choice== 1){
            string task;
            cout<<"enter task:";
            getline(cin,task);
            tasks.push_back(task);
            cout<<" task added!\n";
        } else if (choice==2){
            cout<<"\n--- your task ---\n";
            if(tasks.empty()){
                cout<<"no tasks available.\n";
            } else{
                for(int i=0; i< tasks.size();i++){
                    cout<< i+1<<"."<< tasks[i]<<endl;
                }
            }
        }else if (choice==3){
            int del;
            cout<<"enter task number to delete:";
            cin>>del;
            if(del>0 && del<= tasks.size()){
                tasks.erase (tasks.begin()+ del-1);
                cout<<"invalid task number.\n";
            }
        }
    } while(choice!=4);
    cout<<"goodbye\n";
    return 0;
}
