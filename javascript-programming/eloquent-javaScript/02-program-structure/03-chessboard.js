#!/usr/bin/node
//Chessboard
let size = 8;
let board = "";

for (let high = 1; high <= size; high++) {

    for (let i = 1; i <= size; ++i) {
        if ((i + high) % 2 == 0) {
            board += " ";
        }
        else {
            board += "#";
        } 
    }

    board += "\n";
}

console.log(board);

