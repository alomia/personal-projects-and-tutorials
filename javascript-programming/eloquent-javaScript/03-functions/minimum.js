#!/usr/bin/node
// Minimum

function min (a, b) {
    let min = a;
    
    if (b < a) {
        min = b;
    }

    return min;
}

console.log(min(0, 10));
console.log(min(0, -10));
