#include "Editor.hpp"
#include "Document.hpp"
#include "Document.cpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Editor::Editor(){
    Document();
}

 void Editor::loop(){
    
    string command;
    cout<<"start"<<endl;
    getline(cin,command); //getting from the user
    while(command!="Q"){
        switch(command[0]){
            case 'p':
            d.p();
            break;
            
            case 'n':
            d.n();
            break;

            case '%':
            d.percentP();
            break;

            case 'a':
            d.a();
            break;

            case 'c':
            d.c();
            break;

            case 'd':
            d.d();
            break;

            case '/': // "/text" else "/"
            if(command.size()>1){
                d.t_search(command.substr(1)); //skip the first char "/"
            }
            else{
                d.r_search();
            }
            break;

            case '?':
            d.b_search(command.substr(1));
            break;

            case 's':
            d.s_old_new(command.substr(2));
            break;
            
        }
        if(command[0]>'0' && command[0]<'9'){
            d.num(stoi(command)); //casting string to integer
        }
        getline(cin,command);
    }
    

}

int main(){
    Editor ed;
    ed.loop();

    return 0;
}

