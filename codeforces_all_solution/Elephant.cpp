#include<iostream>
using namespace std;

int main(){
    int min_steps_required, destination_x; //variable decelaration
    cin>>destination_x;
    min_steps_required=(destination_x+4)/5;//main logic
    cout<<min_steps_required<<endl;
    return 0;
}