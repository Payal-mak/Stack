#include<iostream>
using namespace std;

class stack{
    private:
    int *arr;
    int top;
    int capacity;

    public:
    stack(int size){
        arr = new int[size];
        top = -1;
        capacity = size;

    }

    int size(int top){
        return (top + 1);
    }

    bool isFull(){
        if(top == capacity - 1){
            return true;
        }
        else{
            return false;
        }
    }
};