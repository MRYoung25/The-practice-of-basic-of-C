#include <stdio.h>

#define MALE 1
#define FEMALE 2

int main()
{
    int32_t score = 101;
    if (score >= 60 &&
            score <= 100) {
        printf("Ok\n");
    }
    else{
        printf("Fail or invalid score\n");
    }
    
    int32_t score_1 =80;
    if (score_1 < 60 ||
            score_1 > 100) {
        printf("Fail or invalid score\n");
    }
    else{
        printf("OK\n");
    }
    
    int32_t sex = 1;
    if (sex == 1) {
        printf("The person is Male\n");
    }
    else if(sex != 1 &&
                sex != 2){
        printf("There is something wrong with it\n");
    }
    else{
        printf("The person is Female\n");
    }
    return 0;
}
