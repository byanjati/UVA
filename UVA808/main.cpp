#include <iostream>
#include <stdio.h>

using namespace std;

struct koordinat{
    int x;
    int y;
};

int main()
{
    int angka;
    koordinat koor[200000];

    int bawah,bawahkiri,ataskiri,ataskanan,bawahkanan;
    koor[1].x = 0;
    koor[1].y = 0;

    koor[2].x = 0;
    koor[2].y = 1;

    koor[3].x = -1;
    koor[3].y = 1;

    koor[4].x = -1;
    koor[4].y = 0;

    koor[5].x = 0;
    koor[5].y = -1;

    koor[6].x = 1;
    koor[6].y = -1;

    angka = 7;int x = 1;int y=-1;
    int n = 2;
    while((angka<100000)&&(n<184)){
        //bawah
        for(int i=0;i<n;i++){
            y++;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        //bawahkiri
        for(int i=0;i<n-1;i++){
            x--;y++;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        //ataskiri
        for(int i=0;i<n;i++){
            x--;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        //atas
        for(int i=0;i<n;i++){
            y--;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        //ataskanan
        for(int i=0;i<n;i++){
            x++;y--;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        //bawahkanan
        for(int i=0;i<n;i++){
            x++;
            koor[angka].x = x;
            koor[angka].y = y;
            angka++;
        }

        n++;
    }

    int input,input2;
    while((cin>>input>>input2)&&((input!=0)&&(input2!=0))){
//        cout << koor[input].x << " " << koor[input].y << endl;
        int selisihx = koor[input].x - koor[input2].x;
        int selisihy = koor[input].y - koor[input2].y;

        int langkah = 0;

        if((selisihx<0)&&(selisihy>0)){
            if((-1*(selisihx))>selisihy){
                selisihx = selisihx + selisihy;
                langkah += selisihy;
                selisihy = 0;
            }else{
                selisihy = selisihy + selisihx;
                langkah += -1*(selisihx);
                selisihx = 0;
            }
        }else{
            if((selisihx>0)&&(selisihy<0)){
                if(selisihx<(-1*(selisihy))){
                    selisihy = selisihy + selisihx;
                    langkah += selisihx;
                    selisihx = 0;
                }else{
                    selisihx = selisihx + selisihy;
                    langkah += -1*(selisihy);
                    selisihy = 0;
                }
            }
        }

        if((selisihx>0)&&(selisihy>0)){
            langkah += selisihx + selisihy;
        }else{
            if((selisihx<0)&&(selisihy<0)){
                langkah += -1*(selisihx) + -1*(selisihy);
            }
        }

        if(selisihx==0){
            if(selisihy>0){
                langkah += selisihy;
            }else{
                langkah += -1*(selisihy);
            }
        }

        if(selisihy==0){
            if(selisihx>0){
                langkah += selisihx;
            }else{
                langkah += -1*(selisihx);
            }
        }

        cout << "The distance between cells " << input << " and " << input2 << " is " << langkah << "." << endl;
    }

    return 0;
}
