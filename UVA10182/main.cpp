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

    int input;
    while(scanf("%d",&input)!=EOF){
        cout << koor[input].x << " " << koor[input].y << endl;
    }

    return 0;
}
