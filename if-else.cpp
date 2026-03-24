// #include <iostream>
// using namespace std;
// int main(){
//     int n=45;

//     if(n >=0){
//      cout << "n is a positive\n";
//     }else{
//         cout << "n is negative\n";

//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter age:";
    cin >>age;

    if(age>=18){
        cout<<"you can vote";
    }else{
        cout <<"you cannot vote";
    }
    return 0;
}