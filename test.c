#include "get_next_line.h"

void reverse(void)
{
    char j = 'z';
    while (j >= 'a')
    {
        write(1,&j,1);
        j--;
    }
    
}

int main(){
    reverse();
}