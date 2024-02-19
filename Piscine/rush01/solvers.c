//solvers.c
int solvePuzzle(SkyscraperPuzzle* puzzle, int rowConstraints[4][2], int colConstraints[4][2]);

int isValidPlacement(SkyscraperPuzzle* puzzle, int row, int col, int num, int rowConstraints[4][2], int colConstraints[4][2]);

int solvePuzzle(SkyscraperPuzzle* puzzle, int rowConstraints[4][2], int colConstraints[4][2]) {
    int row, col, isFilled = 1;

    // Find next empty cell
    for (row = 0; row < puzzle->size && isFilled; row++) {
        for (col = 0; col < puzzle->size; col++) {
            if (puzzle->grid[row][col] == 0) {
                isFilled = 0;
                break;
            }
        }
    }

    // If no empty cell is found, puzzle is solved
    if (isFilled) return 1;

    for (int num = 1; num <= puzzle->size; num++) {
        // Check if num can be placed at puzzle->grid[row][col]
        if (isValidPlacement(puzzle, row, col, num, rowConstraints, colConstraints)) {
            puzzle->grid[row][col] = num;

            // Recursively attempt to solve the rest of the puzzle
            if (solvePuzzle(puzzle, rowConstraints, colConstraints)) {
                return 1;  // Puzzle solved
            }

            puzzle->grid[row][col] = 0;  // Backtrack
        }
    }

    return 0;  // Trigger backtracking
}

int countVisibleSkyscrapers(int* line, int size, int position, int height) {
    int visible = 0, maxHeight = 0;
    
    for (int i = 0; i <= position; i++) {
        if (line[i] > maxHeight) {
            maxHeight = line[i];
            visible++;
        }
    }

    // If the current cell is being filled, consider it as well
    if (height > maxHeight) visible++;

    return visible;
}

int isValidPlacement(SkyscraperPuzzle* puzzle, int row, int col, int num, int rowConstraints[4][2], int colConstraints[4][2]) {
    // Check for the same number in the row and column
    for (int i = 0; i < puzzle->size; i++) {
        if (puzzle->grid[row][i] == num || puzzle->grid[i][col] == num) return 0;
    }

    // Check row constraints
    if (rowConstraints[row][0] != 0 && countVisibleSkyscrapers(puzzle->grid[row], puzzle->size, col, num) > rowConstraints[row][0]) return 0;
    if (rowConstraints[row][1] != 0 && countVisibleSkyscrapers(puzzle->grid[row], puzzle->size, col, num) > rowConstraints[row][1]) return 0;

    // Check column constraints (requires transposing the logic to columns)
    // Similar logic as rows, but you'll need to create a temporary array representing the column

    return 1; // If all checks pass

}

void updatePossibleValues(int possibleValues[4][4][5], int row, int col, int num) {
    // Remove 'num' from all cells in the same row and column
    for (int i = 0; i < 4; i++) {
        possibleValues[row][i][num] = 0;
        possibleValues[i][col][num] = 0;
    }
    // Set only 'num' as the possible value for the current cell
    for (int k = 1; k <= 4; k++) {
        possibleValues[row][col][k] = (k == num) ? 1 : 0;
    }
}

