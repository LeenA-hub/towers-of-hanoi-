#include <stdio.h>   
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv) {
    int n = 3;
    int from = 1;
    int dest = 2;

    if (argc == 4) {
        n = atoi(argv[1]);
        from = atoi(argv[2]);
        dest = atoi(argv[3]);

        if (n <= 0) {
            fprintf(stderr, "Error: Number of disks must be a positive integer.\n");
            exit(1);
        }
        if (from < 1 || from > 3 || dest < 1 || dest > 3 || from == dest) {
            fprintf(stderr, "Error: Tower IDs must be 1, 2, or 3, and source and destination towers must be different.\n");
            exit(1);
        }
    } else if (argc == 2) {
        n = atoi(argv[1]);

        if (n <= 0) {
            fprintf(stderr, "Error: Number of disks must be a positive integer.\n");
            exit(1);
        }
    } else if (argc != 1) {
        fprintf(stderr, "Usage: towers [numberDisks] [fromTower] [toTower]\n");
        exit(1);
    }

    towers(n, from, dest);

    exit(0);
}
