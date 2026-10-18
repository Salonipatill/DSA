#include<iostream>
using namespace std;

class modular{
    public:
             int i;
    int Modular(int a,int b,int M){
        for( i=0; i<M; i++){
            if(((b*i)% M )==1){
                return (a*i)%M;
                break;
            }
        }   
     return -1;
    }
};

int main(){
    modular m;
    cout<<"inverse division :"<<m.Modular(10,2,13);
    return 0;
}