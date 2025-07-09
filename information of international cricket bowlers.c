#include <stdio.h>
#include <string.h>

#define SIZE 100

// Structure to store bowler information
struct Bowler {
    char name[50];
    char country[50];
    int total_wickets;
    int total_matches;
    int total_runs_conceded;
    float average;
};

int main() {
    struct Bowler bowlers[SIZE];
    int i, index_max = 0;
    float max_average = -1.0;

    // Input for 100 bowlers
    for (i = 0; i < SIZE; i++) {
        printf("Enter information for bowler %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", bowlers[i].name);  // take full line including spaces

        printf("Country: ");
        scanf(" %[^\n]", bowlers[i].country);

        printf("Total Matches Played: ");
        scanf("%d", &bowlers[i].total_matches);

        printf("Total Wickets Taken: ");
        scanf("%d", &bowlers[i].total_wickets);

        printf("Total Runs Conceded: ");
        scanf("%d", &bowlers[i].total_runs_conceded);

        // Calculate average only if wickets > 0
        if (bowlers[i].total_wickets > 0) {
            bowlers[i].average = (float)bowlers[i].total_runs_conceded / bowlers[i].total_wickets;
        } else {
            bowlers[i].average = 0.0;  // avoid division by zero
        }

        // Check for max average
        if (bowlers[i].average > max_average) {
            max_average = bowlers[i].average;
            index_max = i;
        }

        printf("\n");
    }

    // Print bowler with max average
    printf("\nBowler with Maximum Average:\n");
    printf("Name: %s\n", bowlers[index_max].name);
    printf("Country: %s\n", bowlers[index_max].country);
    printf("Total Matches: %d\n", bowlers[index_max].total_matches);
    printf("Total Wickets: %d\n", bowlers[index_max].total_wickets);
    printf("Total Runs Conceded: %d\n", bowlers[index_max].total_runs_conceded);
    printf("Average: %.2f\n", bowlers[index_max].average);

    return 0;
}


