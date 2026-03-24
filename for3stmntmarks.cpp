#include <iostream>
using namespace std;

// int main(){
//     int marks;
//     cout<<"enter the marks";
//     cin >> marks;

//     if(marks>=90){
//         cout<<"A\n";
//     }else if(marks>=80 && marks <90) {
//         cout<<"B\n";
//     }else{
//         cout<<"c\n";
//     }

//     return 0;
// }
int main(){
    char ch;
    cout << "enter char:";
    if(ch >= 65 && ch<=90){
    cout<< "uppercase\n";
    }else{
        cout<<"lowercase\n";
    }
    return 0;
}