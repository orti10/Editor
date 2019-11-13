#include "Document.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;  


int index=0;

void Document::p(){   
        vector<string> vec={"ortal","hanoochhhh","wow"};  
        cout<<"in p"<<endl;
        cout<<vec.at(index)<<endl;
        cout<<"in p2"<<endl;
        index=index+1;
}




