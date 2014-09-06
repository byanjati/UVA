#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c1,c2,c3,c4,temp,deg;
//    freopen("in10550.txt","r",stdin);
    while(scanf("%d %d %d %d",&c1,&c2,&c3,&c4)== 4&&!(c1==0 && c2==0 && c3==0 &&c4==0)){

     // 0 30 0 30
     deg=1080;
     temp=c1-c2;
     if(temp<0){
        temp=temp+40;
        cout << "temp1 : " << temp << endl;
     }
     deg+=temp*9;

     cout << "proses 1 : " << deg << endl;

     temp=c3-c2;
     if(temp<0)
        temp=temp+40;
     deg+=temp*9;

     temp=c3-c4;
     if(temp<0)
        temp=temp+40;

     deg+=temp*9;
     printf("%d\n",deg);
    }
//    int init,a,b,c;
//    while(scanf("%d %d %d %d" , &init , &a , &b , &c)){
//        int init2 = 0;
//        int a2 = a - init;
//        int b2 = b - init;
//        int c2 = c - init;
//
//        int totalrotate = 0;
//        totalrotate += 720; //full turn 2 x
//        totalrotate += a2*9; //clockwise until first number
//        init2 = a2;
//        totalrotate += 360; //full counterclock 1 x
//
//        //counterclock until second number
//        if(init2 - b2 > 0){
//            totalrotate += (init2 - b2)*9;
//        }else{
//            int jml = 40 - b2 + init2;
//        }
//
//        totalrotate += c2*9;
//
//        cout << totalrotate << endl;
//
//    }

    return 0;
}
