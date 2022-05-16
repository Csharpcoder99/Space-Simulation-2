//
//  main.cpp
//  function
//
//  Created by Yosef Yada Ysrayl on 2022/05/16.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string email = "";
    string addon = "@gmail.com";
    
    cout << "Type: ";
    cin >> email;
    
    string addon2 = email.append(addon);
    cout << "Your email is now " << email << endl;
    
    
    
    
    return 0;
}
