#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("mahtab");
    q.push("ali");
    q.push("khan");
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;
    cout<<"size after pop"<<q.size()<<endl;
}
