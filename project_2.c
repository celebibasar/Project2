#include <stdio.h> 
#include <string.h> 
// The function prints the results of the election by comparing vote of YES count and vote of NO count...
int the_result(int *yes_count_calculator, int *no_count_calculator){
	
	printf("\nResults of the election:");
 printf("\n  The number of 'YES' votes: %d",*yes_count_calculator);
 printf("\n  The number of 'NO' votes: %d",*no_count_calculator);
 if(*yes_count_calculator > *no_count_calculator){
     printf("\nThe supporters of online education won by %d votes.", *yes_count_calculator);
 } else if(*no_count_calculator > *yes_count_calculator){
     printf("\nThe supporters of online education lost by %d votes.", *no_count_calculator);
 } else{
     printf("\nThere is a draw.");
 }
 return 0;
}


// This function is comparing the inputs of the users by looking at votecount_calculate.

// All users must vote once.

// If username and password match correctly, then users can continue voting.



int compare(char *username_of_the_person, char *password_of_the_person, int *votecount_calculate, int *calculate_control){
	
	
	
	if(strcmp(username_of_the_person,"20201701066")==0){ 
        	if(strcmp(password_of_the_person,"1923")==0){ 
 
        	printf("\nWelcome.Login Success!");
            printf("\nDo you support online education or not?");
        	*calculate_control = 1; // If calculate_control equals to 1, user can continue voting in main function.
        	
        	}
			else{ 
    			printf("\nwrong password"); 
					}
				}
			
        	
        
    else if(strcmp(username_of_the_person,"20201701057")==0){ 
        if(strcmp(password_of_the_person,"2002")==0){ 
 
        printf("\nWelcome.Login Success!");
        printf("\nDo you support online education or not?");
		*calculate_control = 1; // If calculate_control equals to 1, user can continue voting in main function.
    }
        else{ 
    		printf("\nwrong password"); 
			}
		}
	
        
    else if(strcmp(username_of_the_person,"20201701031")==0){ 
        if(strcmp(password_of_the_person,"bilemedimya")==0){
 
    printf("\nWelcome.Login Success!");
    printf("\nDo you support online education or not?");
    *calculate_control = 1; // If calculate_control equals to 1, user can continue voting in main function.
}
    	else{ 
    		printf("\nwrong password"); 
			}
		}
	
    
    else if(strcmp(username_of_the_person,"20201701001")==0){ 
    if(strcmp(password_of_the_person,"safak")==0){
    	
    printf("\nWelcome.Login Success!");
    printf("\nDo you support online education or not?");
    *calculate_control = 1; // If calculate_control equals to 1, user can continue voting in main function.
}
    else{ 
    		printf("\nwrong password"); 
			}
		}
	
	else{
		printf("\nUser doesn't exist");
	}
	
	
    return 0;
} 




int calculator(char *vote_yes_or_no_calculate, int *yes_count_calculate, int *no_count_calculate, int *votecount_calculate,int *votecount_A_B_C_D_calculate){
	
    // If the votes of users are YES and users haven't voted yet, the votes of users are saved in main function.

	if(strcmp(vote_yes_or_no_calculate,"Yes")==0 && *votecount_A_B_C_D_calculate<1){
	*yes_count_calculate+=1;
	*votecount_calculate+=1;
	*votecount_A_B_C_D_calculate+=1;
	printf("\nYour vote has been recorded as 'YES'");
	
    // If the votes of users are NO and users haven't voted yet, the votes of users are saved in main function
} else if(strcmp(vote_yes_or_no_calculate,"No")==0 && *votecount_A_B_C_D_calculate<1){
	*no_count_calculate+=1;
	*votecount_calculate+=1;
	*votecount_A_B_C_D_calculate+=1;
	printf("\nYour vote has been recorded as 'NO'");
}
	// If users have already voted, they cannot vote one more.
	else if(*votecount_A_B_C_D_calculate != 0){
		printf("\nOne user can use only one vote!");
	}
	

else{
printf("There is no such a type of vote! Please enter 'Yes' or 'No'. Please login the system again and then vote correctly.");
}


return 0;

}
   

// This is our main function.

int main() 
{ 
    char username[15]; 
    char password[12];
	int yes_count = 0;
	int no_count = 0;
    char vote[10];
    int votecount = 0;
    int votecountA = 0;
    int votecountB = 0;
    int votecountC = 0;
    int votecountD = 0;
    int user_count = 4;
    int *yes_countp;
    yes_countp = &yes_count; // Saving the count of 'Yes' votes.
    int *no_countp;
    no_countp = &no_count; // Saving the count of 'No' votes.
    int *votecountp;
    votecountp = &votecount; // Saving the number of votes.
    int *votecountAp;
    votecountAp = &votecountA; // Saving user_A's vote count.
    int *votecountBp;
    votecountBp = &votecountB; // Saving user_B's vote count.
    int *votecountCp;
    votecountCp = &votecountC; // Saving user_C's vote count.
    int *votecountDp;
    votecountDp = &votecountD; // Saving user_D's vote count.
    int *user_countp;
    user_countp = &user_count; // Saving the total number of users.
    int control;
    int *controlp;
    controlp = &control; // If control equals to 1, the function continues with voting. Else the function continues to ask for username.
    
    
    printf("***** Welcome to the Elections of 2022 ????? *****");
    
    
    while(votecount<4){
    	
    	control = 0;
    	 
	printf("\nEnter your username:"); 
    scanf("%s",&username); 
 
    printf("\nEnter your password:"); 
    scanf("%s",&password);
    
    if(strcmp(username,"20201701066")==0){
    compare(username, password, votecountAp, controlp);
    }
    
    else if(strcmp(username,"20201701057")==0){
    compare(username, password, votecountBp, controlp);
    }
    
    else if(strcmp(username,"20201701031")==0){
    compare(username, password, votecountCp, controlp);
    }
    
    else if(strcmp(username,"20201701001")==0){
    compare(username, password, votecountDp, controlp);
    }
    
    else{
	printf("\nwrong username");
	}
    
    if (control == 1){
	
 	printf("\nEnter your vote:");
	scanf("%s", &vote);
	
	if(strcmp(username,"20201701066")==0){
    calculator(vote, yes_countp, no_countp, votecountp, votecountAp);
    }
    
    else if(strcmp(username,"20201701057")==0){
    calculator(vote, yes_countp, no_countp, votecountp, votecountBp);
    }
    
    else if(strcmp(username,"20201701031")==0){
    calculator(vote, yes_countp, no_countp, votecountp, votecountCp);
    }
    
    else if(strcmp(username,"20201701001")==0){
    calculator(vote, yes_countp, no_countp, votecountp, votecountDp);
    }
    
    else{
	printf("\nwrong username");
	}
	
// If the number of 'Yes' votes is bigger than the half of the number of users, the voting system ends.	
if(yes_count > (user_count/2)){
	
	break;
}
// If the number of 'No' votes is bigger than the half of the number of users, the voting system ends.
else if(no_count > (user_count/2)){
	
	break;
}
    
}

}
 the_result(yes_countp, no_countp);
 
    return 0; 
} 
