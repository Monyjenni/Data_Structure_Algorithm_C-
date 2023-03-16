#include<iostream>
#include<queue>
using namespace std;
void showQ(queue<int> showQ){
    for(int i = 0;i < 10;i++){
        cout<<"Enqueuing "<<i << endl;
        showQ.pop(i);
    }

}
int main(){
    system("cls");
    queue<int> showQ;
    showQ.push(7);
    showQ.push(9);
    showQ.push(12);
    showQ.push(18);
    showQ.push(29);
    cout<<"The size of showQ : " << showQ.size()<< endl;
    if(showQ.empty()==0){
        cout<<"My stack is not empty"<<endl;
    }
    else{
        cout<<"My stack is empty"<<endl;
    }
    showQ.pop();
    showQ.pop();
    showQ.pop();

    int num=15;
    showQ.push(num);
    cout<<"The current element in my Stack : " << endl;


}