#include "test.h"
int StonePaperScissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    if(you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    else if((you=='s' && comp=='p')||(you=='p' && comp=='c')||(you=='c' && comp=='s'))
    {
        return -1;
    }
    else if((you=='s' && comp=='c')||(you=='p' && comp=='s')||(you=='c' && comp=='p'))
    {
        return 1;
    }

}