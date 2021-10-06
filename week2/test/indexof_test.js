import * as _ from '../lodash.js'

console.log("_.indexOf([1, 2, 1, 2], 2) = ", _.indexof([1, 2, 1, 2], 2));
// => 1
 
// Search from the `fromIndex`.
console.log("_.indexOf([1, 2, 1, 2], 2, 2) = ", _.indexof([1, 2, 1, 2], 2, 2));
// => 3