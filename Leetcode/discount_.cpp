#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

class Solution{
    public:

    //------------------------------------------------------------------------------------
    string discountPrices(string sentence, int discount){
        stringstream ss(sentence);
        string word;
        string result = "";
//---------------------------------------------------------------------------------------------

        while(ss >> word){
            if(word[0] == '$' && word.length() > 1){
                bool isPrice = true;

                for(int i = 1; i<word.length(); i++){
                    if(!isdigit(word[i])){
                        isPrice = false;
                        break;
                    }
                }
 

                if(isPrice){
                    double price = stod(word.substr(1));
                    double newPrice = price * (100 - discount)/100.0;

                    stringstream temp;
                    temp<<fixed<<setprecision(2)<<newPrice;
                    word = "$" + temp.str();
                }
            }

            if(!result.empty()) result += " ";
            result += word;

        }

        return result;

    }
};

int main(){
    Solution sol;

    string sentence1 = "I have $100 and $50";
    int discount1 = 20;

    cout<<"Input"<<sentence1<<", Discount:"<<discount1<<"%"<<endl;
    cout<<"output"<<sol.discountPrices(sentence1, discount1)<<endl<<endl;

    return 0;
}