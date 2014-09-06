#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int input; double a;double b;
    while(scanf("%d" , &input)!=EOF){
        for(int i=0;i<input;i++){
            scanf("%lf %lf" , &a , &b);
            if(b==0){
                // kasus a tidak nol , b nol
                cout << a << " " << b << endl;
            }else{
                //kasus a nol
                if(a==0){
                    cout << "impossible" << endl;
                }else{
                    int jum = a + b;
                    int selisih = a - b;

                    int x1 = jum / 2;
                    int x2 = selisih / 2;

                    if(x2>0){
                        if((x1*2==jum)&&(x2*2==selisih)){
                            cout << x1 << " " << x2 << endl;
                        }else{
                            cout << "impossible" << endl;
                        }
                    }else{
                        cout << "impossible" << endl;
                    }
                }
            }


        }
    }
    return 0;
}
