#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution{
    public:
        int romanToInt(string s){
            unordered_map<char, int>value = {
                {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
            };

                int total = 0;

                for(int i=0; i<s.length(); i++)
                {
                    if(i<s.length()-1&&value[s[i]]<value[s[i+1]]){
                        total -=value[s[i]];
                    }else{
                        total +=value[s[i]];
                    }
                }
                return total;
                }

            };

            int main(){
                string s;
                cout<<"Enter Roman numeral:";
                cin>>s;

                Solution obj;
                int result = obj.romanToInt(s);

                cout<<"Integer value:"<<result<<endl;

                return 0;
            }
        
