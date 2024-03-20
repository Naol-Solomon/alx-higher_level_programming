#!/usr/bin/node
const myValue = process.argv[2];
const intValue = parseInt(myValue);
if (isNaN(intValue)) {
  console.log('Missing number of occurrences');
}
const myVar = 'C is fun';
let count = 0;
while (count < myValue) {
  console.log(myVar);
  count++;
}
