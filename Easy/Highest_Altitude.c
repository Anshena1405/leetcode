/*
    LeetCode 1732 - Find the Highest Altitude
*/

int largestAltitude(int* gain, int gainSize) {
    int i;

    int max = 0, current = 0;

    for(i = 0; i < gainSize; i++) {
        current = current + gain[i];

        if(current > max) {
            max = current;
        }
    }

    return max;
}
