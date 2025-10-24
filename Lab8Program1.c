//For input/output stuff
#include <stdio.h>

//Main
int main(){
    //Declare score
    int score;

    //Temporary infinite loop
    while(1){
        //Has user enter score
        printf("Enter the NFL score (Enter 1 to stop): ");
        //Save input
        scanf("%d", &score);

        //If score is 1, end the loop
        if (score == 1) break;
        //If score is less than 0, tell the user it's invalid.
        if (score < 0){
            //Print error message
            printf("Invalid input");
            //continue
            continue;
        }

        //Print combination message.
        printf("Possible combinations of scoring plays if a team's score is %d:\n", score);

        //Loops over all Touchdowns + 2pts.
        for (int td2 = 0; td2 * 8 <= score; td2++) {
            //Loops over all Touchdowns + field goals.
            for (int td1 = 0; td1 * 7 <= score; td1++) {
                //Loops over all Touchdowns
                for (int td = 0; td * 6 <= score; td++) {
                    //Loops over all field goals
                    for (int fg = 0; fg * 3 <= score; fg++) {
                        //Loops over all safeties.
                        for (int safety = 0; safety * 2 <= score; safety++) {
                            //Combines the total
                            int total = td2*8 + td1*7 + td*6 + fg*3 + safety*2;
                            //If the total score is equal to the score, print.
                            if (total == score) {
                                //Print
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, safety);
                            }
                        }
                    }
                }
            }
        }
    }        
    //End loop
    return 0;
}