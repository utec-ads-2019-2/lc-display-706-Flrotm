    #include <iostream>
    #include <string>
    #include <cstring>

    using namespace std;


    int main () {

        int s;
        char Stringg[9];

        char tabla[10][7] = {
             '-','|','|',' ','|','|','-',
            ' ','|',' ',' ','|',' ',' ',
             '-','|',' ','-',' ','|','-',
             '-','|',' ','-','|',' ','-',
             ' ','|','|','-','|',' ',' ',
             '-',' ','|','-','|',' ','-',
             '-',' ','|','-','|','|','-',
             '-','|',' ',' ','|',' ',' ',
             '-','|','|','-','|','|','-',
             '-','|','|','-','|',' ','-',};


        while(scanf("%d %s",&s,&Stringg)!=EOF){
            if (!s) {
                return 0;
            }
            int k=0;
            int n = strlen(Stringg);
            int num;
    
            for (int i = 0; i < 2*s+3; i++) {
                for (int j = 0; j < n; j ++) {
                    num=Stringg[j]-'0';
                    if (i > 0 and i < (s + 1)) {
                        cout<<tabla[num][2];
                        for (k = 0; k < s; k++) {
                            cout<<" ";
                        }
                        cout<<tabla[num][1];
                    }

                    if (i > (s + 1) and i < (2*s + 2)) {
                        cout<<tabla[num][5];
                        for (k = 0; k < s; k++) {
                            cout<<" ";
                        }
                        cout<<tabla[num][4];
                    }
                    if ((i % (s + 1)) == 0) {
                        cout<<" ";
                        for (k = 0; k < s; k++) {
                            cout<<tabla[num][(i/(s+1))*3];
                        }
                        cout<<" ";
                    }
                    if (j != n-1)
                        cout<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        return 0;
    }
