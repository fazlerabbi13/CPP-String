#include<iostream>
using namespace std;

int main(){
    // char str[100];

    // cin.get(str,100);

    // cout << "string: " << str << "\n";

    // string str;
    // getline(cin, str);

    // cout << str << "\n";
     string str = "Hello world, wonderful world!";
    string str1 = "xello";
    string str2 = "world";
    

    
    // size_t first_occurence = str.find("world");

    // size_t last_occurence = str.rfind("world");

    // if(first_occurence != string::npos){
    //     cout << first_occurence << "\n";
    //     cout << last_occurence << "\n";
    // }else{
    //     cout << "'world' is not found" << "\n";
    // }


    // str.append("  fazle rabbi");

    // str.insert(10, " hello");

    // str.erase(4,9);

    // str.replace(6,5, "world");

    cout << (str1.compare(str2) == 0 ? "equal" : "not equal") << "\n";
    cout << (str1.compare(str2) < 0 ? "string 1 is smaller" : "string 1 is larger") << "\n";

    return 0;
}