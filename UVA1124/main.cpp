#include <iostream>
#include <stdio.h>

using namespace std;

bool isWord(int bil){
    return (((bil>96)&&(bil<123))||(bil>64)&&(bil<91));
}

int main()
{
    string str;int count = 0;int word = 0;
    while(getline(cin,str)){
        for(int i=0;i<str.length();i++){
            int bil = str[i];
            if(isWord(bil)){
                count++;
            }else{
                if(count > 0){
                    word++;
                    count = 0;
                }
            }
        }

        if(count > 0){
            word++;
            count = 0;
        }

        cout << word << endl;
        count = 0;word = 0;
    }


    return 0;
}
