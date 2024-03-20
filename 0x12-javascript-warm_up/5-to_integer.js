#!/usr/bin/node
const myVar = process.argv[2];
const intValue = parseInt(myVar);
if (isNaN(intValue)) {
  console.log('Not a number');
} else {
  console.log('My number: ' + intValue);
}
