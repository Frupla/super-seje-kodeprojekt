#include <stdio.h>

int takeInput(int high, int low){ // This function is used to take inputs and sanitize them a bit, it cannot handle anything other than integers
	int sanflag = 1, input; 

	if(low > high){ // It swaps high and low if you write them in the wrong order
		int temp = high;
		high = low;
		low = temp;
	}

	printf("Write a number between %d and %d\n", low, high); // It will continue to ask for input until it gets a number in bounds
	while(sanflag){
		scanf("%d", &input);
		if(input <= high && input >= low){
			sanflag = 0;
		}else{
			printf("Out of bounds, try again\n");
			sanflag = 1;
		}
	}
	return input; // If the input is in bounds, it returns it
}



int main(){
	int option;
	while(1){ // This while loop will run forever
		printf("What do you want to do?\n1. first option\n2. second option\n3. exit\n");
		option = takeInput(1,3); // takes the input
		switch(option){ // throws the input in a switch case
			case 1:
				printf("Wow, you pressed one, I am so impressed\n");
				break;
			case 2:
				printf("This is what happens when you press 2\n");
				break;
			case 3:
				for(int i = 0; i < 10000; i++){
					printf("YOU FOOL! ");
				}
				printf("\nOkay I'm done\n");
				return 0; // It exits the program here
				break;
			default:
				break;
		}
	}
}