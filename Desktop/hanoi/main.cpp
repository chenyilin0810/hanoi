#include <iostream>

using namespace std;

void move(char ,char );
void hanoi(int ,char ,char ,char);

int main()
{
    int n;
    cin>>n;
    hanoi(n,'a','b','c');
    return 0;
}

void move(char a,char b){
    cout<<a<<"->"<<b<<endl;
    }

void hanoi(int n,char a,char b,char c){
    if(n==1){
        move(a,c);
        }
    else {
        hanoi(n-1,a,c,b);
        move(a,c);
        hanoi(n-1,b,a,c);
        }
    }
