class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
        {
            return 0;
        }
        int guess = 1;
        int temp = x;
        int oldGuess = -999;
        int oldOldGuess = -999;
        bool even = false;
        while (temp > 0)
        {
            if (even)
            {
                guess *= 10;
                even = false;
            }
            else
            {
                even = true;
            }
            temp = temp / 10;
        }
        while (oldGuess != guess && oldOldGuess != guess)
        {
            oldOldGuess = oldGuess;
            oldGuess = guess;
            guess = (guess + x/guess) / 2;
            cout << guess << '\n';
        }
        if(guess == oldOldGuess && guess != 1)
        {
            return oldGuess;
        }
        else
        {
            return guess;
        }
    }
};
