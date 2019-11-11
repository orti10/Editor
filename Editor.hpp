#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "Document.hpp"
using namespace std;

class Editor{

    public:
    
    Editor(){
        Document();
    }
    void loop(vector<char> v); //waiting for user's input
};

