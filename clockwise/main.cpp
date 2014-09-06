#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int init,a,b,c;
    while((scanf("%d %d %d %d" , &init , &a , &b , &c )!=EOF)&&((init!=0)||(a!=0)||(b!=0)||(c!=0))){

            int total = 0;
            total += 1080;
            if(init - a > 0){
                total += (init - a)*9;
//                cout << "hitung 1 : " << (init - a)*9 << endl;

            }else{
                total += 360 - (a - init)*9;
//                cout << "hitung 1 : " << 360 - (a - init)*9 << endl;

            }


//            cout << total << endl;
            if(b-a <= 0){
                total += 360 + (b-a)*9;
//                cout << "hitung 2 : " << 360 + (b - a)*9 << endl;
            }else{
                total += (b-a)*9;
//                cout << "hitung 2 : " << (b - a)*9 << endl;
            }

//            cout << total << endl;

            if(c-b <= 0){
                total += (b-c)*9;
//                cout << "hitung 3 : " << (b - c)*9 << endl;
            }else{
                total += 360 - (c-b)*9;
//                cout << "hitung 3 : " << 360 - (c - b)*9 << endl;
            }

            cout << total << endl;
    }
    return 0;
}
