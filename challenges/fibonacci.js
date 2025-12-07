const fibonacci = function(num){
  // console.log(num);
  if (num === 0) return 0;
  if (num === 1) return 1;
  return (fibonacci(num - 1) + fibonacci(num - 2));
};

console.log(fibonacci(2));
console.log(fibonacci(3));
console.log(fibonacci(4));
console.log(fibonacci(5));
console.log(fibonacci(6));