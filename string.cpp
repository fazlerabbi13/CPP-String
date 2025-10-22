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

    str.erase(4,9);

    cout << str << "\n";

    return 0;
}