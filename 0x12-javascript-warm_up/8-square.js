i#!/usr/bin/node
const size = Math.floor(Number(process.argv[2]));
if (isNaN(size)) {
  console.log('Missing size');
} else {
  for (let rowIndex = 0; rowIndex < size; rowIndex++) {
    let row = '';
    for (let colIndex = 0; colIndex < size; colIndex++) row += 'X';
    console.log(row);
  }
}
