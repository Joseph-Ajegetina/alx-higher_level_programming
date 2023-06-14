#!/usr/bin/node
const num = Math.floor(Number(process.argv[2]));
const result = isNaN(num) ? 'Not a number' : `My number: ${num}`
console.log(result)
