#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string input, delimeter = " ", name;
    vector<string> fullName;

    cout << "Enter your full name: ";

    getline(cin,input);

    stringstream stream(input);

    while(getline(stream,name,delimeter.front())){
        fullName.push_back(name);
    }

    cout << "\nFirst name: " << fullName.at(0);

    if(fullName.size()>2){
        cout << "\n\nMiddle name:";
        for(int i = 1; i < fullName.size()-1;i++){
            cout << " " << fullName.at(i);
        }
    }

    cout << "\n\nLast name: " << fullName.at(fullName.size()-1) << endl;

    return 0;
}
