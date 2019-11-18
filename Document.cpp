#include "Document.hpp"
#include <vector>
#include <string>
#include <iostream>


using namespace std;  


Document::Document(){
        vec.push_back("");
}

void Document::a(){
        string txt;
        getline(cin,txt);
        while(txt[0] != '.'){
                vec.insert(end(vec),txt); 
                index++;    
                getline(cin,txt);
        }
       
}
void Document::i(){
        vector<string>::iterator it;
        it=vec.end();
        string txt;
        getline(cin,txt);
        while(txt[0] != '.'){   
                vec.insert(it-2,txt);
              // vec.insert(find(begin(vec),end(vec),vec[index]),getline(cin,txt));
        }
}

void Document::p(){    
        cout<<vec[index]<<endl;
}

void Document::n(){
        cout<<index<<"\t"<<vec[index]<<endl;
}

void Document::percentP(){
        for(int i=0;i<vec.size();i++){
             cout<<vec[i]<<endl;
        }
}
void Document::num(int num){
        index=num;
        p();
}
void Document::c(){ 
        string txt;
        getline(cin,txt);
        //while(txt[0]!='.')
        vec[index]=txt;
        getline(cin,txt);
}
void Document::d(){
        return;
}
void Document::t_search (string s){
       old_search=s;
       for(int i=index;i<vec.size();i++){
               size_t found= vec[i].find(s);
               if(found!=string::npos){
                       index=i;
                       p();
                       return;
               }
       }
       for (int i = 1; i <index; i++){
               size_t found= vec[i].find(s);
               if(found!=string::npos){
                       index=i;
                       p();
                       return;
               }
       }
       cout<<"?"<<endl;
}
void Document::r_search (){
      t_search(old_search);
}

void Document::b_search (string s){
        for(int i=index-1;i>0;i--){
               size_t found= vec[i].find(s);
               if(found!=string::npos){
                       index=i;
                       p();
                       return;
               }
       }
       for (int i = vec.size()-1; i >index; i--){
               size_t found= vec[i].find(s);
               if(found!=string::npos){
                       index=i;
                       p();
                       return;
               }
       }
       cout<<"?"<<endl;
}
void Document::s_old_new(string s){
        stringstream check1(s); 
      
    string old; 
    string news;
      
    // Tokenizing w.r.t. space ' ' 
    getline(check1, old, '/');
    getline(check1, news, '/');
    vec[index].replace(vec[index].find(old),old.size(),news);
}



