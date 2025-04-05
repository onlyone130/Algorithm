#include <iostream>
#include <stack>
#include <string>

using namespace std;

//균형잡힌 세상
int main(){

    string input;
    
    while(true){

        stack<char> s;

        getline(cin, input);

        if(input =="."){
            break;
        }

        bool error = false;

        for(int i=0; i<input.length(); i++){
            if(input[i]=='(' || input[i]=='['){ //여는 괄호면
                s.push(input[i]); //스택에 push
            }

            else if(input[i]==')'){ //닫는 소괄호면
                if(!s.empty() && s.top()=='('){ //스택의 top이 여는 소괄호여야함
                    s.pop();
                }
                else{ //아니면 에러
                    error = true;
                    break;
                }
            }

            else if(input[i]==']'){ //닫는 대괄호면
                if(!s.empty() && s.top()=='['){ //스택의 top이 여는 대괄호여야 함
                    s.pop();
                }
                else{ //아니면 에러
                    error = true;
                    break;
                }
            }
        }
        

        if(error || !s.empty()) { //앞에서 에러였거나 스택에 뭔가 남아있으면 에러
            cout << "no" << '\n';
        }
        else { //정상
            cout << "yes" << '\n';
        }
    }
}