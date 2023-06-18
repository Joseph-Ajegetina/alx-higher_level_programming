#!/usr/bin/node
if (process.argv.length <= 3) {
  console.log(0);
} else {
  const args = process.argv.map(Number);
  const argsValues = args.slice(2, process.argv.length)
  const argsValuesSorted = argsValues.sort((arg1, arg2) => arg1 - arg2);
  const targetValue = argsValuesSorted[args.length - 2]
  
  console.log(targetValue);
}
