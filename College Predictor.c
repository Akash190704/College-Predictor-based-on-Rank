#include <stdio.h>
#include <string.h>
#define NUM_CATEGORIES 3
#define NUM_BRANCHES 4

const char* categories[NUM_CATEGORIES] = {"General", "OBC", "SC/ST"};
const char* branches[NUM_BRANCHES] = {"CSE", "AIML", "DS","ECE"};

void displayColleges() {
    printf("Colleges and Branches:\n");
    printf("\n1. JNTU Hyderabad\n");
printf("\n2. Osmania University College of Engineering\n");
printf("\n3. Vasavi College of Engineering\n");
    printf("\n4. Chaitanya Bharathi Institute of Technology (CBIT)");
printf("\n5. Maturi Venkata Subba Rao  Engineering College (MVSR)");
printf("\n6.  Gokaraju Rangaraju Institute of Engineering and Technology GRIET\n");
    printf("\n7. VNR Vignana Jyothi Institute of Engineering and Technology");
printf("\n8. Sreenidhi Institute of Science and Technology\n");
    printf("9.Sreyas Institute of Engineering & Technology\n");
printf("\nC.V.R. College of Engineering\n");
}

// Function to predict colleges based on EAMCET rank, category, and gender
void predictCollege(int rank, int category, char gender) {
    // Use if-else ladder to predict colleges based on real-time cut-offs (simulated here)
    if (rank <= 10000) {
        if (category == 0) {
            printf("You can get admission to JNTU Hyderabad in CSE.\n");
        } else if (category == 1) {
            printf("You can get admission to Osmania University in DS.\n");
        } else {
            printf("You can get admission to Vasavi College in ECE.\n");
        }
    } else if (rank <= 20000) {
        // Add more conditions based on real-time cut-offs
        // ...
    } else {
        printf("Sorry, it seems difficult to predict a college for your rank.\n");
    }
}

int main() {
    int rank, category;
    char gender;

    printf("Enter your EAMCET rank: ");
    scanf("%d", &rank);

    printf("Select your category (0 for General, 1 for OBC, 2 for SC/ST): ");
    scanf("%d", &category);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    if (gender != 'M' && gender != 'F') {
        printf("Invalid gender. Please enter M or F.\n");
        return 1;
    }
    displayColleges();
    predictCollege(rank, category, gender);
return 0;
}
