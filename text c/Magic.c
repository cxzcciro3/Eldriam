#include <stdio.h>
#include <math.h>
 
#define NUM_NOTES 88
#define OCTAVE(n) (((n)+9)/12)
#define NOTENAME(n) (name[((n)+9)%12])
#define FREQUENCY(n) ( pow( pow(2.,1./12.), (n)-49. ) * 440. + .5)
 
char*name[12]={"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
 
int main() {
    int n;
    for (n = 0; n < NUM_NOTES; n++)
        printf("%-2s%d  %d\n", NOTENAME(n), OCTAVE(n), (int)FREQUENCY(n+1));
    system("pause");
}
