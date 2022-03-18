const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', input => {
  const v = input.split('+');
  v.sort();
  console.log(v.join('+'));
  rl.close();
});

