#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>
#include <stdlib.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048

// The function prints the results of the election by comparing vote of YES count and vote of NO count...
int the_result(int *yes_count_calculator, int *no_count_calculator, int *abstain_count_calculator){
	
	printf("\nResults of the election:");
 printf("\n  The number of 'YES' votes: %d",*yes_count_calculator);
 printf("\n  The number of 'NO' votes: %d",*no_count_calculator);
 printf("\n  The number of 'ABSTAIN' votes: %d",*abstain_count_calculator);
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



int compare(char *username_of_the_person, int *votecount_calculate, int *calculate_control, char *real_password, char *real_username){
	
	char password[MAX_LINE];
	printf("\nEnter your password:"); 
    fgets(password, MAX_LINE, stdin);
    
	int check;
	char check_str[10];
	
	if(strcmp(username_of_the_person, real_username)==0 && strcmp(password, real_password)==0){ 
 
        printf("\nWelcome.Login Success!");
    		printf("\nIf you want to use your vote, please enter 1\t");	
        	printf("\nIf you want to change your password, please enter 2\t");
        	
        	if(*votecount_calculate > 0){
			
        	printf("\nIf you want to change your vote, please enter 3\t");
        	}
        		
        	fgets(check_str, 10, stdin);
        	check = atoi(check_str);
        	
        	if(check == 1){
			
			*calculate_control = 1;
            printf("\nDo you support online education or not?");
        	 // If calculate_control equals to 1, user can continue voting in main function.
        	
        	}
        	else if(check == 2){
        		
        		*calculate_control = 2;
			// If calculate_control equals to 2, users can continue with changing their password in main function.

			}
			
			else if(check == 3 && *votecount_calculate > 0){
				
				*calculate_control = 3;
				// If calculate_control equals to 3, users can continue with changing their votes in main function.

			}
			else{
				printf("You typed invalid number. Please login again.");
			}
        	
				
			}
			
        	
        
    else if(strcmp(username_of_the_person, real_username)==0 && strcmp(password, real_password)==0){  
 
        printf("\nWelcome.Login Success!");
    		printf("\nIf you want to use your vote, please enter 1\t");	
        	printf("\nIf you want to change your password, please enter 2\t");
        	
        	if(*votecount_calculate > 0){
			
        	printf("\nIf you want to change your vote, please enter 3\t");
        	}
        	
        	fgets(check_str, 10, stdin);
        	check = atoi(check_str);
        	
        	if(check == 1){
        	
        	*calculate_control = 1;
            printf("\nDo you support online education or not?");
        	
        	
        	}
        	else if(check == 2){
        		
        		*calculate_control = 2;
			}
			
			else if(check == 3 && *votecount_calculate > 0){
				
				*calculate_control = 3;
			}
			else{
				printf("You typed invalid number. Please login again.");
			}
			
        	
				
			}
	
        
    else if(strcmp(username_of_the_person, real_username)==0 && strcmp(password, real_password)==0){ 
        
 
    printf("\nWelcome.Login Success!");
    		printf("\nIf you want to use your vote, please enter 1\t");
			printf("\nIf you want to change your password, please enter 2\t");	
        	
        	if(*votecount_calculate > 0){
			
        	printf("\nIf you want to change your vote, please enter 3\t");
        	}
        	
        	fgets(check_str, 10, stdin);
        	check = atoi(check_str);
        	
        	if(check == 1){
			
			*calculate_control = 1;
            printf("\nDo you support online education or not?");
        	
        	
        	}
        	else if(check == 2){
        		
        		*calculate_control = 2;
			}
			else if(check == 3 && *votecount_calculate > 0){
				
				*calculate_control = 3;
			}
			else{
				printf("You typed invalid number. Please login again.");
			}
        	
				
			}
	
    
    else if(strcmp(username_of_the_person, real_username)==0 && strcmp(password, real_password)==0){ 
    
    	
    printf("\nWelcome.Login Success!");
    		printf("\nIf you want to use your vote, please enter 1\t");	
        	printf("\nIf you want to change your password, please enter 2\t");
        	
        	if(*votecount_calculate > 0){
			
        	printf("\nIf you want to change your vote, please enter 3\t");
        	}
        	
        	fgets(check_str, 10, stdin);
        	check = atoi(check_str);
        	
        	if(check == 1){
			
			*calculate_control = 1;
            printf("\nDo you support online education or not?");
        	
        	
        	}
        	else if(check == 2){
        		
        	*calculate_control = 2;
			}
			
			else if(check == 3 && *votecount_calculate > 0){
				
				*calculate_control = 3;
			}
			else{
				printf("You typed invalid number. Please login again.");
			}
        
				
			}
	
	else{
		printf("\nWrong password");
		
	}
	
	
    return 0;
} 




int calculator(int *user_count, int abcds, char *username_of_the_person, char *vote_yes_or_no_calculate, int *yes_count_calculate, int *no_count_calculate, int *abstain_count_calculate, int *votecount_calculate, int *votecount_A_B_C_D_calculate, FILE *yes_votes_file_p, FILE *no_votes_file_p, FILE *abstain_votes_file_p, FILE *checkp, FILE *vote_of_people, char *Yes, char *No, char *Abstain, char *real_username, FILE *countA_p, FILE *countB_p, FILE *countC_p, FILE *countD_p, FILE *vote_of_user_Ap, FILE *vote_of_user_Bp, FILE *vote_of_user_Cp, FILE *vote_of_user_Dp, FILE *user_count_textp ){
	
    // If the votes of users are YES and users haven't voted yet, the votes of users are saved in main function.

	if(strcmp(vote_yes_or_no_calculate, Yes)==0 && *votecount_A_B_C_D_calculate<1){
	*yes_count_calculate+=1;
	*votecount_calculate+=1;
	*votecount_A_B_C_D_calculate+=1;
	yes_votes_file_p = fopen("yesvotes.txt", "a+");
	fputs("Yes", yes_votes_file_p);
	fclose(yes_votes_file_p);
	
	int y = strcmp(username_of_the_person, real_username);
	
	
	
	if(abcds == 1){
	
    countA_p = fopen("countA.txt", "w+");
    
    fputs("1", countA_p);
    
    fclose(countA_p);
	
	FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
	
	}
	
	else if(abcds == 2){
	
    countB_p = fopen("countB.txt", "w+");
    
    fputs("1", countB_p);
    
    fclose(countB_p);
	
	FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
	
	}
	
	else if(abcds == 3){
		
    countC_p = fopen("countC.txt", "w+");
    
    fputs("1", countC_p);
    
    fclose(countC_p);
	
	FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
	
	}
		
	else if(abcds == 4){
		
	
    countD_p = fopen("countD.txt", "w+");
    
    fputs("1", countD_p);
    
    fclose(countD_p);
	
	FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
	
	}
	printf("\nYour vote has been recorded as 'YES'");
	
	}
	
    // If the votes of users are NO and users haven't voted yet, the votes of users are saved in main function
    
 	else if(strcmp(vote_yes_or_no_calculate, No)==0 && *votecount_A_B_C_D_calculate<1){
	*no_count_calculate+=1;
	*votecount_calculate+=1;
	*votecount_A_B_C_D_calculate+=1;
	no_votes_file_p = fopen("novotes.txt", "a+");
	fputs("No", no_votes_file_p);
	fclose(no_votes_file_p);
	
		if(abcds == 1){
	
	
    countA_p = fopen("countA.txt", "w+");
    
    fputs("1", countA_p);
    
    fclose(countA_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("No\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
	
	}
	
	else if(abcds == 2){
	
    countB_p = fopen("countB.txt", "w+");
    
    fputs("1", countB_p);
    
    fclose(countB_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("No\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
	
	}
	
	else if(abcds == 3){
		
    countC_p = fopen("countC.txt", "w+");
    
    fputs("1", countC_p);
    
    fclose(countC_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("No\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
	
	}
		
	else if(abcds == 4){
	
    countD_p = fopen("countD.txt", "w+");
    
    fputs("1", countD_p);
    
    fclose(countD_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("No\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
	
	}
	

	printf("\nYour vote has been recorded as 'NO'");
}
    	// If the votes of users are ABSTAIN and users haven't voted yet, the votes of users are saved in main function


	else if(strcmp(vote_yes_or_no_calculate, "Abstain\n")==0 && *votecount_A_B_C_D_calculate<1){
	*abstain_count_calculate+=1;
	*votecount_calculate+=1;
	*votecount_A_B_C_D_calculate+=1;
	*user_count-=1;
	
	char user_count_temp_2[10];
	
	itoa(*user_count, user_count_temp_2, 10);
	
	user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_2, user_count_textp);
    fclose(user_count_textp);
	
	abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
	fputs("Abstain", abstain_votes_file_p);
	fclose(abstain_votes_file_p);
	
	if(abcds == 1){
	
	
    countA_p = fopen("countA.txt", "w+");
    
    fputs("1", countA_p);
    
    fclose(countA_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
	
	}
	
	else if(abcds == 2){
	
    countB_p = fopen("countB.txt", "w+");
    
    fputs("1", countB_p);
    
    fclose(countB_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	}
	
	else if(abcds == 3){
		
    countC_p = fopen("countC.txt", "w+");
    
    fputs("1", countC_p);
    
    fclose(countC_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
	
	}
		
	else if(abcds == 4){
	
    countD_p = fopen("countD.txt", "w+");
    
    fputs("1", countD_p);
    
    fclose(countD_p);
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	rewind(checkp);
	fclose(checkp);
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
	
	}
	
	printf("\nYour vote has been recorded as 'ABSTAIN'");
	
	}
	// If users have already voted, they cannot vote one more.
	else if(*votecount_A_B_C_D_calculate != 0){
		printf("\nOne user can use only one vote!");
	}
	

else{
printf("There is no such a type of vote! Please enter 'Yes', 'Abstain' or 'No'. Please login the system again and then vote correctly.");
}

return 0;

}
   

int main()
 
{ 	
	int c;
	FILE *checkp;
	checkp = fopen("check.txt", "r+");
	fscanf(checkp, "%d", &c);
	fclose(checkp);
    
    FILE *username_file_p;
    FILE *allvotesp;
    char Yes[10];
    char No[10];
    char Abstain[10];
    
    allvotesp = fopen("allvotes.txt", "w");
    fputs("Yes", allvotesp);
    fputs("\nNo", allvotesp);
    fputs("\nAbstain", allvotesp);
    fclose(allvotesp);
    
    allvotesp = fopen("allvotes.txt", "r+");
    fgets(Yes, 10, allvotesp);
    fgets(No, 10, allvotesp);
    fgets(Abstain, 10, allvotesp);
    fclose(allvotesp);
	
	username_file_p = fopen("usernames.txt", "w");
    fputs("20201701066", username_file_p);
    fputs("\n20201701057", username_file_p);
    fputs("\n20201701031", username_file_p);
    fputs("\n20201701001\n", username_file_p);
    fclose(username_file_p);
    
    char username_A[MAX_LINE];
    char username_B[MAX_LINE];
    char username_C[MAX_LINE];
    char username_D[MAX_LINE];
    
    username_file_p = fopen("usernames.txt", "r+");
    
    fgets(username_A, MAX_LINE, username_file_p);
    fgets(username_B, MAX_LINE, username_file_p);
    fgets(username_C, MAX_LINE, username_file_p);
    fgets(username_D, MAX_LINE, username_file_p);
    
 
    fclose(username_file_p);
    
	char password_A[20]; 
    char password_B[20]; 
    char password_C[20]; 
    char password_D[20];
    
    char new_password_A[MAX_LINE];
    char new_password_B[MAX_LINE];
    char new_password_C[MAX_LINE];
    char new_password_D[MAX_LINE];
    
    int yes_vote_counter;
    int no_vote_counter;
    int abstain_vote_counter;
    
    char yesvotesstring[100];
    char novotesstring[100];
    char abstainvotesstring[100];
    
    char new_vote[10];
    char username[MAX_LINE]; 
	int yes_count = 0;
	int no_count = 0;
	int abstain_count = 0;
    char voteA[10];
    char voteB[10];
    char voteC[10];
    char voteD[10];
    int votecount ;
    int votecountA;
    int votecountB;
    int votecountC;
    int votecountD;
    int *yes_countp;
    yes_countp = &yes_count; 
    int *no_countp;
    no_countp = &no_count; 
    int *abstain_countp;
    abstain_countp = &abstain_count;
    int *votecountp;
    votecountp = &votecount; 
    int *votecountAp;
    votecountAp = &votecountA; 
    int *votecountBp;
    votecountBp = &votecountB; 
    int *votecountCp;
    votecountCp = &votecountC; 
    int *votecountDp;
    votecountDp = &votecountD;  
    int control;
    int *controlp;
    controlp = &control;
    
    FILE *password_file_p;
    FILE *yes_votes_file_p;
    FILE *no_votes_file_p;
    FILE *abstain_votes_file_p;
    FILE *countA_p;    
    FILE *countB_p;
    FILE *countC_p;
    FILE *countD_p;
	FILE *vote_of_user_Ap;
    FILE *vote_of_user_Bp;
    FILE *vote_of_user_Cp;
    FILE *vote_of_user_Dp;
    FILE *user_count_textp;
    
    int user_count;
    int *user_countp;
    user_countp = &user_count;
    
    
	
	// If c is not equal to 1 then the program is initialized.
	// c != 1 means that nobody voted or changed their password.
	if(c != 1){

	yes_count = 0;
	no_count = 0;
	abstain_count = 0;
	votecount = 0;
    votecountA = 0;
    votecountB = 0;
    votecountC = 0;
    votecountD = 0;
    user_count = 4;
    controlp = &control; 

    
    FILE *user_count_textp;
    user_count_textp = fopen("usercount.txt", "w");
    fputs("4", user_count_textp);
    fclose(user_count_textp);
    
    password_file_p = fopen("passwords.txt", "w");
    fputs("1923", password_file_p);
    fputs("\n2002", password_file_p);
    fputs("\ndogu", password_file_p);
    fputs("\nsafak\n", password_file_p);
    fclose(password_file_p);
    
    password_file_p = fopen("passwords.txt", "r+");
    fgets(password_A, 20, password_file_p);
    fgets(password_B, 20, password_file_p);
    fgets(password_C, 20, password_file_p);
    fgets(password_D, 20, password_file_p);
    
    fclose(password_file_p);
    
    countA_p = fopen("countA.txt", "w+");
    
    fputs("0", countA_p);
    
    fclose(countA_p);
    
    countB_p = fopen("countB.txt", "w+");
    
    fputs("0", countB_p);
    
    fclose(countB_p);
    
    countC_p = fopen("countC.txt", "w+");
    
    fputs("0", countC_p);
    
    fclose(countC_p);
    
    countD_p = fopen("countD.txt", "w+");
    
    fputs("0", countD_p);
    
    fclose(countD_p);
     
    vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
    
    vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
    vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
    
    vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);

}

else{
	
	FILE *username_file_p;
    FILE *password_file_p;
    FILE *yes_votes_file_p;
    FILE *no_votes_file_p;
    FILE *abstain_votes_file_p;
    FILE *counts_p;
    FILE *user_count_textp;
    char temp_user_count[10];
    
    user_count_textp = fopen("usercount.txt", "r+");
    fgets(temp_user_count, 10, user_count_textp);
    
    user_count = atoi(temp_user_count);
   
   
    fclose(user_count_textp);
    
    username_file_p = fopen("usernames.txt", "r+");
	fgets(username_A, MAX_LINE, username_file_p);
    fgets(username_B, MAX_LINE, username_file_p);
    fgets(username_C, MAX_LINE, username_file_p);
    fgets(username_D, MAX_LINE, username_file_p);
    
    fclose(username_file_p);
    
    char check_password_A_2[20]; 
    char check_password_B_2[20]; 
    char check_password_C_2[20]; 
    char check_password_D_2[20];
    
	password_file_p = fopen("passwords.txt", "r+");
	
	fgets(check_password_A_2, 20, password_file_p);
	fgets(check_password_B_2, 20, password_file_p);
	fgets(check_password_C_2, 20, password_file_p);
	fgets(check_password_D_2, 20, password_file_p);
	
	password_A[0] = '\0';
	
	strcpy(password_A, check_password_A_2);
	
	check_password_A_2[0] ='\0';
	
	password_B[0] = '\0';
	
	strcpy(password_B, check_password_B_2);
	
	check_password_B_2[0] ='\0';
	
	password_C[0] = '\0';
	
	strcpy(password_C, check_password_C_2);
	
	check_password_C_2[0] ='\0';
	
	password_D[0] = '\0';
	
	strcpy(password_D, check_password_D_2);
	
	check_password_D_2[0] ='\0';
	
	
	fclose(password_file_p);
	
	char tempvotecountA[10];
	char tempvotecountB[10];
	char tempvotecountC[10];
	char tempvotecountD[10];
	
	countA_p = fopen("countA.txt", "r+");
    
    fgets(tempvotecountA, 10, countA_p);
    
    fclose(countA_p);
    
    countB_p = fopen("countB.txt", "r+");
    
    fgets(tempvotecountB, 10, countB_p);
    
    fclose(countB_p);
    
    countC_p = fopen("countC.txt", "r+");
    
    fgets(tempvotecountC, 10, countC_p);
    
    fclose(countC_p);
    
    countD_p = fopen("countD.txt", "r+");
    
    fgets(tempvotecountD, 10, countD_p);
    
    fclose(countD_p);
    
    votecountA = atoi(tempvotecountA);
    votecountB = atoi(tempvotecountB);
    votecountC = atoi(tempvotecountC);
    votecountD = atoi(tempvotecountD);
    
	// To find the number of 'yes/no/abstain' votes, the program gets the strings from the file and divides the length of strings to their letter numbers.

    
	yes_votes_file_p = fopen("yesvotes.txt", "r+");
	fgets(yesvotesstring, 100, yes_votes_file_p);
	yes_vote_counter = strlen(yesvotesstring) / 3;
	fclose(yes_votes_file_p);
	
	no_votes_file_p = fopen("novotes.txt", "r+");
	fgets(novotesstring, 100, no_votes_file_p);
	no_vote_counter = strlen(novotesstring) / 2;
	fclose(no_votes_file_p);
	
	abstain_votes_file_p = fopen("abstainvotes.txt", "r+");
	fgets(abstainvotesstring, 100, abstain_votes_file_p);
	abstain_vote_counter = strlen(abstainvotesstring) / 7;
	fclose(abstain_votes_file_p);
	
	yes_count = yes_vote_counter;
	no_count = no_vote_counter;
	abstain_count = abstain_vote_counter;
	votecount = yes_count + no_count + abstain_count;
	
	
	
	char check_vote_A[10];
    char check_vote_B[10];
    char check_vote_C[10];
    char check_vote_D[10];
    
	vote_of_user_Ap = fopen("userAvote.txt", "r+");
	fgets(voteA, 10, vote_of_user_Ap);
	fclose(vote_of_user_Ap);
	
	vote_of_user_Bp = fopen("userBvote.txt", "r+");
	fgets(voteB, 10, vote_of_user_Bp);
	
	fclose(vote_of_user_Bp);
	
	vote_of_user_Cp = fopen("userCvote.txt", "r+");
	fgets(voteC, 10, vote_of_user_Cp);
	
	fclose(vote_of_user_Cp);
	

	vote_of_user_Dp = fopen("userDvote.txt", "r+");
	fgets(voteD, 10, vote_of_user_Dp);
	
	fclose(vote_of_user_Dp);
	
	
}
    printf("***** Welcome to the Elections of 2022 *****");
    
    
    while(votecount < 4){
    	
    // If the number of 'Yes' votes is bigger than the half of the number of users, the voting system ends.	
	if(yes_count > (user_count/2)){
	
		break;
		}
	// If the number of 'No' votes is bigger than the half of the number of users, the voting system ends.
	else if(no_count > (user_count/2)){
	
	break;
	}
    	

	
	printf("\nYou have turned to main session\n");
	control = 0;
	
	printf("Enter your username:\n"); 
    fgets(username, MAX_LINE, stdin);
    
    if(strcmp(username, username_A)==0){
    compare(username, votecountAp, controlp, password_A, username_A);
    }
    
    else if(strcmp(username, username_B)==0){
    compare(username, votecountBp, controlp, password_B, username_B);
    }
    
    else if(strcmp(username, username_C)==0){
    compare(username, votecountCp, controlp, password_C, username_C);
    }
    
    else if(strcmp(username, username_D)==0){
    compare(username, votecountDp, controlp, password_D, username_D);
    }
    
    else{
	printf("\nwrong username");
	}
    
    // CONTROL 1 STARTS
    
    if (control == 1){
    	
	
	
	if(strcmp(username, username_A)==0){
	int as;
	as = 1;
	printf("\nEnter your vote:");
	fgets(voteA, BUFSIZ, stdin);
    calculator(user_countp, as, username, voteA, yes_countp, no_countp, abstain_countp, votecountp, votecountAp, yes_votes_file_p, no_votes_file_p, abstain_votes_file_p, checkp, vote_of_user_Ap, Yes, No, Abstain, username_A, countA_p, countB_p, countC_p, countD_p, vote_of_user_Ap, vote_of_user_Bp, vote_of_user_Cp, vote_of_user_Dp, user_count_textp);

    }
    
    else if(strcmp(username, username_B)==0){
    int bs;
	bs = 2;
    printf("\nEnter your vote:");
	fgets(voteB, BUFSIZ, stdin);
	
    calculator(user_countp, bs, username, voteB, yes_countp, no_countp, abstain_countp, votecountp, votecountBp, yes_votes_file_p, no_votes_file_p, abstain_votes_file_p, checkp, vote_of_user_Bp, Yes, No, Abstain, username_B, countA_p, countB_p, countC_p, countD_p, vote_of_user_Ap, vote_of_user_Bp, vote_of_user_Cp, vote_of_user_Dp, user_count_textp);
    }
    
    else if(strcmp(username, username_C)==0){
    int cs;
	cs = 3;
    printf("\nEnter your vote:");
	fgets(voteC, BUFSIZ, stdin);
	
    calculator(user_countp, cs, username, voteC, yes_countp, no_countp, abstain_countp, votecountp, votecountCp, yes_votes_file_p, no_votes_file_p, abstain_votes_file_p,  checkp, vote_of_user_Cp, Yes, No, Abstain, username_C, countA_p, countB_p, countC_p, countD_p, vote_of_user_Ap, vote_of_user_Bp, vote_of_user_Cp, vote_of_user_Dp, user_count_textp);
    }
    
    else if(strcmp(username, username_D)==0){
	int ds;
	ds = 4;
    printf("\nEnter your vote:");
	fgets(voteD, BUFSIZ, stdin);
	
    calculator(user_countp, ds, username, voteD, yes_countp, no_countp, abstain_countp, votecountp, votecountDp, yes_votes_file_p, no_votes_file_p, abstain_votes_file_p, checkp, vote_of_user_Dp, Yes, No, Abstain, username_D, countA_p, countB_p, countC_p, countD_p, vote_of_user_Ap, vote_of_user_Bp, vote_of_user_Cp, vote_of_user_Dp, user_count_textp);
    }
    
    
    else{
    	printf("It is not confirmed, please login again from main session");
	}
    
}
	
	// CONTROL 2 STARTS
	
	else if(control == 2){
	
	int i;
	
	char temp_pass_A[20];
	char temp_pass_B[20];
	char temp_pass_C[20];
	char temp_pass_D[20];
	
	if(strcmp(username, username_A)==0){
		
	
	for(i = 0; i != 1; i--){
		
	
	  FILE *temp;

  char filename[FILENAME_SIZE] = "passwords.txt";
  char temp_filename[FILENAME_SIZE] = "temp_passwords.txt";
  
  char buffer[MAX_LINE];

  char replace[MAX_LINE];

  int replace_line = 1;

  fflush(stdin);
  
  printf("Please enter your new password: ");
  fgets(replace, MAX_LINE, stdin);
  
  printf("\nEnter your new password again to confirm: ");
	fgets(new_password_A, MAX_LINE, stdin); 
	
	if(strcmp(replace, new_password_A) != 0){
	
	printf("Wrong matching\n");	
	
	continue;
	}
	
	password_A[0] = '\0';
	
	strcpy(password_A, new_password_A);
	
	new_password_A[0] ='\0';
  
  password_file_p = fopen(filename, "r+");
  temp = fopen(temp_filename, "w");
  
  if (password_file_p == NULL || temp == NULL)
  {
    printf("Error opening files(s).\n");
    return 1;
  }
  

  bool keep_reading = true;


  int current_line = 1;

  do 
  {

    fgets(buffer, MAX_LINE, password_file_p);
    

    if (feof(password_file_p)) keep_reading = false;

    else if (current_line == replace_line)
      fputs(replace, temp);

    else fputs(buffer, temp);
    
    
    current_line++;

  } while (keep_reading);
  

  fclose(password_file_p);
  fclose(temp);
  

  remove(filename);
  rename(temp_filename, filename);
		
	
	FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	
	rewind(checkp);
	fclose(checkp);
	
	
	break;
	}
	
	
    }
    
    else if(strcmp(username, username_B)==0){
		
	for(i = 0; i != 1; i--){
	
		FILE *temp;

  char filename[FILENAME_SIZE] = "passwords.txt";
  char temp_filename[FILENAME_SIZE] = "temp_passwords.txt";
  
  char buffer[MAX_LINE];

  char replace[MAX_LINE];

  int replace_line = 2;

  fflush(stdin);
  
  printf("Please enter your new password: ");
  fgets(replace, MAX_LINE, stdin);
  
  printf("\nEnter your new password again to confirm:");
	fgets(new_password_B, MAX_LINE, stdin); 
  
  if(strcmp(replace, new_password_B) != 0){
  	
	printf("Wrong matching\n");	
	
	continue;
  }
  
  password_file_p = fopen(filename, "r+");
  temp = fopen(temp_filename, "w");
  
  if (password_file_p == NULL || temp == NULL)
  {
    printf("Error opening files(s).\n");
    return 1;
  }
  

  bool keep_reading = true;


  int current_line = 1;

  do 
  {

    fgets(buffer, MAX_LINE, password_file_p);
    

    if (feof(password_file_p)) keep_reading = false;

    else if (current_line == replace_line)
      fputs(replace, temp);

    else fputs(buffer, temp);
    
    
    current_line++;

  } while (keep_reading);
  

  fclose(password_file_p);
  fclose(temp);
  

  remove(filename);
  rename(temp_filename, filename);
  
		
	password_B[0] = '\0';
	
	strcpy(password_B, new_password_B);
	
	new_password_B[0] ='\0';
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	
	rewind(checkp);
	fclose(checkp);
	
	break;
	}
	
    }
    
    else if(strcmp(username, username_C)==0){
    	
    for(i = 0; i != 1; i--){
    	
	
    
	  FILE *temp;

  char filename[FILENAME_SIZE] = "passwords.txt";
  char temp_filename[FILENAME_SIZE] = "temp_passwords.txt";
  
  char buffer[MAX_LINE];

  char replace[MAX_LINE];

  int replace_line = 3;

  fflush(stdin);
  
  printf("Please enter your new password: ");
  fgets(replace, MAX_LINE, stdin);
  
  printf("\nEnter your new password again to confirm:");
	fgets(new_password_C, MAX_LINE, stdin);
  
    if(strcmp(replace, new_password_C)!= 0){
  	
	printf("Wrong matching\n");	
	
	continue;
  }
  
  password_file_p = fopen(filename, "r+");
  temp = fopen(temp_filename, "w");
  
  if (password_file_p == NULL || temp == NULL)
  {
    printf("Error opening files(s).\n");
    return 1;
  }
  

  bool keep_reading = true;


  int current_line = 1;

  do 
  {

    fgets(buffer, MAX_LINE, password_file_p);
    

    if (feof(password_file_p)) keep_reading = false;

    else if (current_line == replace_line)
      fputs(replace, temp);

    else fputs(buffer, temp);
    
    
    current_line++;

  } while (keep_reading);
  

  fclose(password_file_p);
  fclose(temp);
  

  remove(filename);
  rename(temp_filename, filename);
  
		
	password_C[0] = '\0';
	
	strcpy(password_C, new_password_C);
	
	new_password_C[0] ='\0';
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	
	rewind(checkp);
	fclose(checkp);
	break;
	}
	
	}
    
    else if(strcmp(username, username_D)==0){
    
    for(i = 0; i != 1; i--){
    	
    
	  FILE *temp;

  char filename[FILENAME_SIZE] = "passwords.txt";
  char temp_filename[FILENAME_SIZE] = "temp_passwords.txt";
  
  char buffer[MAX_LINE];

  char replace[MAX_LINE];

  int replace_line = 4;

  fflush(stdin);
  
  printf("Please enter your new password:");
  fgets(replace, MAX_LINE, stdin);
  
  	printf("\nEnter your new password again to confirm:");
	fgets(new_password_D, MAX_LINE, stdin);
	
	if(strcmp(replace, new_password_D)!= 0){
  	
	printf("Wrong matching\n");	
	
	continue;
  }
  
  password_file_p = fopen(filename, "r+");
  temp = fopen(temp_filename, "w");
  
  if (password_file_p == NULL || temp == NULL)
  {
    printf("Error opening files(s).\n");
    return 1;
  }
  

  bool keep_reading = true;


  int current_line = 1;

  do 
  {

    fgets(buffer, MAX_LINE, password_file_p);
    

    if (feof(password_file_p)) keep_reading = false;

    else if (current_line == replace_line)
      fputs(replace, temp);

    else fputs(buffer, temp);
    
    
    current_line++;

  } while (keep_reading);
  

  fclose(password_file_p);
  fclose(temp);
  

  remove(filename);
  rename(temp_filename, filename);
		
	password_D[0] = '\0';
	
	strcpy(password_D, new_password_D);
	
	new_password_D[0]='\0';
	
		FILE *checkp;
	checkp = fopen("check.txt", "w+");
	fputs("1", checkp);
	
	rewind(checkp);
	fclose(checkp);
	break;
	}
	
    }
}

// CONTROL 3 STARTS

	else if(control == 3){
		
		char changing[20];
		
			//CHANGE THE VOTE OF A
			
		if(strcmp(username, username_A)==0){
		
    printf("\nEnter your new vote:\n");
	fgets(new_vote, 10, stdin);
	
	int i = strcmp(voteA, Yes);
	
	if(strcmp(voteA, Yes)==0 && strcmp(new_vote, No)==0){
		
		yes_count--;
		no_count++;
		
	yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);
// n is 3 here because it represents 'yes'.

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("No\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
	
	printf("Your vote has been changed as 'NO'");
	}
	
	else if(strcmp(voteA, No)==0 && strcmp(new_vote, Yes)==0){
		no_count--;
		yes_count++;
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

// n is 2 here because it represents 'no'.

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);
		
changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
    
	printf("Your vote has been changed as 'YES'");			
	}
	
	else if(strcmp(voteA, "Abstain\n")==0 && strcmp(new_vote, Yes)==0){
		
		user_count++;
		yes_count++;
		abstain_count--;
	
	char user_count_temp_3[10];
	
	itoa(user_count, user_count_temp_3, 10);
	
	user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_3, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

// n is 7 here because it represents 'abstain'.

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);

changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
    
	printf("Your vote has been changed as 'YES'");
}
	
	else if(strcmp(voteA, "Abstain\n")==0 && strcmp(new_vote, No)==0){
		
		user_count++;
		
		no_count++;
		abstain_count--;
		
			char user_count_temp_4[10];
	
	itoa(user_count, user_count_temp_4, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_4, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No\n", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	printf("Your vote has been changed as 'NO'");
}

	else if(strcmp(voteA, Yes)==0 && strcmp(new_vote, "Abstain\n")==0){
		yes_count--;
		abstain_count++;
		user_count--;
		
					char user_count_temp_5[10];
	
	itoa(user_count, user_count_temp_5, 10);
	
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_5, user_count_textp);
    fclose(user_count_textp);
    
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("No\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else if(strcmp(voteA, No)==0 && strcmp(new_vote, "Abstain\n")==0){
		no_count--;
		abstain_count++;
		user_count--;
		
		char user_count_temp_6[10];
	
	itoa(user_count, user_count_temp_6, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_6, user_count_textp);
    fclose(user_count_textp);
    
		no_votes_file_p = fopen("novotes.txt", "r+");
		

fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';
		
	voteA[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Ap = fopen("userAvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Ap);
    fclose(vote_of_user_Ap);
	
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else{
		printf("It seems that you tried to vote as the same again or used invalid vote");
	}
	
	
    }
    
    	//CHANGE THE VOTE OF B
    	
    else if(strcmp(username, username_B)==0){
    	
    
        printf("\nEnter your new vote:\n");
	fgets(new_vote, 10, stdin);
	
	if(strcmp(voteB, Yes)==0 && strcmp(new_vote, No)==0){
		
		yes_count--;
		no_count++;
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("No\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
	
	printf("Your vote has been changed as 'NO'");
	}
	
	else if(strcmp(voteB, No)==0 && strcmp(new_vote, Yes)==0){
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);
		
changing[0] = '\0';

		no_count--;
		yes_count++;
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	printf("Your vote has been changed as 'YES'");			
	}
	
	else if(strcmp(voteB, "Abstain\n")==0 && strcmp(new_vote, Yes)==0){
		
		user_count++;
		
			char user_count_temp_7[10];
	
	itoa(user_count, user_count_temp_7, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_7, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);

changing[0] = '\0';

		yes_count++;
		abstain_count--;
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	printf("Your vote has been changed as 'YES'");
}
	
	else if(strcmp(voteB, "Abstain\n")==0 && strcmp(new_vote, No)==0){
		
		user_count++;
		
			char user_count_temp_8[10];
	
	itoa(user_count, user_count_temp_8, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_8, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';

		no_count++;
		abstain_count--;
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("No\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	printf("Your vote has been changed as 'NO'");
}

	else if(strcmp(voteB, Yes)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
					char user_count_temp_9[10];
	
	itoa(user_count, user_count_temp_9, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_9, user_count_textp);
    fclose(user_count_textp);
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		yes_count--;
		abstain_count++;
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else if(strcmp(voteB, No)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
		char user_count_temp_10[10];
	
	itoa(user_count, user_count_temp_10, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_10, user_count_textp);
    fclose(user_count_textp);
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		no_count--;
		abstain_count++;
		
	voteB[0] = '\0';
	
	strcpy(voteB, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Bp = fopen("userBvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Bp);
    fclose(vote_of_user_Bp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else{
		printf("It seems that you tried to vote as the same again or used invalid vote");
	}
	
	    }
    
    	//CHANGE THE VOTE OF C
    	
    else if(strcmp(username, username_C)==0){
    	
        printf("\nEnter your new vote:\n");
	fgets(new_vote, 10, stdin);
	
	if(strcmp(voteC, Yes)==0 && strcmp(new_vote, No)==0){
		
		yes_count--;
		no_count++;
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';
		
	voteC[0] = '\0';
	
	strcpy(voteC, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("No\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
	
	printf("Your vote has been changed as 'NO'");
	}
	
	else if(strcmp(voteC, No)==0 && strcmp(new_vote, Yes)==0){
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);
		
changing[0] = '\0';

		no_count--;
		yes_count++;
		
	voteC[0] = '\0';
	
	strcpy(voteC, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);

	printf("Your vote has been changed as 'YES'");			
	}
	
	else if(strcmp(voteC, "Abstain\n")==0 && strcmp(new_vote, Yes)==0){
		
		user_count++;
		
				char user_count_temp_11[10];
	
	itoa(user_count, user_count_temp_11, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_11, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);

changing[0] = '\0';

		yes_count++;
		abstain_count--;
		
	voteC[0] = '\0';
	
	strcpy(voteA, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
    
	printf("Your vote has been changed as 'YES'");
}
	
	else if(strcmp(voteC, "Abstain\n")==0 && strcmp(new_vote, No)==0){
		
		user_count++;
		
		char user_count_temp_12[10];
	
	itoa(user_count, user_count_temp_12, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_12, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';

		no_count++;
		abstain_count--;
		
	voteC[0] = '\0';
	
	strcpy(voteC, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("No\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
    
	printf("Your vote has been changed as 'NO'");
}

	else if(strcmp(voteC, Yes)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
				char user_count_temp_13[10];
	
	itoa(user_count, user_count_temp_13, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_13, user_count_textp);
    fclose(user_count_textp);
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		yes_count--;
		abstain_count++;
		
	voteC[0] = '\0';
	
	strcpy(voteC, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else if(strcmp(voteC, No)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
		char user_count_temp_14[10];
	
	itoa(user_count, user_count_temp_14, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_14, user_count_textp);
    fclose(user_count_textp);
		
		no_votes_file_p = fopen("novotes.txt", "r+");

		
fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		no_count--;
		abstain_count++;
		
	voteC[0] = '\0';
	
	strcpy(voteC, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Cp = fopen("userCvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Cp);
    fclose(vote_of_user_Cp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else{
		printf("It seems that you tried to vote as the same again or used invalid vote");
	}
}
	
	//CHANGE THE VOTE OF D
	
	else if(strcmp(username, username_D)==0){
    	
    printf("\nEnter your new vote:\n");
	fgets(new_vote, 10, stdin);
	
	if(strcmp(voteD, Yes)==0 && strcmp(new_vote, No)==0){
		
		yes_count--;
		no_count++;
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';

		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("No\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
	
	printf("Your vote has been changed as 'NO'");
	}
	
	else if(strcmp(voteD, No)==0 && strcmp(new_vote, Yes)==0){
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);
		
changing[0] = '\0';

		no_count--;
		yes_count++;
		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
    
	printf("Your vote has been changed as 'YES'");			
	}
	
	else if(strcmp(voteD, "Abstain\n")==0 && strcmp(new_vote, Yes)==0){
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");
		user_count++;
		
		char user_count_temp_15[10];
	
	itoa(user_count, user_count_temp_15, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_15, user_count_textp);
    fclose(user_count_textp);


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

yes_votes_file_p = fopen("yesvotes.txt", "a+");
fputs("Yes", yes_votes_file_p);
fclose(yes_votes_file_p);

changing[0] = '\0';

		yes_count++;
		abstain_count--;
		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Yes\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
    
	printf("Your vote has been changed as 'YES'");
}
	
	else if(strcmp(voteD, "Abstain\n")==0 && strcmp(new_vote, No)==0){
		
		user_count++;
		
		char user_count_temp_16[10];
	
	itoa(user_count, user_count_temp_16, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_16, user_count_textp);
    fclose(user_count_textp);
		
		abstain_votes_file_p = fopen("abstainvotes.txt", "r+");


fgets(changing, 20, abstain_votes_file_p);

int p = 1;
int n = 7;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(abstain_votes_file_p);
fopen("abstainvotes.txt", "w+");

fputs(changing, abstain_votes_file_p);
fclose(abstain_votes_file_p);

no_votes_file_p = fopen("novotes.txt", "a+");
fputs("No", no_votes_file_p);
fclose(no_votes_file_p);

changing[0] = '\0';

		no_count++;
		abstain_count--;
		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("No\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
    
	printf("Your vote has been changed as 'NO'");
}

	else if(strcmp(voteD, Yes)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
		char user_count_temp_17[10];
	
	itoa(user_count, user_count_temp_17, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_17, user_count_textp);
    fclose(user_count_textp);
		
		yes_votes_file_p = fopen("yesvotes.txt", "r+");


fgets(changing, 20, yes_votes_file_p);

int p = 1;
int n = 3;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(yes_votes_file_p);
fopen("yesvotes.txt", "w+");

fputs(changing, yes_votes_file_p);
fclose(yes_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		yes_count--;
		abstain_count++;
		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else if(strcmp(voteD, No)==0 && strcmp(new_vote, "Abstain\n")==0){
		
		user_count--;
		
			char user_count_temp_18[10];
	
	itoa(user_count, user_count_temp_18, 10);
		
			user_count_textp = fopen("usercount.txt", "r+");
    fputs(user_count_temp_18, user_count_textp);
    fclose(user_count_textp);
		
		no_votes_file_p = fopen("novotes.txt", "r+");


fgets(changing, 20, no_votes_file_p);

int p = 1;
int n = 2;

int i,j;
   for(i=0,j=0;changing[i]!='\0';i++,j++){
      if(i==(p-1)){
         i=i+n;
      }
      changing[j]=changing[i];
   }
   changing[j]='\0';

fclose(no_votes_file_p);
fopen("novotes.txt", "w+");

fputs(changing, no_votes_file_p);
fclose(no_votes_file_p);

abstain_votes_file_p = fopen("abstainvotes.txt", "a+");
fputs("Abstain", abstain_votes_file_p);
fclose(abstain_votes_file_p);

changing[0] = '\0';

		no_count--;
		abstain_count++;
		
	voteD[0] = '\0';
	
	strcpy(voteD, new_vote);
	
	new_vote[0] ='\0';
	
	vote_of_user_Dp = fopen("userDvote.txt", "w+");
    fputs("Abstain\n", vote_of_user_Dp);
    fclose(vote_of_user_Dp);
    
	printf("Your vote has been changed as 'ABSTAIN'");
}
	else{
		printf("It seems that you tried to vote as the same again or used invalid vote");
	}
	}
}
	
    
}


 the_result(yes_countp, no_countp, abstain_countp);
 
remove("check.txt");
remove("counts.txt");
remove("passwords.txt");
remove("usernames.txt");
remove("novotes.txt");
remove("abstainvotes.txt");
remove("yesvotes.txt");
remove("userAvote.txt");
remove("userBvote.txt");
remove("userCvote.txt");
remove("userDvote.txt");
remove("allvotes.txt");
remove("countA.txt");
remove("countB.txt");
remove("countC.txt");
remove("countD.txt");
remove("usercount.txt");
 
    return 0; 
} 