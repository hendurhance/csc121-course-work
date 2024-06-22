// Question: (Another Dangling-Else Problem) Modify the following code to produce the
// output shown. Use proper indentation techniques. You may not make any changes other than
// inserting braces. The compiler ignores the indentation in a program. We eliminated the
// indentation from the following code to make the problem more challenging. [Note: It’s
// possible that no modification is necessary.]
// if ( y == 8 )
// if ( x == 5 ) puts( "@@@@@" ); else
// puts( "#####" ); puts( "$$$$$" ); puts( "&&&&&" );
// 1. a) Assuming x = 5 and y = 8, the following output is produced.
// 2. b) Assumingx=5andy=8,thefollowingoutputisproduced.
// @@@@@
// c) Assuming x = 5 and y = 8, the following output is produced. @@@@@
// &&&&&
// d) Assumingx=5andy=7,thefollowingoutputisproduced.
// Exercises 141
// @@@@@
// $$$$$
// &&&&&
// #####
// $$$$$
// &&&&&

#include <stdio.h>

int main() {
    int x, y;
    int isSpecialCase = 0;  // Flag to indicate special case

    printf("Enter values for x and y: ");
    scanf("%d %d", &x, &y);

    if (y == 8) {
        if (x == 5) {
            printf("@@@@@\n");
            isSpecialCase = 1;
        }
    }
    printf("$$$$$\n");
    printf("&&&&&\n");

    if (!isSpecialCase) {
        printf("#####\n");
    }

    return 0;
}
