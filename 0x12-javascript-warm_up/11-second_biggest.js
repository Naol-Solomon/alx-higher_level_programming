#!/usr/bin/node 
const args = process.argv.slice(2);
const integers = args.map(arg => parseInt(arg));

if (integers.length < 2) {
  console.log(0);
} else {
  let largest = integers[0];
  let secondLargest = integers[1];

  for (let i = 2; i < integers.length; i++) {
    if (integers[i] > largest) {
      secondLargest = largest;
      largest = integers[i];
    } else if (integers[i] > secondLargest && integers[i] !== largest) {
      secondLargest = integers[i];
    }
  }

  console.log(secondLargest);
}
