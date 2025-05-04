#include <cursor.h>

void ManagerDisplay(int x, int y, int z){
    if(h == 0){
        displayHome();
        h++;
    }
    
    if(j == 0){
        Cursor(x);
    }
    Clicker(y, z);
}