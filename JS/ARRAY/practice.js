// Arrray splice
// let fruits = ['apple', 'banana', 'mango'];
// let newArry; 
// // newArry = fruits.splice(0,3)
// newArry = fruits.splice(0,3,'guava')

// console.log(newArry);
// console.log(fruits);

// Array Join
// let fruits = ['apple', 'banana', 'mango'];
// let newStr = fruits.join('->')
// console.log(newStr);


// create array with random numbers and sott it with sort method
// let arr = [5,44,57,2,774];
// arr.sort(function (a,b){
//     return b - a
// })
// console.log(arr);
// the reason behind a comaparator function because sort() converts the into strings the sort it

// Array Find Methods
// let arr = [5,44,57,2,774];
// let val = arr.find((ele)=>ele>1)
// console.log(val);


// array filter
// let arr = [5,44,57,2,774];
// let newArray = arr.filter((e)=>e>1000)
// console.log(newArray);

// array map 
// let arr = [5,44,57,2,774];
// let newarray = arr.map((e)=>e*1000)
// console.log(newarray);

// array reduce 
// let arr = [5,44,57,2,774];
// let ans  = arr.reduce((acc,cur)=>acc+cur,1000)
// arr.forEach((e)=>console.log(e*5)
// )


// create a reduce function
// let arr = [5,44,57,2,774];
// function callback(acc,cur){
//     return acc+cur
// }

// let init = 1000;
// function reduce(arr,callback,init){
//     arr.forEach(element => {
//         let ret = callback(init,element);
//         init = ret;
//     });
//     return init;
// }

// let ans  = reduce(arr,callback,init)
// console.log(ans);


// spread op 
arr = [5,44,57,2,774]
let newArray = [1,...arr,2]
console.log(newArray);

console.log(arr);

