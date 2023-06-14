#!/usr/bin/node
const value = process.argv[2] === 'undefined' ? 'No argument' : process.argv[2]
console.log(typeof value);
