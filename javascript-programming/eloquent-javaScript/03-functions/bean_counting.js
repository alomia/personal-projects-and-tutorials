#!/usr/bin/node
// Bean counting

// Count how many characters are in the string 
function countChar(str, char) {
    let count = 0;
    let countChar = 0;

    while (str[count]) {
        if (str[count] == char) countChar++;
        count++;
    }
    return countChar;
}

// Count how many "B" characters are in the string 
function countBs(str) {
    return countChar(str, "B");
}


console.log(countBs("BBC"));
console.log(countChar("kakkerlak", "k"));
