#include <iostream>

using namespace std;

#define SIZE 10 

template <class type_t>
class queue
{
private:
    int toq;// Top of queue
    type_t  que[SIZE];
public:
    queue(){toq=0;}
    void adding(type_t a);
    type_t Removing();
};

template <class type_t>
void queue<type_t>::adding(type_t a){
    if (toq==SIZE)
    {
        cout<<"queue is full"<<endl;
        return;
    }else{
        que[toq]=a;
        toq++;
    }
}
template <class type_t>
type_t queue <type_t>::Removing(){
    if(toq==0){
        cout<<"queue is empty"<<endl;
    }
    else{
        toq--;
        cout<<"element is " <<que[toq]<<endl;
        return que[toq];
    }
}

int main(){
    queue<char> Q;
    Q.adding('a');
    Q.Removing();
    return 0;
}