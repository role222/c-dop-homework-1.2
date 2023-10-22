#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int xz[100], yz[100];
    
    int xk = 0;
    while(x != 0) {
        xz[xk] = x % 10;
        x /= 10;
        xk++;
    }
    
    int yk = 0;
    while(y != 0) {
        yz[yk] = y % 10;
        y /= 10;
        yk++;
    }
    
    int cx[10] = {0};
    for(int ix = 0; ix < xk; ix++){
        cx[(xz[ix])] += 1;
    }
    int cy[10] = {0};
    for(int iy = 0; iy < yk; iy++){
        cy[(yz[iy])] += 1;
    }
    
    for(int l = 0; l < 10; l++){
        cout << cx[l];
    }
    cout << endl;
    for(int l = 0; l < 10; l++){
        cout << cy[l];
    }
    cout << endl;
    
    int rzn = 0;
    for(int lol = 0; lol < 10; lol++){
        rzn += (cx[lol] == cy[lol]);
    }
    
    if(rzn == 10){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
