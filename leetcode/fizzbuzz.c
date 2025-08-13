char** fizzBuzz(int n, int* returnSize) {
    int control;
    control = 0;
    char *resp[] = {"Fizz", "FizzBuzz", "Buzz"};
    while(control<n){
        control += 1;
        if(control%3 == 0 && control%5 == 0){
            char divthreefive[] = "FizzBuzz";
            printf("%s, ", divthreefive);
        } else if(control%3 == 0){
            char divthree[] = "Fizz";
            printf("%s, ", divthree);
        } else if(control%5 == 0){
            char divfive[] = "Buzz";
            printf("%s, ", divfive);
        } else {
            printf("%d, ", control);
        }
    }
    return resp;
} 