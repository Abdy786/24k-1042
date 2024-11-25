
#include <stdio.h>
#include <string.h>

// Structure to hold player details
struct cricketer {
    char fullName[20];
    char country[20];
};

// Structure to hold bowler details
struct bowlerDetails {
    char bowlingStyle[10]; // Options: seam, pace, spin
    char bowlingArm[6]; // Options: left, right
    struct cricketer playerInfo;
};

// Structure to hold batsman details
struct batsmanDetails {
    char battingOrder[10]; // Options: top, middle, lower
    char battingHand[8]; // Options: left, right
    struct bowlerDetails bowlerInfo;
};

// Functions to handle cricketer operations
void addCricketer(struct cricketer *c, const char *name, const char *team) {
    strcpy(c->fullName, name);
    strcpy(c->country, team);
}

void showCricketer(const struct cricketer *c) {
    printf("Full Name: %s, Country: %s\n", c->fullName, c->country);
}

void modifyCricketer(struct cricketer *c, const char *name, const char *team) {
    strcpy(c->fullName, name);
    strcpy(c->country, team);
}

void removeCricketer(struct cricketer *c) {
    strcpy(c->fullName, "");
    strcpy(c->country, "");
}

// Functions to handle bowler operations
void addBowler(struct bowlerDetails *b, const char *style, const char *arm, const char *name, const char *team) {
    strcpy(b->bowlingStyle, style);
    strcpy(b->bowlingArm, arm);
    addCricketer(&b->playerInfo, name, team);
}

void showBowler(const struct bowlerDetails *b) {
    printf("Style: %s, Arm: %s, ", b->bowlingStyle, b->bowlingArm);
    showCricketer(&b->playerInfo);
}

void modifyBowler(struct bowlerDetails *b, const char *style, const char *arm, const char *name, const char *team) {
    strcpy(b->bowlingStyle, style);
    strcpy(b->bowlingArm, arm);
    modifyCricketer(&b->playerInfo, name, team);
}

void removeBowler(struct bowlerDetails *b) {
    strcpy(b->bowlingStyle, "");
    strcpy(b->bowlingArm, "");
    removeCricketer(&b->playerInfo);
}

// Functions to handle batsman operations
void addBatsman(struct batsmanDetails *b, const char *order, const char *hand, const char *style, const char *arm, const char *name, const char *team) {
    strcpy(b->battingOrder, order);
    strcpy(b->battingHand, hand);
    addBowler(&b->bowlerInfo, style, arm, name, team);
}

void showBatsman(const struct batsmanDetails *b) {
    printf("Order: %s, Hand: %s, ", b->battingOrder, b->battingHand);
    showBowler(&b->bowlerInfo);
}

void modifyBatsman(struct batsmanDetails *b, const char *order, const char *hand, const char *style, const char *arm, const char *name, const char *team) {
    strcpy(b->battingOrder, order);
    strcpy(b->battingHand, hand);
    modifyBowler(&b->bowlerInfo, style, arm, name, team);
}

void removeBatsman(struct batsmanDetails *b) {
    strcpy(b->battingOrder, "");
    strcpy(b->battingHand, "");
    removeBowler(&b->bowlerInfo);
}

// File handling functions for cricketers
void saveCricketers(const char *filename, const struct cricketer players[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %s\n", players[i].fullName, players[i].country);
    }
    fclose(file);
}

void loadCricketers(const char *filename, struct cricketer players[], int *count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }
    *count = 0;
    while (fscanf(file, "%s %s", players[*count].fullName, players[*count].country) != EOF) {
        (*count)++;
    }
    fclose(file);
}

int main() {
    struct cricketer playerList[5];
    struct bowlerDetails bowlerList[3];
    struct batsmanDetails batsmanList[2];
    int cricketerCount, bowlerCount, batsmanCount;

    addCricketer(&playerList[0], "Joshua", "Australia");
    addCricketer(&playerList[1], "David", "England");
    addCricketer(&playerList[2], "Michael", "India");
    addCricketer(&playerList[3], "John", "Pakistan");
    addCricketer(&playerList[4], "James", "SouthAfrica");

    addBowler(&bowlerList[0], "Seam", "Right", "Joshua", "Australia");
    addBowler(&bowlerList[1], "Pace", "Left", "David", "England");
    addBowler(&bowlerList[2], "Spin", "Right", "Michael", "India");

    addBatsman(&batsmanList[0], "Top", "Left", "Seam", "Right", "John", "Pakistan");
    addBatsman(&batsmanList[1], "Middle", "Right", "Pace", "Left", "James", "SouthAfrica");

    return 0;
}
