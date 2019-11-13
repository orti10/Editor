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
    
    int i=0;
    string command;
    cout<<"cc";
    getline(cin,command); //getting from the user
    cout<<"BB";
    while(command!="Q"){
        switch(command.at(i)){
            case 'p':
            d.p();
            break;
            
            // case 'n':
            // d.n();
            // break;
            
        }
    }

}

int main(){
    Editor ed;
    ed.loop();

    return 0;
}

